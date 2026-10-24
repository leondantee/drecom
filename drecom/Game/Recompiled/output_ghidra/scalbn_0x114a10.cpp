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

// Function: scalbn
// Address: 0x114a10 - 0x114bc4
void scalbn_0x114a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scalbn_0x114a10");
#endif

    switch (ctx->pc) {
        case 0x114a70u: goto label_114a70;
        case 0x114ab4u: goto label_114ab4;
        case 0x114ad8u: goto label_114ad8;
        case 0x114b48u: goto label_114b48;
        case 0x114b68u: goto label_114b68;
        case 0x114bb0u: goto label_114bb0;
        default: break;
    }

    ctx->pc = 0x114a10u;

    // 0x114a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114a18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114a1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x114a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x114a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x114a24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x114a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a28: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x114a28u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x114a2c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x114a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x114a30: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x114a30u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x114a34: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x114a34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x114a38: 0xd11024  and         $v0, $a2, $s1
    ctx->pc = 0x114a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x114a3c: 0x21d03  sra         $v1, $v0, 20
    ctx->pc = 0x114a3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    // 0x114a40: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x114A40u;
    {
        const bool branch_taken_0x114a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x114A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A40u;
        // 0x114a44: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a40) {
            ctx->pc = 0x114AA4u;
            goto label_114aa4;
        }
    }
    ctx->pc = 0x114A48u;
    // 0x114a48: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x114a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x114a4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114a50: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x114a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x114a54: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x114a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x114a58: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x114A58u;
    {
        const bool branch_taken_0x114a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A58u;
        // 0x114a5c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a58) {
            ctx->pc = 0x114BB0u;
            goto label_114bb0;
        }
    }
    ctx->pc = 0x114A60u;
    // 0x114a60: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x114a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x114a64: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x114a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x114a68: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x114A68u;
    SET_GPR_U32(ctx, 31, 0x114A70u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x114A68u, 0x114A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A70u;
label_114a70:
    // 0x114a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a74: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x114a74u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x114a78: 0xd11824  and         $v1, $a2, $s1
    ctx->pc = 0x114a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x114a7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x114a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x114a80: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x114a80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x114a84: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x114a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x114a88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x114a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x114a8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114A8Cu;
    {
        const bool branch_taken_0x114a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A8Cu;
        // 0x114a90: 0x2463ffca  addiu       $v1, $v1, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a8c) {
            ctx->pc = 0x114AA0u;
            goto label_114aa0;
        }
    }
    ctx->pc = 0x114A94u;
    // 0x114a94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x114a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x114a98: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x114A98u;
    {
        const bool branch_taken_0x114a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A98u;
        // 0x114a9c: 0xdc45d8b0  ld          $a1, -0x2750($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294957232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a98) {
            ctx->pc = 0x114BA8u;
            goto label_114ba8;
        }
    }
    ctx->pc = 0x114AA0u;
label_114aa0:
    // 0x114aa0: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x114aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_114aa4:
    // 0x114aa4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114AA4u;
    {
        const bool branch_taken_0x114aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x114AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AA4u;
        // 0x114aa8: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114aa4) {
            ctx->pc = 0x114ABCu;
            goto label_114abc;
        }
    }
    ctx->pc = 0x114AACu;
    // 0x114aac: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x114AACu;
    SET_GPR_U32(ctx, 31, 0x114AB4u);
    ctx->pc = 0x114AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AACu;
    // 0x114ab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x114AACu, 0x114AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AB4u;
label_114ab4:
    // 0x114ab4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x114AB4u;
    {
        const bool branch_taken_0x114ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AB4u;
        // 0x114ab8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ab4) {
            ctx->pc = 0x114BB4u;
            goto label_114bb4;
        }
    }
    ctx->pc = 0x114ABCu;
label_114abc:
    // 0x114abc: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x114abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x114ac0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114AC0u;
    {
        const bool branch_taken_0x114ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AC0u;
        // 0x114ac4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ac0) {
            ctx->pc = 0x114AE4u;
            goto label_114ae4;
        }
    }
    ctx->pc = 0x114AC8u;
    // 0x114ac8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114acc: 0xdc50d8b8  ld          $s0, -0x2748($v0)
    ctx->pc = 0x114accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294957240)));
    // 0x114ad0: 0xc045182  jal         func_114608
    ctx->pc = 0x114AD0u;
    SET_GPR_U32(ctx, 31, 0x114AD8u);
    ctx->pc = 0x114AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AD0u;
    // 0x114ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114608u, 0x114AD0u, 0x114AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AD8u;
