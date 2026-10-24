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

// Function: entry_001092fc
// Address: 0x1092fc - 0x109314
void entry_001092fc_0x1092fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001092fc_0x1092fc");
#endif

    ctx->pc = 0x1092fcu;

    // 0x1092fc: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1092FCu;
    {
        const bool branch_taken_0x1092fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x109300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092FCu;
        // 0x109300: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092fc) {
            ctx->pc = 0x109320u;
            return;
        }
    }
    ctx->pc = 0x109304u;
    // 0x109304: 0x11110005  beq         $t0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x109304u;
    {
        const bool branch_taken_0x109304 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x109308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109304u;
        // 0x109308: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109304) {
            ctx->pc = 0x10931Cu;
            return;
        }
    }
    ctx->pc = 0x10930Cu;
    // 0x10930c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10930Cu;
    {
        const bool branch_taken_0x10930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10930Cu;
        // 0x109310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10930c) {
            ctx->pc = 0x109324u;
            return;
        }
    }
    ctx->pc = 0x109314u;
}
