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

// Function: Scr_parts_env_zbuff_set
// Address: 0x13d670 - 0x13d6b0
void Scr_parts_env_zbuff_set_0x13d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_env_zbuff_set_0x13d670");
#endif

    ctx->pc = 0x13d670u;

    // 0x13d670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d678: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x13d678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x13d67c: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x13d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x13d680: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x13d680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x13d684: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13d684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13d688: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x13d688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13d68c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d690: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13d690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d694: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x13d694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x13d698: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x13d698u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d69c: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x13d69cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x13d6a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d6a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D6B0u;
}
