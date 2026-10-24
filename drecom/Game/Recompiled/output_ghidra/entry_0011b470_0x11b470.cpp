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

// Function: entry_0011b470
// Address: 0x11b470 - 0x11b4b4
void entry_0011b470_0x11b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b470_0x11b470");
#endif

    switch (ctx->pc) {
        case 0x11b490u: goto label_11b490;
        default: break;
    }

    ctx->pc = 0x11b470u;

label_11b470:
    // 0x11b470: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x11b470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x11b474: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x11b474u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x11b478: 0x8ca4490c  lw          $a0, 0x490C($a1)
    ctx->pc = 0x11b478u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38490Cu));
    // 0x11b47c: 0x8cc74910  lw          $a3, 0x4910($a2)
    ctx->pc = 0x11b47cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x384910u));
    // 0x11b480: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x11b480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x11b484: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x11b484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b488: 0xc046238  jal         func_1188E0
    ctx->pc = 0x11B488u;
    SET_GPR_U32(ctx, 31, 0x11B490u);
    ctx->pc = 0x11B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B488u;
    // 0x11b48c: 0x8fa8021c  lw          $t0, 0x21C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1188E0u;
    {
        ctx->pc = 0x11B490u;
        ps2_stubs::mbtowc_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11B490u) { return; }
    ctx->pc = 0x11B490u;
label_11b490:
    // 0x11b490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b494: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B494u;
    {
        const bool branch_taken_0x11b494 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B494u;
        // 0x11b498: 0x8fa301ec  lw          $v1, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b494) {
            ctx->pc = 0x11B4B4u;
            return;
        }
    }
    ctx->pc = 0x11B49Cu;
    // 0x11b49c: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x11b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x11b4a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11b4a4: 0x1452fff2  bne         $v0, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x11B4A4u;
    {
        const bool branch_taken_0x11b4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x11B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4A4u;
        // 0x11b4a8: 0xafa301ec  sw          $v1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4a4) {
            ctx->pc = 0x11B470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b470;
        }
    }
    ctx->pc = 0x11B4ACu;
    // 0x11b4ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11b4b0: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x11b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
    ctx->pc = 0x11b4b4u;
}
