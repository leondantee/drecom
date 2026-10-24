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

// Function: entry_001737e0
// Address: 0x1737e0 - 0x173810
void entry_001737e0_0x1737e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001737e0_0x1737e0");
#endif

    ctx->pc = 0x1737e0u;

    // 0x1737e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1737e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1737e4: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x1737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x1737e8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1737e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1737ec: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1737ECu;
    {
        const bool branch_taken_0x1737ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1737ec) {
            ctx->pc = 0x173784u;
            return;
        }
    }
    ctx->pc = 0x1737F4u;
    // 0x1737f4: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1737f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1737f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1737f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1737fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1737fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173804: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x173804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173808: 0x3e00008  jr          $ra
    ctx->pc = 0x173808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173810u;
}