label_114ad8:
    // 0x114ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114adc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x114ADCu;
    {
        const bool branch_taken_0x114adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114ADCu;
        // 0x114ae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114adc) {
            ctx->pc = 0x114BA8u;
            goto label_114ba8;
        }
    }
    ctx->pc = 0x114AE4u;
label_114ae4:
    // 0x114ae4: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x114AE4u;
    {
        const bool branch_taken_0x114ae4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x114AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AE4u;
        // 0x114ae8: 0x32d00  sll         $a1, $v1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ae4) {
            ctx->pc = 0x114B20u;
            goto label_114b20;
        }
    }
    ctx->pc = 0x114AECu;
    // 0x114aec: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x114aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x114af0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114af4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x114af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114af8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x114af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x114afc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x114afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x114b00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x114b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x114b04: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x114b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x114b08: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x114b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x114b0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x114b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x114b10: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x114b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x114b14: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x114B14u;
    {
        const bool branch_taken_0x114b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B14u;
        // 0x114b18: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b14) {
            ctx->pc = 0x114BB0u;
            goto label_114bb0;
        }
    }
    ctx->pc = 0x114B1Cu;
    // 0x114b1c: 0x0  nop
    ctx->pc = 0x114b1cu;
    // NOP
label_114b20:
    // 0x114b20: 0x2862ffcb  slti        $v0, $v1, -0x35
    ctx->pc = 0x114b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x114b24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x114B24u;
    {
        const bool branch_taken_0x114b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B24u;
        // 0x114b28: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b24) {
            ctx->pc = 0x114B74u;
            goto label_114b74;
        }
    }
    ctx->pc = 0x114B2Cu;
    // 0x114b2c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114b30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114B30u;
    {
        const bool branch_taken_0x114b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B30u;
        // 0x114b34: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b30) {
            ctx->pc = 0x114B54u;
            goto label_114b54;
        }
    }
    ctx->pc = 0x114B38u;
    // 0x114b38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b3c: 0xdc50d8b8  ld          $s0, -0x2748($v0)
    ctx->pc = 0x114b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294957240)));
    // 0x114b40: 0xc045182  jal         func_114608
    ctx->pc = 0x114B40u;
    SET_GPR_U32(ctx, 31, 0x114B48u);
    ctx->pc = 0x114B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B40u;
    // 0x114b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114608u, 0x114B40u, 0x114B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B48u;
label_114b48:
    // 0x114b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x114B4Cu;
    {
        const bool branch_taken_0x114b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B4Cu;
        // 0x114b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b4c) {
            ctx->pc = 0x114BA8u;
            goto label_114ba8;
        }
    }
    ctx->pc = 0x114B54u;
label_114b54:
    // 0x114b54: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x114b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x114b58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b5c: 0xdc50d8b0  ld          $s0, -0x2750($v0)
    ctx->pc = 0x114b5cu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AD8B0u));
    // 0x114b60: 0xc045182  jal         func_114608
    ctx->pc = 0x114B60u;
    SET_GPR_U32(ctx, 31, 0x114B68u);
    ctx->pc = 0x114B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B60u;
    // 0x114b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114608u, 0x114B60u, 0x114B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B68u;
label_114b68:
    // 0x114b68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x114B6Cu;
    {
        const bool branch_taken_0x114b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B6Cu;
        // 0x114b70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b6c) {
            ctx->pc = 0x114BA8u;
            goto label_114ba8;
        }
    }
    ctx->pc = 0x114B74u;
label_114b74:
    // 0x114b74: 0x24630036  addiu       $v1, $v1, 0x36
    ctx->pc = 0x114b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
    // 0x114b78: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x114b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x114b7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114b80: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x114b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x114b84: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x114b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x114b88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x114b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x114b8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x114b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x114b90: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x114b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x114b94: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x114b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x114b98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x114b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x114b9c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x114b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x114ba0: 0x3405f240  ori         $a1, $zero, 0xF240
    ctx->pc = 0x114ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x114ba4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x114ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_114ba8:
    // 0x114ba8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x114BA8u;
    SET_GPR_U32(ctx, 31, 0x114BB0u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x114BA8u, 0x114BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114BB0u;
label_114bb0:
    // 0x114bb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_114bb4:
    // 0x114bb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x114bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x114BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BBCu;
        // 0x114bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114BC4u;
}
