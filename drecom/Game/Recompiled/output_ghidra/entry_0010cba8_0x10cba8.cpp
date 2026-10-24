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

// Function: entry_0010cba8
// Address: 0x10cba8 - 0x10cbec
void entry_0010cba8_0x10cba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cba8_0x10cba8");
#endif

    switch (ctx->pc) {
        case 0x10cbd0u: goto label_10cbd0;
        default: break;
    }

    ctx->pc = 0x10cba8u;

    // 0x10cba8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10cbac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cbb0: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10cbb4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10cbb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10cbbc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10cbc0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x10CBC0u;
    {
        const bool branch_taken_0x10cbc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBC0u;
        // 0x10cbc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbc0) {
            ctx->pc = 0x10CC38u;
            return;
        }
    }
    ctx->pc = 0x10CBC8u;
    // 0x10cbc8: 0xc0430d6  jal         func_10C358
    ctx->pc = 0x10CBC8u;
    SET_GPR_U32(ctx, 31, 0x10CBD0u);
    ctx->pc = 0x10CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBC8u;
    // 0x10cbcc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C358u, 0x10CBC8u, 0x10CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBD0u;
label_10cbd0:
    // 0x10cbd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10cbd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cbd8: 0x90c20072  lbu         $v0, 0x72($a2)
    ctx->pc = 0x10cbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 114)));
    // 0x10cbdc: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CBDCu;
    {
        const bool branch_taken_0x10cbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10cbdc) {
            ctx->pc = 0x10CBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CBDCu;
            // 0x10cbe0: 0x90c20064  lbu         $v0, 0x64($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CBECu;
            return;
        }
    }
    ctx->pc = 0x10CBE4u;
    // 0x10cbe4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10CBE4u;
    {
        const bool branch_taken_0x10cbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBE4u;
        // 0x10cbe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbe4) {
            ctx->pc = 0x10CC38u;
            return;
        }
    }
    ctx->pc = 0x10CBECu;
}
