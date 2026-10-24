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

// Function: entry_0010c4a0
// Address: 0x10c4a0 - 0x10c4f4
void entry_0010c4a0_0x10c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c4a0_0x10c4a0");
#endif

    switch (ctx->pc) {
        case 0x10c4c8u: goto label_10c4c8;
        default: break;
    }

    ctx->pc = 0x10c4a0u;

    // 0x10c4a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10c4a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c4a8: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10c4ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c4b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c4b4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c4b8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x10C4B8u;
    {
        const bool branch_taken_0x10c4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4B8u;
        // 0x10c4bc: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4b8) {
            ctx->pc = 0x10C4F4u;
            return;
        }
    }
    ctx->pc = 0x10C4C0u;
    // 0x10c4c0: 0xc0430d6  jal         func_10C358
    ctx->pc = 0x10C4C0u;
    SET_GPR_U32(ctx, 31, 0x10C4C8u);
    ctx->pc = 0x10C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4C0u;
    // 0x10c4c4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C358u, 0x10C4C0u, 0x10C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4C8u;
label_10c4c8:
    // 0x10c4c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10c4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4cc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10c4d0: 0x90820070  lbu         $v0, 0x70($a0)
    ctx->pc = 0x10c4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x10c4d4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C4D4u;
    {
        const bool branch_taken_0x10c4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4D4u;
        // 0x10c4d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4d4) {
            ctx->pc = 0x10C4F8u;
            return;
        }
    }
    ctx->pc = 0x10C4DCu;
    // 0x10c4dc: 0x90830071  lbu         $v1, 0x71($a0)
    ctx->pc = 0x10c4dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
    // 0x10c4e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c4e4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C4E4u;
    {
        const bool branch_taken_0x10c4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10c4e4) {
            ctx->pc = 0x10C4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C4E4u;
            // 0x10c4e8: 0x90820070  lbu         $v0, 0x70($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C4F8u;
            return;
        }
    }
    ctx->pc = 0x10C4ECu;
    // 0x10c4ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10C4ECu;
    {
        const bool branch_taken_0x10c4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4ECu;
        // 0x10c4f0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4ec) {
            ctx->pc = 0x10C4F8u;
            return;
        }
    }
    ctx->pc = 0x10C4F4u;
}
