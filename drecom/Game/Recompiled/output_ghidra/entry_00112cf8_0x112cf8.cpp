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

// Function: entry_00112cf8
// Address: 0x112cf8 - 0x112db0
void entry_00112cf8_0x112cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112cf8_0x112cf8");
#endif

    switch (ctx->pc) {
        case 0x112d04u: goto label_112d04;
        case 0x112d18u: goto label_112d18;
        case 0x112d20u: goto label_112d20;
        case 0x112d30u: goto label_112d30;
        case 0x112d3cu: goto label_112d3c;
        case 0x112d48u: goto label_112d48;
        case 0x112d54u: goto label_112d54;
        case 0x112d60u: goto label_112d60;
        default: break;
    }

    ctx->pc = 0x112cf8u;

    // 0x112cf8: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x112cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112cfc: 0xc045284  jal         func_114A10
    ctx->pc = 0x112CFCu;
    SET_GPR_U32(ctx, 31, 0x112D04u);
    ctx->pc = 0x112D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CFCu;
    // 0x112d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A10u, 0x112CFCu, 0x112D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D04u;
label_112d04:
    // 0x112d04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d08: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x112d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x112d0c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x112d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x112d10: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112D10u;
    SET_GPR_U32(ctx, 31, 0x112D18u);
    ctx->pc = 0x112D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D10u;
    // 0x112d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112D10u, 0x112D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D18u;
label_112d18:
    // 0x112d18: 0xc0451e4  jal         func_114790
    ctx->pc = 0x112D18u;
    SET_GPR_U32(ctx, 31, 0x112D20u);
    ctx->pc = 0x112D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D18u;
    // 0x112d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114790u;
    {
        ctx->pc = 0x112D20u;
        ps2_stubs::floor(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x112D20u) { return; }
    ctx->pc = 0x112D20u;
label_112d20:
    // 0x112d20: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x112d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x112d24: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x112d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x112d28: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112D28u;
    SET_GPR_U32(ctx, 31, 0x112D30u);
    ctx->pc = 0x112D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D28u;
    // 0x112d2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112D28u, 0x112D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D30u;
label_112d30:
    // 0x112d30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d34: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112D34u;
    SET_GPR_U32(ctx, 31, 0x112D3Cu);
    ctx->pc = 0x112D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D34u;
    // 0x112d38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112D34u, 0x112D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D3Cu;
label_112d3c:
    // 0x112d3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d40: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x112D40u;
    SET_GPR_U32(ctx, 31, 0x112D48u);
    ctx->pc = 0x112D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D40u;
    // 0x112d44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x112D40u, 0x112D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D48u;
label_112d48:
    // 0x112d48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x112d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d4c: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x112D4Cu;
    SET_GPR_U32(ctx, 31, 0x112D54u);
    ctx->pc = 0x112D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D4Cu;
    // 0x112d50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x112D4Cu, 0x112D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D54u;
label_112d54:
    // 0x112d54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d58: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112D58u;
    SET_GPR_U32(ctx, 31, 0x112D60u);
    ctx->pc = 0x112D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D58u;
    // 0x112d5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112D58u, 0x112D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D60u;
label_112d60:
    // 0x112d60: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x112d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112d64: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x112D64u;
    {
        const bool branch_taken_0x112d64 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x112D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D64u;
        // 0x112d68: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d64) {
            ctx->pc = 0x112DB0u;
            return;
        }
    }
    ctx->pc = 0x112D6Cu;
    // 0x112d6c: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x112d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x112d70: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x112d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x112d74: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x112d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112d7c: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x112d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x112d80: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x112d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112d84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x112d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112d88: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x112d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x112d8c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x112d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x112d90: 0x62a007  srav        $s4, $v0, $v1
    ctx->pc = 0x112d90u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x112d94: 0x741804  sllv        $v1, $s4, $v1
    ctx->pc = 0x112d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 3) & 0x1F));
    // 0x112d98: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x112d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x112d9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x112d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112da0: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x112da0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x112da4: 0xafa4024c  sw          $a0, 0x24C($sp)
    ctx->pc = 0x112da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
    // 0x112da8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112DA8u;
    {
        const bool branch_taken_0x112da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DA8u;
        // 0x112dac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112da8) {
            ctx->pc = 0x112DFCu;
            return;
        }
    }
    ctx->pc = 0x112DB0u;
}
