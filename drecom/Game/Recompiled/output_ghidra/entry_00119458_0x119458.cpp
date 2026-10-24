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

// Function: entry_00119458
// Address: 0x119458 - 0x119490
void entry_00119458_0x119458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119458_0x119458");
#endif

    switch (ctx->pc) {
        case 0x11947cu: goto label_11947c;
        default: break;
    }

    ctx->pc = 0x119458u;

    // 0x119458: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x119458u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x11945c: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x11945Cu;
    {
        const bool branch_taken_0x11945c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x119460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11945Cu;
        // 0x119460: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11945c) {
            ctx->pc = 0x1194ECu;
            return;
        }
    }
    ctx->pc = 0x119464u;
    // 0x119464: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x119464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x119468: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x119468u;
    {
        const bool branch_taken_0x119468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119468u;
        // 0x11946c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119468) {
            ctx->pc = 0x1194B8u;
            return;
        }
    }
    ctx->pc = 0x119470u;
    // 0x119470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119474: 0xc046468  jal         func_1191A0
    ctx->pc = 0x119474u;
    SET_GPR_U32(ctx, 31, 0x11947Cu);
    ctx->pc = 0x119478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119474u;
    // 0x119478: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191A0u, 0x119474u, 0x11947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11947Cu;
label_11947c:
    // 0x11947c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11947cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119480: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x119480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x119484: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x119484u;
    {
        const bool branch_taken_0x119484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119484u;
        // 0x119488: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119484) {
            ctx->pc = 0x1194B4u;
            return;
        }
    }
    ctx->pc = 0x11948Cu;
    // 0x11948c: 0x0  nop
    ctx->pc = 0x11948cu;
    // NOP
    ctx->pc = 0x119490u;
}
