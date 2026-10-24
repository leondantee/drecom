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

// Function: entry_0010feac
// Address: 0x10feac - 0x10fed8
void entry_0010feac_0x10feac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010feac_0x10feac");
#endif

    switch (ctx->pc) {
        case 0x10fec0u: goto label_10fec0;
        case 0x10fed4u: goto label_10fed4;
        default: break;
    }

    ctx->pc = 0x10feacu;

    // 0x10feac: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10feacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10feb0: 0x26045200  addiu       $a0, $s0, 0x5200
    ctx->pc = 0x10feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20992));
    // 0x10feb4: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x10feb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x10feb8: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10FEB8u;
    SET_GPR_U32(ctx, 31, 0x10FEC0u);
    ctx->pc = 0x10FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEB8u;
    // 0x10febc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10FEC0u;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FEC0u) { return; }
    ctx->pc = 0x10FEC0u;
label_10fec0:
    // 0x10fec0: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10FEC0u;
    {
        const bool branch_taken_0x10fec0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEC0u;
        // 0x10fec4: 0x26115200  addiu       $s1, $s0, 0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fec0) {
            ctx->pc = 0x10FEF4u;
            return;
        }
    }
    ctx->pc = 0x10FEC8u;
    // 0x10fec8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10fecc: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FECCu;
    SET_GPR_U32(ctx, 31, 0x10FED4u);
    ctx->pc = 0x10FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FECCu;
    // 0x10fed0: 0x2484d000  addiu       $a0, $a0, -0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FED4u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FED4u) { return; }
    ctx->pc = 0x10FED4u;
label_10fed4:
    // 0x10fed4: 0x0  nop
    ctx->pc = 0x10fed4u;
    // NOP
    ctx->pc = 0x10fed8u;
}
