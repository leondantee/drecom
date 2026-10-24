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

// Function: entry_00374608
// Address: 0x374608 - 0x374644
void entry_00374608_0x374608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374608_0x374608");
#endif

    ctx->pc = 0x374608u;

    // 0x374608: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x374608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37460c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x37460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x374610: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x374610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x374614: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x374614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374618: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x374618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37461c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x37461Cu;
    {
        const bool branch_taken_0x37461c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37461c) {
            ctx->pc = 0x374560u;
            return;
        }
    }
    ctx->pc = 0x374624u;
    // 0x374624: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x374624u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374628: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x374628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37462c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37462cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374638: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x374638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37463c: 0x3e00008  jr          $ra
    ctx->pc = 0x37463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374644u;
}
