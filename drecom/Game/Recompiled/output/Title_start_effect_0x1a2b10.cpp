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

// Function: Title_start_effect
// Address: 0x1a2b10 - 0x1a2d20
void Title_start_effect_0x1a2b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Title_start_effect_0x1a2b10");
#endif

    switch (ctx->pc) {
        case 0x1a2b80u: goto label_1a2b80;
        case 0x1a2b98u: goto label_1a2b98;
        case 0x1a2bc0u: goto label_1a2bc0;
        case 0x1a2bdcu: goto label_1a2bdc;
        case 0x1a2c10u: goto label_1a2c10;
        case 0x1a2c34u: goto label_1a2c34;
        case 0x1a2c68u: goto label_1a2c68;
        case 0x1a2c8cu: goto label_1a2c8c;
        case 0x1a2cc0u: goto label_1a2cc0;
        case 0x1a2ce4u: goto label_1a2ce4;
        case 0x1a2d10u: goto label_1a2d10;
        default: break;
    }

    ctx->pc = 0x1a2b10u;

    // 0x1a2b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2b14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a2b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a2b18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1a2b1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2b20: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1a2b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1a2b24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a2b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a2b28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a2b2c: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1A2B2Cu;
    {
        const bool branch_taken_0x1a2b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b2c) {
            ctx->pc = 0x1A2CD8u;
            goto label_1a2cd8;
        }
    }
    ctx->pc = 0x1A2B34u;
    // 0x1a2b34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2b38: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1A2B38u;
    {
        const bool branch_taken_0x1a2b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b38) {
            ctx->pc = 0x1A2C80u;
            goto label_1a2c80;
        }
    }
    ctx->pc = 0x1A2B40u;
    // 0x1a2b40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2b44: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1A2B44u;
    {
        const bool branch_taken_0x1a2b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b44) {
            ctx->pc = 0x1A2C28u;
            goto label_1a2c28;
        }
    }
    ctx->pc = 0x1A2B4Cu;
    // 0x1a2b4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2b50: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A2B50u;
    {
        const bool branch_taken_0x1a2b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b50) {
            ctx->pc = 0x1A2BD0u;
            goto label_1a2bd0;
        }
    }
    ctx->pc = 0x1A2B58u;
    // 0x1a2b58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2B58u;
    {
        const bool branch_taken_0x1a2b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b58) {
            ctx->pc = 0x1A2B68u;
            goto label_1a2b68;
        }
    }
    ctx->pc = 0x1A2B60u;
    // 0x1a2b60: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1A2B60u;
    {
        const bool branch_taken_0x1a2b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b60) {
            ctx->pc = 0x1A2D04u;
            goto label_1a2d04;
        }
    }
    ctx->pc = 0x1A2B68u;
label_1a2b68:
    // 0x1a2b68: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x1a2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x1a2b6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a2b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2b70: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a2b70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2b74: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a2b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2b78: 0xc067c24  jal         func_19F090
    ctx->pc = 0x1A2B78u;
    SET_GPR_U32(ctx, 31, 0x1A2B80u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x1A2B78u, 0x1A2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B80u;
label_1a2b80:
    // 0x1a2b80: 0x24040501  addiu       $a0, $zero, 0x501
    ctx->pc = 0x1a2b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x1a2b84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a2b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2b88: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1a2b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1a2b8c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a2b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2b90: 0xc067c24  jal         func_19F090
    ctx->pc = 0x1A2B90u;
    SET_GPR_U32(ctx, 31, 0x1A2B98u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x1A2B90u, 0x1A2B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B98u;
label_1a2b98:
    // 0x1a2b98: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2b98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2b9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2b9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2ba0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2ba4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2ba4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2ba8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1a2ba8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2bac: 0x3c028002  lui         $v0, 0x8002
    ctx->pc = 0x1a2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32770 << 16));
    // 0x1a2bb0: 0x34490184  ori         $t1, $v0, 0x184
    ctx->pc = 0x1a2bb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)388);
    // 0x1a2bb4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a2bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2bb8: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2BB8u;
    SET_GPR_U32(ctx, 31, 0x1A2BC0u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2BB8u, 0x1A2BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2BC0u;
label_1a2bc0:
    // 0x1a2bc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2bc4: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a2bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a2bc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2bcc: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a2bccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a2bd0:
    // 0x1a2bd0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2bd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2bd4: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A2BD4u;
    SET_GPR_U32(ctx, 31, 0x1A2BDCu);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A2BD4u, 0x1A2BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2BDCu;
label_1a2bdc:
    // 0x1a2bdc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a2bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a2be0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A2BE0u;
    {
        const bool branch_taken_0x1a2be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2be0) {
            ctx->pc = 0x1A2D04u;
            goto label_1a2d04;
        }
    }
    ctx->pc = 0x1A2BE8u;
    // 0x1a2be8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2be8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2bec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2becu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2bf0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2bf4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2bf4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2bf8: 0x3c028002  lui         $v0, 0x8002
    ctx->pc = 0x1a2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32770 << 16));
    // 0x1a2bfc: 0x34480184  ori         $t0, $v0, 0x184
    ctx->pc = 0x1a2bfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)388);
    // 0x1a2c00: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1a2c00u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c04: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x1a2c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a2c08: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2C08u;
    SET_GPR_U32(ctx, 31, 0x1A2C10u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2C08u, 0x1A2C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C10u;
label_1a2c10:
    // 0x1a2c10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2c14: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a2c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a2c18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2c1c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a2c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2c20: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1A2C20u;
    {
        const bool branch_taken_0x1a2c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c20) {
            ctx->pc = 0x1A2D04u;
            goto label_1a2d04;
        }
    }
    ctx->pc = 0x1A2C28u;
