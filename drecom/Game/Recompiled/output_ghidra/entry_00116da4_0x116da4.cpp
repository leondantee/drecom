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

// Function: entry_00116da4
// Address: 0x116da4 - 0x116de0
void entry_00116da4_0x116da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116da4_0x116da4");
#endif

    switch (ctx->pc) {
        case 0x116db0u: goto label_116db0;
        case 0x116dc0u: goto label_116dc0;
        default: break;
    }

    ctx->pc = 0x116da4u;

    // 0x116da4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116da8: 0xc046542  jal         func_119508
    ctx->pc = 0x116DA8u;
    SET_GPR_U32(ctx, 31, 0x116DB0u);
    ctx->pc = 0x116DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DA8u;
    // 0x116dac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116DA8u, 0x116DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DB0u;
label_116db0:
    // 0x116db0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x116db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x116db4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x116db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x116db8: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116DB8u;
    SET_GPR_U32(ctx, 31, 0x116DC0u);
    ctx->pc = 0x116DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DB8u;
    // 0x116dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116DB8u, 0x116DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DC0u;
label_116dc0:
    // 0x116dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dc4: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116DC4u;
    {
        const bool branch_taken_0x116dc4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x116dc4) {
            ctx->pc = 0x116DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116DC4u;
            // 0x116dc8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116DE4u;
            return;
        }
    }
    ctx->pc = 0x116DCCu;
    // 0x116dcc: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x116DCCu;
    {
        const bool branch_taken_0x116dcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x116DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DCCu;
        // 0x116dd0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116dcc) {
            ctx->pc = 0x116E30u;
            return;
        }
    }
    ctx->pc = 0x116DD4u;
    // 0x116dd4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x116dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x116dd8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x116DD8u;
    {
        const bool branch_taken_0x116dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116dd8) {
            ctx->pc = 0x116DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116DD8u;
            // 0x116ddc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E34u;
            return;
        }
    }
    ctx->pc = 0x116DE0u;
}
