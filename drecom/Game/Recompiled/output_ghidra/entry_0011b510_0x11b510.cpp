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

// Function: entry_0011b510
// Address: 0x11b510 - 0x11b53c
void entry_0011b510_0x11b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b510_0x11b510");
#endif

    ctx->pc = 0x11b510u;

    // 0x11b510: 0x1a0004c9  blez        $s0, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x11B510u;
    {
        const bool branch_taken_0x11b510 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B510u;
        // 0x11b514: 0x8fa601ec  lw          $a2, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b510) {
            ctx->pc = 0x11C838u;
            return;
        }
    }
    ctx->pc = 0x11B518u;
    // 0x11b518: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x11b518u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b51c: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x11b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x11b520: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11b520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b524: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11b524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11b528: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x11b528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x11b52c: 0xafa601ec  sw          $a2, 0x1EC($sp)
    ctx->pc = 0x11b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
    // 0x11b530: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x11b530u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b534: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B534u;
    {
        const bool branch_taken_0x11b534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B534u;
        // 0x11b538: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b534) {
            ctx->pc = 0x11B54Cu;
            return;
        }
    }
    ctx->pc = 0x11B53Cu;
}
