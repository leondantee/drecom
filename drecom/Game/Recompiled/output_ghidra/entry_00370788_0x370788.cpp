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

// Function: entry_00370788
// Address: 0x370788 - 0x3707d4
void entry_00370788_0x370788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370788_0x370788");
#endif

    ctx->pc = 0x370788u;

    // 0x370788: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37078c: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x37078cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x370790: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370794: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x370794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x370798: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x370798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x37079c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x37079cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3707a0: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x3707a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x3707a4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3707a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3707a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3707a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3707ac: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x3707acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x3707b0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3707b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3707b4: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x3707b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x3707b8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3707b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3707bc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3707bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3707c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3707c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3707c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3707c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3707c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3707c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3707cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3707CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3707CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3707D4u;
}
