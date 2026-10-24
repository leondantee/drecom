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

// Function: default
// Address: 0x355010 - 0x355044
void ps2_default_0x355010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x355010");
#endif

    ctx->pc = 0x355010u;

    // 0x355010: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x355010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x355014: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x355014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x355018: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x355018u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x35501c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x35501cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x355020: 0x1480fafe  bnez        $a0, . + 4 + (-0x502 << 2)
    ctx->pc = 0x355020u;
    {
        const bool branch_taken_0x355020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x355020) {
            ctx->pc = 0x353C1Cu;
            return;
        }
    }
    ctx->pc = 0x355028u;
    // 0x355028: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x355028u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35502c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35502cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355038: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x355038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x35503c: 0x3e00008  jr          $ra
    ctx->pc = 0x35503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355044u;
}
