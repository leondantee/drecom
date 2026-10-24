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

// Function: Tim2GetLog2
// Address: 0x179dd0 - 0x179e40
void Tim2GetLog2_0x179dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tim2GetLog2_0x179dd0");
#endif

    switch (ctx->pc) {
        case 0x179de8u: goto label_179de8;
        default: break;
    }

    ctx->pc = 0x179dd0u;

    // 0x179dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179dd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179dd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x179dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x179ddc: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x179ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x179de0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x179DE0u;
    {
        const bool branch_taken_0x179de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179de0) {
            ctx->pc = 0x179E08u;
            goto label_179e08;
        }
    }
    ctx->pc = 0x179DE8u;
label_179de8:
    // 0x179de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179dec: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x179decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x179df0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x179df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179df4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x179df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x179df8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179DF8u;
    {
        const bool branch_taken_0x179df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179df8) {
            ctx->pc = 0x179E10u;
            goto label_179e10;
        }
    }
    ctx->pc = 0x179E00u;
    // 0x179e00: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x179e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x179e04: 0x0  nop
    ctx->pc = 0x179e04u;
    // NOP
label_179e08:
    // 0x179e08: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x179E08u;
    {
        const bool branch_taken_0x179e08 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x179e08) {
            ctx->pc = 0x179DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179de8;
        }
    }
    ctx->pc = 0x179E10u;
label_179e10:
    // 0x179e10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x179e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179e18: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x179e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x179e1c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x179e1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x179e20: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x179E20u;
    {
        const bool branch_taken_0x179e20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179e20) {
            ctx->pc = 0x179E2Cu;
            goto label_179e2c;
        }
    }
    ctx->pc = 0x179E28u;
    // 0x179e28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x179e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_179e2c:
    // 0x179e2c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x179e2cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x179e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179e34: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x179e34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x179e38: 0x3e00008  jr          $ra
    ctx->pc = 0x179E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179E40u;
}
