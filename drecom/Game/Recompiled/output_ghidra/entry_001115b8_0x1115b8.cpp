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

// Function: entry_001115b8
// Address: 0x1115b8 - 0x1115fc
void entry_001115b8_0x1115b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001115b8_0x1115b8");
#endif

    switch (ctx->pc) {
        case 0x1115e8u: goto label_1115e8;
        case 0x1115f4u: goto label_1115f4;
        default: break;
    }

    ctx->pc = 0x1115b8u;

    // 0x1115b8: 0x1cc00010  bgtz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1115B8u;
    {
        const bool branch_taken_0x1115b8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1115BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115B8u;
        // 0x1115bc: 0x62d03  sra         $a1, $a2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115b8) {
            ctx->pc = 0x1115FCu;
            return;
        }
    }
    ctx->pc = 0x1115C0u;
    // 0x1115c0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1115c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1115c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1115c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1115c8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1115c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1115cc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1115ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1115d0: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1115D0u;
    {
        const bool branch_taken_0x1115d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115D0u;
        // 0x1115d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115d0) {
            ctx->pc = 0x111838u;
            return;
        }
    }
    ctx->pc = 0x1115D8u;
    // 0x1115d8: 0x4c10008  bgez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1115D8u;
    {
        const bool branch_taken_0x1115d8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1115DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115D8u;
        // 0x1115dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115d8) {
            ctx->pc = 0x1115FCu;
            return;
        }
    }
    ctx->pc = 0x1115E0u;
    // 0x1115e0: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1115E0u;
    SET_GPR_U32(ctx, 31, 0x1115E8u);
    ctx->pc = 0x1115E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115E0u;
    // 0x1115e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1115E0u, 0x1115E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115E8u;
label_1115e8:
    // 0x1115e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1115e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115ec: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1115ECu;
    SET_GPR_U32(ctx, 31, 0x1115F4u);
    ctx->pc = 0x1115F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115ECu;
    // 0x1115f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1115ECu, 0x1115F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115F4u;
label_1115f4:
    // 0x1115f4: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1115F4u;
    {
        const bool branch_taken_0x1115f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115F4u;
        // 0x1115f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115f4) {
            ctx->pc = 0x11183Cu;
            return;
        }
    }
    ctx->pc = 0x1115FCu;
}
