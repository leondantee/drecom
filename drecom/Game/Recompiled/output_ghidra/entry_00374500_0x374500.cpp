#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00374500
// Address: 0x374500 - 0x37453c
void entry_00374500_0x374500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374500_0x374500");
#endif

    ctx->pc = 0x374500u;

    // 0x374500: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x374500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x374504: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374508: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x374508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x37450c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37450cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374510: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x374510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x374514: 0x1460ff3a  bnez        $v1, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x374514u;
    {
        const bool branch_taken_0x374514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374514) {
            ctx->pc = 0x374200u;
            return;
        }
    }
    ctx->pc = 0x37451Cu;
    // 0x37451c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x37451cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374520: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x374520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x374524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37452c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37452cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374530: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x374530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x374534: 0x3e00008  jr          $ra
    ctx->pc = 0x374534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37453Cu;
}
