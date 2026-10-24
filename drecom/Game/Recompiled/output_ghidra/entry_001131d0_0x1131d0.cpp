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

// Function: entry_001131d0
// Address: 0x1131d0 - 0x11320c
void entry_001131d0_0x1131d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001131d0_0x1131d0");
#endif

    switch (ctx->pc) {
        case 0x1131e0u: goto label_1131e0;
        case 0x1131ecu: goto label_1131ec;
        case 0x113200u: goto label_113200;
        default: break;
    }

    ctx->pc = 0x1131d0u;

label_1131d0:
    // 0x1131d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1131d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1131d4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1131d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1131d8: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1131D8u;
    SET_GPR_U32(ctx, 31, 0x1131E0u);
    ctx->pc = 0x1131DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131D8u;
    // 0x1131dc: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1131D8u, 0x1131E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131E0u;
label_1131e0:
    // 0x1131e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1131e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131e4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1131E4u;
    SET_GPR_U32(ctx, 31, 0x1131ECu);
    ctx->pc = 0x1131E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131E4u;
    // 0x1131e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1131E4u, 0x1131ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131ECu;
label_1131ec:
    // 0x1131ec: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x1131ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x1131f0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1131f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1131f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1131f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131f8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1131F8u;
    SET_GPR_U32(ctx, 31, 0x113200u);
    ctx->pc = 0x1131FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131F8u;
    // 0x1131fc: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1131F8u, 0x113200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113200u;
label_113200:
    // 0x113200: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x113200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x113204: 0x681fff2  bgez        $s4, . + 4 + (-0xE << 2)
    ctx->pc = 0x113204u;
    {
        const bool branch_taken_0x113204 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x113208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113204u;
        // 0x113208: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113204) {
            ctx->pc = 0x1131D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1131d0;
        }
    }
    ctx->pc = 0x11320Cu;
}
