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

// Function: entry_00213e04
// Address: 0x213e04 - 0x213e30
void entry_00213e04_0x213e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213e04_0x213e04");
#endif

    switch (ctx->pc) {
        case 0x213e20u: goto label_213e20;
        default: break;
    }

    ctx->pc = 0x213e04u;

    // 0x213e04: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x213e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x213e08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x213e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213e0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x213e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x213e10: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x213e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x213e14: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x213e14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x213e18: 0xc084f2c  jal         func_213CB0
    ctx->pc = 0x213E18u;
    SET_GPR_U32(ctx, 31, 0x213E20u);
    ctx->pc = 0x213E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E18u;
    // 0x213e1c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213CB0u, 0x213E18u, 0x213E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E20u;
label_213e20:
    // 0x213e20: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x213e20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x213e24: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x213e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x213e28: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x213E28u;
    {
        const bool branch_taken_0x213e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213e28) {
            ctx->pc = 0x213E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213E28u;
            // 0x213e2c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213E00u;
            return;
        }
    }
    ctx->pc = 0x213E30u;
}
