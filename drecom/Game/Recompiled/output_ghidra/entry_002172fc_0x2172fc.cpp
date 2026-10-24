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

// Function: entry_002172fc
// Address: 0x2172fc - 0x217328
void entry_002172fc_0x2172fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002172fc_0x2172fc");
#endif

    switch (ctx->pc) {
        case 0x217318u: goto label_217318;
        default: break;
    }

    ctx->pc = 0x2172fcu;

    // 0x2172fc: 0x2451cee8  addiu       $s1, $v0, -0x3118
    ctx->pc = 0x2172fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954728));
    // 0x217300: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x217300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x217304: 0x24a5aabc  addiu       $a1, $a1, -0x5544
    ctx->pc = 0x217304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945468));
    // 0x217308: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21730c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217310: 0xc046280  jal         func_118A00
    ctx->pc = 0x217310u;
    SET_GPR_U32(ctx, 31, 0x217318u);
    ctx->pc = 0x217314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217310u;
    // 0x217314: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A00u;
    {
        ctx->pc = 0x217318u;
        ps2_stubs::memcmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217318u) { return; }
    ctx->pc = 0x217318u;
label_217318:
    // 0x217318: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x217318u;
    {
        const bool branch_taken_0x217318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217318u;
        // 0x21731c: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217318) {
            ctx->pc = 0x217334u;
            return;
        }
    }
    ctx->pc = 0x217320u;
    // 0x217320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217324: 0x8c45ab04  lw          $a1, -0x54FC($v0)
    ctx->pc = 0x217324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945540)));
    ctx->pc = 0x217328u;
}