label_1a2c28:
    // 0x1a2c28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2c28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c2c: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2C34u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A2C2Cu, 0x1A2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C34u;
label_1a2c34:
    // 0x1a2c34: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a2c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a2c38: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1A2C38u;
    {
        const bool branch_taken_0x1a2c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c38) {
            ctx->pc = 0x1A2D04u;
            goto label_1a2d04;
        }
    }
    ctx->pc = 0x1A2C40u;
    // 0x1a2c40: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2c40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2c4c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2c4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1a2c50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2c58: 0x34490040  ori         $t1, $v0, 0x40
    ctx->pc = 0x1a2c58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1a2c5c: 0x240a0046  addiu       $t2, $zero, 0x46
    ctx->pc = 0x1a2c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1a2c60: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2C60u;
    SET_GPR_U32(ctx, 31, 0x1A2C68u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2C60u, 0x1A2C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C68u;
label_1a2c68:
    // 0x1a2c68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2c6c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a2c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a2c70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2c74: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a2c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2c78: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A2C78u;
    {
        const bool branch_taken_0x1a2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c78) {
            ctx->pc = 0x1A2D04u;
            goto label_1a2d04;
        }
    }
    ctx->pc = 0x1A2C80u;
label_1a2c80:
    // 0x1a2c80: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c84: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A2C84u;
    SET_GPR_U32(ctx, 31, 0x1A2C8Cu);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A2C84u, 0x1A2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C8Cu;
label_1a2c8c:
    // 0x1a2c8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a2c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a2c90: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A2C90u;
    {
        const bool branch_taken_0x1a2c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c90) {
            ctx->pc = 0x1A2D04u;
            goto label_1a2d04;
        }
    }
    ctx->pc = 0x1A2C98u;
    // 0x1a2c98: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2c98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2c9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2ca0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2ca4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2ca4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2ca8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2cac: 0x34480040  ori         $t0, $v0, 0x40
    ctx->pc = 0x1a2cacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1a2cb0: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a2cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2cb4: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x1a2cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a2cb8: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2CB8u;
    SET_GPR_U32(ctx, 31, 0x1A2CC0u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2CB8u, 0x1A2CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CC0u;
label_1a2cc0:
    // 0x1a2cc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2cc4: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a2cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a2cc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2ccc: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a2cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2cd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A2CD0u;
    {
        const bool branch_taken_0x1a2cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cd0) {
            ctx->pc = 0x1A2D04u;
            goto label_1a2d04;
        }
    }
    ctx->pc = 0x1A2CD8u;
label_1a2cd8:
    // 0x1a2cd8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2cdc: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A2CDCu;
    SET_GPR_U32(ctx, 31, 0x1A2CE4u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A2CDCu, 0x1A2CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CE4u;
label_1a2ce4:
    // 0x1a2ce4: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1a2ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a2ce8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2CE8u;
    {
        const bool branch_taken_0x1a2ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ce8) {
            ctx->pc = 0x1A2D04u;
            goto label_1a2d04;
        }
    }
    ctx->pc = 0x1A2CF0u;
    // 0x1a2cf0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a2cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a2cf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2cf8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a2cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a2cfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2CFCu;
    {
        const bool branch_taken_0x1a2cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cfc) {
            ctx->pc = 0x1A2D10u;
            goto label_1a2d10;
        }
    }
    ctx->pc = 0x1A2D04u;
label_1a2d04:
    // 0x1a2d04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a2d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2d08: 0xc068a24  jal         func_1A2890
    ctx->pc = 0x1A2D08u;
    SET_GPR_U32(ctx, 31, 0x1A2D10u);
    ctx->pc = 0x1A2890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2890u, 0x1A2D08u, 0x1A2D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D10u;
label_1a2d10:
    // 0x1a2d10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a2d10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2d14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a2d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a2d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D20u;
}
