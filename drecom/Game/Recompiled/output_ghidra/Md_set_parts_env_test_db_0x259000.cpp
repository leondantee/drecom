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

// Function: Md_set_parts_env_test_db
// Address: 0x259000 - 0x259040
void Md_set_parts_env_test_db_0x259000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_parts_env_test_db_0x259000");
#endif

    ctx->pc = 0x259000u;

    // 0x259000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259004: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259008: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x259008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x25900c: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x25900cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x259010: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x259010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x259014: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x259014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x259018: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x259018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25901c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x259020: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259024: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x259024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x259028: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x259028u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25902c: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x25902cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x259030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259034: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259038: 0x3e00008  jr          $ra
    ctx->pc = 0x259038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259040u;
}
