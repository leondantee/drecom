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

// Function: entry_00373fd8
// Address: 0x373fd8 - 0x374014
void entry_00373fd8_0x373fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373fd8_0x373fd8");
#endif

    ctx->pc = 0x373fd8u;

    // 0x373fd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x373fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x373fdc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x373fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x373fe0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x373fe0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x373fe4: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x373fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x373fe8: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x373fe8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x373fec: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x373FECu;
    {
        const bool branch_taken_0x373fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373fec) {
            ctx->pc = 0x373EC0u;
            return;
        }
    }
    ctx->pc = 0x373FF4u;
    // 0x373ff4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x373ff4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373ff8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x373ff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373ffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x373ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374008: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x374008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x37400c: 0x3e00008  jr          $ra
    ctx->pc = 0x37400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37400Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374014u;
}
