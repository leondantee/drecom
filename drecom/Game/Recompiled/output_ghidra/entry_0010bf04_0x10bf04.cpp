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

// Function: entry_0010bf04
// Address: 0x10bf04 - 0x10bf70
void entry_0010bf04_0x10bf04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bf04_0x10bf04");
#endif

    switch (ctx->pc) {
        case 0x10bf18u: goto label_10bf18;
        case 0x10bf2cu: goto label_10bf2c;
        case 0x10bf54u: goto label_10bf54;
        default: break;
    }

    ctx->pc = 0x10bf04u;

    // 0x10bf04: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10bf04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10bf08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf0c: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x10bf0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x10bf10: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10BF10u;
    SET_GPR_U32(ctx, 31, 0x10BF18u);
    ctx->pc = 0x10BF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF10u;
    // 0x10bf14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10BF18u;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10BF18u) { return; }
    ctx->pc = 0x10BF18u;
label_10bf18:
    // 0x10bf18: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x10bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x10bf1c: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x10BF1Cu;
    {
        const bool branch_taken_0x10bf1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF1Cu;
        // 0x10bf20: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf1c) {
            ctx->pc = 0x10BEE0u;
            return;
        }
    }
    ctx->pc = 0x10BF24u;
    // 0x10bf24: 0xc0433ea  jal         func_10CFA8
    ctx->pc = 0x10BF24u;
    SET_GPR_U32(ctx, 31, 0x10BF2Cu);
    ctx->pc = 0x10CFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFA8u, 0x10BF24u, 0x10BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF2Cu;
label_10bf2c:
    // 0x10bf2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10bf2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10bf34: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x10bf34u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
    // 0x10bf38: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10BF38u;
    {
        const bool branch_taken_0x10bf38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF38u;
        // 0x10bf3c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf38) {
            ctx->pc = 0x10BF78u;
            return;
        }
    }
    ctx->pc = 0x10BF40u;
    // 0x10bf40: 0x8c434564  lw          $v1, 0x4564($v0)
    ctx->pc = 0x10bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17764)));
    // 0x10bf44: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10BF44u;
    {
        const bool branch_taken_0x10bf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF44u;
        // 0x10bf48: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf44) {
            ctx->pc = 0x10BF70u;
            return;
        }
    }
    ctx->pc = 0x10BF4Cu;
    // 0x10bf4c: 0xc046760  jal         func_119D80
    ctx->pc = 0x10BF4Cu;
    SET_GPR_U32(ctx, 31, 0x10BF54u);
    ctx->pc = 0x10BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF4Cu;
    // 0x10bf50: 0x2484cad8  addiu       $a0, $a0, -0x3528 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10BF54u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10BF54u) { return; }
    ctx->pc = 0x10BF54u;
label_10bf54:
    // 0x10bf54: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10bf58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10bf58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf5c: 0x2484cb00  addiu       $a0, $a0, -0x3500
    ctx->pc = 0x10bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953728));
    // 0x10bf60: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x10bf60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x10bf64: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10bf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10bf68: 0xc046760  jal         func_119D80
    ctx->pc = 0x10BF68u;
    SET_GPR_U32(ctx, 31, 0x10BF70u);
    ctx->pc = 0x10BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF68u;
    // 0x10bf6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10BF70u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10BF70u) { return; }
    ctx->pc = 0x10BF70u;
}
