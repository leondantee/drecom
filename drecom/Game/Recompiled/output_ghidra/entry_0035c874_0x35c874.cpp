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

// Function: entry_0035c874
// Address: 0x35c874 - 0x35c8a0
void entry_0035c874_0x35c874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035c874_0x35c874");
#endif

    ctx->pc = 0x35c874u;

    // 0x35c874: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x35c874u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35c878: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x35c878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c87c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x35c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x35c880: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x35c880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35c884: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x35c884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x35c888: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x35c888u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35c88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c894: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35c894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35c898: 0x3e00008  jr          $ra
    ctx->pc = 0x35C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C8A0u;
}
