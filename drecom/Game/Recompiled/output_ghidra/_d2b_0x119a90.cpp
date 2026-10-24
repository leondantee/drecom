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

// Function: _d2b
// Address: 0x119a90 - 0x119c0c
void _d2b_0x119a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_d2b_0x119a90");
#endif

    switch (ctx->pc) {
        case 0x119ac4u: goto label_119ac4;
        case 0x119b2cu: goto label_119b2c;
        case 0x119b90u: goto label_119b90;
        case 0x119bd8u: goto label_119bd8;
        default: break;
    }

    ctx->pc = 0x119a90u;

    // 0x119a90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x119a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x119a94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x119a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x119a98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x119a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a9c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x119a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x119aa0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x119aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x119aa4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x119aa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119aa8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x119aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x119aac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x119aacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ab0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x119ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x119ab4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x119ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x119ab8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x119ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x119abc: 0xc046348  jal         func_118D20
    ctx->pc = 0x119ABCu;
    SET_GPR_U32(ctx, 31, 0x119AC4u);
    ctx->pc = 0x119AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119ABCu;
    // 0x119ac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x119ABCu, 0x119AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AC4u;
label_119ac4:
    // 0x119ac4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ac8: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x119ac8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x119acc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x119accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x119ad0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x119ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x119ad4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x119ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x119ad8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x119adc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x119adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x119ae0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x119ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x119ae4: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x119ae4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x119ae8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x119ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119aec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x119aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x119af0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x119af0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x119af4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x119af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x119af8: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x119af8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x119afc: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x119afcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x119b00: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x119B00u;
    {
        const bool branch_taken_0x119b00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B00u;
        // 0x119b04: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b00) {
            ctx->pc = 0x119B14u;
            goto label_119b14;
        }
    }
    ctx->pc = 0x119B08u;
    // 0x119b08: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x119b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x119b0c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x119b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x119b10: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x119b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_119b14:
    // 0x119b14: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x119b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x119b18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x119b18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x119b1c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x119B1Cu;
    {
        const bool branch_taken_0x119b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B1Cu;
        // 0x119b20: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b1c) {
            ctx->pc = 0x119B84u;
            goto label_119b84;
        }
    }
    ctx->pc = 0x119B24u;
    // 0x119b24: 0xc046438  jal         func_1190E0
    ctx->pc = 0x119B24u;
    SET_GPR_U32(ctx, 31, 0x119B2Cu);
    ctx->pc = 0x119B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B24u;
    // 0x119b28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1190E0u, 0x119B24u, 0x119B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B2Cu;
label_119b2c:
    // 0x119b2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x119b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b30: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x119B30u;
    {
        const bool branch_taken_0x119b30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B30u;
        // 0x119b34: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b30) {
            ctx->pc = 0x119B5Cu;
            goto label_119b5c;
        }
    }
    ctx->pc = 0x119B38u;
    // 0x119b38: 0x52023  negu        $a0, $a1
    ctx->pc = 0x119b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x119b3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x119b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119b40: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x119b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x119b44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x119b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x119b48: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x119b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x119b4c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x119b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119b50: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x119b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x119b54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x119B54u;
    {
        const bool branch_taken_0x119b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B54u;
        // 0x119b58: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b54) {
            ctx->pc = 0x119B64u;
            goto label_119b64;
        }
    }
    ctx->pc = 0x119B5Cu;
label_119b5c:
    // 0x119b5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x119b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119b60: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x119b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_119b64:
    // 0x119b64: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x119b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119b68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x119b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119b6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x119b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119b70: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x119b70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x119b74: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x119b74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x119b78: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x119b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x119B7Cu;
    {
        const bool branch_taken_0x119b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B7Cu;
        // 0x119b80: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b7c) {
            ctx->pc = 0x119BA4u;
            goto label_119ba4;
        }
    }
    ctx->pc = 0x119B84u;
label_119b84:
    // 0x119b84: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x119b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x119b88: 0xc046438  jal         func_1190E0
    ctx->pc = 0x119B88u;
    SET_GPR_U32(ctx, 31, 0x119B90u);
    ctx->pc = 0x119B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B88u;
    // 0x119b8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1190E0u, 0x119B88u, 0x119B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B90u;
label_119b90:
    // 0x119b90: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x119b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x119b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119b98: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x119b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x119b9c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x119b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x119ba0: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x119ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_119ba4:
    // 0x119ba4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x119BA4u;
    {
        const bool branch_taken_0x119ba4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BA4u;
        // 0x119ba8: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ba4) {
            ctx->pc = 0x119BC0u;
            goto label_119bc0;
        }
    }
    ctx->pc = 0x119BACu;
    // 0x119bac: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x119bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x119bb0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x119bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x119bb4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x119bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x119bb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x119BB8u;
    {
        const bool branch_taken_0x119bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BB8u;
        // 0x119bbc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bb8) {
            ctx->pc = 0x119BE0u;
            goto label_119be0;
        }
    }
    ctx->pc = 0x119BC0u;
label_119bc0:
    // 0x119bc0: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x119bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x119bc4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x119bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x119bc8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x119bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x119bcc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x119bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x119bd0: 0xc046416  jal         func_119058
    ctx->pc = 0x119BD0u;
    SET_GPR_U32(ctx, 31, 0x119BD8u);
    ctx->pc = 0x119BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BD0u;
    // 0x119bd4: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119058u, 0x119BD0u, 0x119BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119BD8u;
label_119bd8:
    // 0x119bd8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x119bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x119bdc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x119bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_119be0:
    // 0x119be0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x119be0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x119be4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x119be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119be8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x119be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119bec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x119becu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119bf0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x119bf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119bf4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x119bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119bf8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x119bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119bfc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x119bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119c00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c04: 0x3e00008  jr          $ra
    ctx->pc = 0x119C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C04u;
        // 0x119c08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119C0Cu;
}
