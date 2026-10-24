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

// Function: entry_001060e8
// Address: 0x1060e8 - 0x106124
void entry_001060e8_0x1060e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001060e8_0x1060e8");
#endif

    switch (ctx->pc) {
        case 0x1060f0u: goto label_1060f0;
        case 0x1060f8u: goto label_1060f8;
        case 0x106100u: goto label_106100;
        case 0x10611cu: goto label_10611c;
        default: break;
    }

    ctx->pc = 0x1060e8u;

    // 0x1060e8: 0xc041c58  jal         func_107160
    ctx->pc = 0x1060E8u;
    SET_GPR_U32(ctx, 31, 0x1060F0u);
    ctx->pc = 0x1060ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060E8u;
    // 0x1060ec: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x1060E8u, 0x1060F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060F0u;
label_1060f0:
    // 0x1060f0: 0xc041d12  jal         func_107448
    ctx->pc = 0x1060F0u;
    SET_GPR_U32(ctx, 31, 0x1060F8u);
    ctx->pc = 0x107448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107448u, 0x1060F0u, 0x1060F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060F8u;
label_1060f8:
    // 0x1060f8: 0xc041792  jal         func_105E48
    ctx->pc = 0x1060F8u;
    SET_GPR_U32(ctx, 31, 0x106100u);
    ctx->pc = 0x1060FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060F8u;
    // 0x1060fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E48u, 0x1060F8u, 0x106100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106100u;
label_106100:
    // 0x106100: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x106100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106104: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x106104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x106108: 0x8e823d08  lw          $v0, 0x3D08($s4)
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15624)));
    // 0x10610c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10610Cu;
    {
        const bool branch_taken_0x10610c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10610Cu;
        // 0x106110: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10610c) {
            ctx->pc = 0x106124u;
            return;
        }
    }
    ctx->pc = 0x106114u;
    // 0x106114: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x106114u;
    SET_GPR_U32(ctx, 31, 0x10611Cu);
    ctx->pc = 0x106118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106114u;
    // 0x106118: 0x2484c700  addiu       $a0, $a0, -0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x106114u, 0x10611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10611Cu;
label_10611c:
    // 0x10611c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10611Cu;
    {
        const bool branch_taken_0x10611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10611Cu;
        // 0x106120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10611c) {
            ctx->pc = 0x106180u;
            return;
        }
    }
    ctx->pc = 0x106124u;
}
