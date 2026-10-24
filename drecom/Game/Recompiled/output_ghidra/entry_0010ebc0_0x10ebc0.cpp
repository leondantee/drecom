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

// Function: entry_0010ebc0
// Address: 0x10ebc0 - 0x10ebf4
void entry_0010ebc0_0x10ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ebc0_0x10ebc0");
#endif

    switch (ctx->pc) {
        case 0x10ebd4u: goto label_10ebd4;
        default: break;
    }

    ctx->pc = 0x10ebc0u;

    // 0x10ebc0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10ebc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10ebc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ebc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebc8: 0x34a50592  ori         $a1, $a1, 0x592
    ctx->pc = 0x10ebc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1426);
    // 0x10ebcc: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10EBCCu;
    SET_GPR_U32(ctx, 31, 0x10EBD4u);
    ctx->pc = 0x10EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBCCu;
    // 0x10ebd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10EBD4u;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EBD4u) { return; }
    ctx->pc = 0x10EBD4u;
label_10ebd4:
    // 0x10ebd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ebd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebd8: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x10EBD8u;
    {
        const bool branch_taken_0x10ebd8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x10ebd8) {
            ctx->pc = 0x10EBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EBD8u;
            // 0x10ebdc: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EC24u;
            return;
        }
    }
    ctx->pc = 0x10EBE0u;
    // 0x10ebe0: 0x8ee245a8  lw          $v0, 0x45A8($s7)
    ctx->pc = 0x10ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 17832)));
    // 0x10ebe4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EBE4u;
    {
        const bool branch_taken_0x10ebe4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBE4u;
        // 0x10ebe8: 0x8e8645ec  lw          $a2, 0x45EC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebe4) {
            ctx->pc = 0x10EBF4u;
            return;
        }
    }
    ctx->pc = 0x10EBECu;
    // 0x10ebec: 0xc046760  jal         func_119D80
    ctx->pc = 0x10EBECu;
    SET_GPR_U32(ctx, 31, 0x10EBF4u);
    ctx->pc = 0x10EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBECu;
    // 0x10ebf0: 0x26c4cde0  addiu       $a0, $s6, -0x3220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10EBF4u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EBF4u) { return; }
    ctx->pc = 0x10EBF4u;
}
