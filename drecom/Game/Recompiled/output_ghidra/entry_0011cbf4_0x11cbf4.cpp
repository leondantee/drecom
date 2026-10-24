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

// Function: entry_0011cbf4
// Address: 0x11cbf4 - 0x11cc20
void entry_0011cbf4_0x11cbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cbf4_0x11cbf4");
#endif

    switch (ctx->pc) {
        case 0x11cc18u: goto label_11cc18;
        default: break;
    }

    ctx->pc = 0x11cbf4u;

    // 0x11cbf4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x11CBF4u;
    {
        const bool branch_taken_0x11cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cbf4) {
            ctx->pc = 0x11CBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CBF4u;
            // 0x11cbf8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CC3Cu;
            return;
        }
    }
    ctx->pc = 0x11CBFCu;
    // 0x11cbfc: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x11cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11cc00: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CC00u;
    {
        const bool branch_taken_0x11cc00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC00u;
        // 0x11cc04: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc00) {
            ctx->pc = 0x11CC20u;
            return;
        }
    }
    ctx->pc = 0x11CC08u;
    // 0x11cc08: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CC08u;
    {
        const bool branch_taken_0x11cc08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11cc08) {
            ctx->pc = 0x11CC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CC08u;
            // 0x11cc0c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CC20u;
            return;
        }
    }
    ctx->pc = 0x11CC10u;
    // 0x11cc10: 0xc045cc4  jal         func_117310
    ctx->pc = 0x11CC10u;
    SET_GPR_U32(ctx, 31, 0x11CC18u);
    ctx->pc = 0x11CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC10u;
    // 0x11cc14: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117310u;
    {
        ctx->pc = 0x11CC18u;
        ps2_stubs::free_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11CC18u) { return; }
    ctx->pc = 0x11CC18u;
label_11cc18:
    // 0x11cc18: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x11cc18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11cc1c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x11cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->pc = 0x11cc20u;
}
