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

// Function: Em_dummy_dm_ck
// Address: 0x15ac70 - 0x15acc0
void Em_dummy_dm_ck_0x15ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_dummy_dm_ck_0x15ac70");
#endif

    ctx->pc = 0x15ac70u;

    // 0x15ac70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ac74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ac74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ac78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x15ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x15ac7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ac80: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x15ac80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x15ac84: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15AC84u;
    {
        const bool branch_taken_0x15ac84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ac84) {
            ctx->pc = 0x15ACB0u;
            goto label_15acb0;
        }
    }
    ctx->pc = 0x15AC8Cu;
    // 0x15ac8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ac90: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x15ac90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ac94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ac98: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x15ac98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x15ac9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15aca0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x15aca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x15aca4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15aca8: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x15aca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x15acac: 0x0  nop
    ctx->pc = 0x15acacu;
    // NOP
label_15acb0:
    // 0x15acb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15acb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15acb4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15acb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15acb8: 0x3e00008  jr          $ra
    ctx->pc = 0x15ACB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ACB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ACC0u;
}
