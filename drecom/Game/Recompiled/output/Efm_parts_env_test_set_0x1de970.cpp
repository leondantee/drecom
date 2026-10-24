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

// Function: Efm_parts_env_test_set
// Address: 0x1de970 - 0x1de9b0
void Efm_parts_env_test_set_0x1de970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_parts_env_test_set_0x1de970");
#endif

    ctx->pc = 0x1de970u;

    // 0x1de970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1de978: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1de978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1de97c: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x1de97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x1de980: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1de980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1de984: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1de984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de988: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1de988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1de98c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1de98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de990: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de994: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x1de994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1de998: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x1de998u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de99c: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x1de99cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x1de9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de9a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1de9a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1de9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE9B0u;
}
