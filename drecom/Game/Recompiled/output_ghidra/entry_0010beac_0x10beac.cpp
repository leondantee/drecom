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

// Function: entry_0010beac
// Address: 0x10beac - 0x10bee0
void entry_0010beac_0x10beac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010beac_0x10beac");
#endif

    switch (ctx->pc) {
        case 0x10bec4u: goto label_10bec4;
        default: break;
    }

    ctx->pc = 0x10beacu;

    // 0x10beac: 0x26303940  addiu       $s0, $s1, 0x3940
    ctx->pc = 0x10beacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 14656));
    // 0x10beb0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10beb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10beb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10beb8: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x10beb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x10bebc: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10BEBCu;
    SET_GPR_U32(ctx, 31, 0x10BEC4u);
    ctx->pc = 0x10BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BEBCu;
    // 0x10bec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10BEC4u;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10BEC4u) { return; }
    ctx->pc = 0x10BEC4u;
label_10bec4:
    // 0x10bec4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x10bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10bec8: 0x1060ffef  beqz        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x10BEC8u;
    {
        const bool branch_taken_0x10bec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEC8u;
        // 0x10becc: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bec8) {
            ctx->pc = 0x10BE88u;
            return;
        }
    }
    ctx->pc = 0x10BED0u;
    // 0x10bed0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x10bed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bed4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10BED4u;
    {
        const bool branch_taken_0x10bed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BED4u;
        // 0x10bed8: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bed4) {
            ctx->pc = 0x10BF04u;
            return;
        }
    }
    ctx->pc = 0x10BEDCu;
    // 0x10bedc: 0x0  nop
    ctx->pc = 0x10bedcu;
    // NOP
    ctx->pc = 0x10bee0u;
}
