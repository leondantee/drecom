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

// Function: entry_002165e0
// Address: 0x2165e0 - 0x21660c
void entry_002165e0_0x2165e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002165e0_0x2165e0");
#endif

    ctx->pc = 0x2165e0u;

label_2165e0:
    // 0x2165e0: 0x29020400  slti        $v0, $t0, 0x400
    ctx->pc = 0x2165e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2165e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2165E4u;
    {
        const bool branch_taken_0x2165e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165E4u;
        // 0x2165e8: 0x2081021  addu        $v0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165e4) {
            ctx->pc = 0x216614u;
            return;
        }
    }
    ctx->pc = 0x2165ECu;
    // 0x2165ec: 0x2482021  addu        $a0, $s2, $t0
    ctx->pc = 0x2165ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x2165f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2165f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2165f4: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x2165f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x2165f8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2165f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2165fc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2165FCu;
    {
        const bool branch_taken_0x2165fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2165fc) {
            ctx->pc = 0x216600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2165FCu;
            // 0x216600: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2165E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2165e0;
        }
    }
    ctx->pc = 0x216604u;
    // 0x216604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x216604u;
    {
        const bool branch_taken_0x216604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216604u;
        // 0x216608: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216604) {
            ctx->pc = 0x216618u;
            return;
        }
    }
    ctx->pc = 0x21660Cu;
}
