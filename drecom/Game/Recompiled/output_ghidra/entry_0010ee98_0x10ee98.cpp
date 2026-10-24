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

// Function: entry_0010ee98
// Address: 0x10ee98 - 0x10eed0
void entry_0010ee98_0x10ee98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ee98_0x10ee98");
#endif

    switch (ctx->pc) {
        case 0x10eeacu: goto label_10eeac;
        case 0x10eeccu: goto label_10eecc;
        default: break;
    }

    ctx->pc = 0x10ee98u;

    // 0x10ee98: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10ee9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eea0: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x10eea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x10eea4: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10EEA4u;
    SET_GPR_U32(ctx, 31, 0x10EEACu);
    ctx->pc = 0x10EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEA4u;
    // 0x10eea8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10EEACu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EEACu) { return; }
    ctx->pc = 0x10EEACu;
label_10eeac:
    // 0x10eeac: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10EEACu;
    {
        const bool branch_taken_0x10eeac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10eeac) {
            ctx->pc = 0x10EEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EEACu;
            // 0x10eeb0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EEFCu;
            return;
        }
    }
    ctx->pc = 0x10EEB4u;
    // 0x10eeb4: 0x8ec245a8  lw          $v0, 0x45A8($s6)
    ctx->pc = 0x10eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17832)));
    // 0x10eeb8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EEB8u;
    {
        const bool branch_taken_0x10eeb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEB8u;
        // 0x10eebc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eeb8) {
            ctx->pc = 0x10EED0u;
            return;
        }
    }
    ctx->pc = 0x10EEC0u;
    // 0x10eec0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10eec4: 0xc046760  jal         func_119D80
    ctx->pc = 0x10EEC4u;
    SET_GPR_U32(ctx, 31, 0x10EECCu);
    ctx->pc = 0x10EEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEC4u;
    // 0x10eec8: 0x2484ce20  addiu       $a0, $a0, -0x31E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10EECCu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EECCu) { return; }
    ctx->pc = 0x10EECCu;
label_10eecc:
    // 0x10eecc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x10eed0u;
}
