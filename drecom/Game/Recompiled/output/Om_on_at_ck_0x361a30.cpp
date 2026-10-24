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

// Function: Om_on_at_ck
// Address: 0x361a30 - 0x361ec0
void Om_on_at_ck_0x361a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_on_at_ck_0x361a30");
#endif

    switch (ctx->pc) {
        case 0x361a6cu: goto label_361a6c;
        case 0x361aacu: goto label_361aac;
        case 0x361afcu: goto label_361afc;
        case 0x361b20u: goto label_361b20;
        case 0x361b44u: goto label_361b44;
        case 0x361b68u: goto label_361b68;
        case 0x361b8cu: goto label_361b8c;
        case 0x361bb0u: goto label_361bb0;
        case 0x361bd4u: goto label_361bd4;
        case 0x361bf8u: goto label_361bf8;
        case 0x361c10u: goto label_361c10;
        case 0x361c6cu: goto label_361c6c;
        case 0x361c8cu: goto label_361c8c;
        case 0x361cccu: goto label_361ccc;
        case 0x361d1cu: goto label_361d1c;
        case 0x361d40u: goto label_361d40;
        case 0x361d64u: goto label_361d64;
        case 0x361d88u: goto label_361d88;
        case 0x361dacu: goto label_361dac;
        case 0x361dd0u: goto label_361dd0;
        case 0x361df4u: goto label_361df4;
        case 0x361e18u: goto label_361e18;
        case 0x361e30u: goto label_361e30;
        default: break;
    }

    ctx->pc = 0x361a30u;

    // 0x361a30: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x361a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x361a34: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x361a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x361a38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x361a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x361a3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x361a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x361a40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x361a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x361a44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x361a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x361a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x361a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361a50: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x361a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x361a54: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x361a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x361a58: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x361a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x361a5c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x361a5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361a60: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x361a60u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361a64: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x361A64u;
    {
        const bool branch_taken_0x361a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361a64) {
            ctx->pc = 0x361C48u;
            goto label_361c48;
        }
    }
    ctx->pc = 0x361A6Cu;
label_361a6c:
    // 0x361a6c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x361a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x361a70: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x361a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x361a74: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x361a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x361a78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x361a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361a7c: 0x8c511390  lw          $s1, 0x1390($v0)
    ctx->pc = 0x361a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x361a80: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x361a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x361a84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x361a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x361a88: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x361A88u;
    {
        const bool branch_taken_0x361a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361a88) {
            ctx->pc = 0x361C40u;
            goto label_361c40;
        }
    }
    ctx->pc = 0x361A90u;
    // 0x361a90: 0x92221340  lbu         $v0, 0x1340($s1)
    ctx->pc = 0x361a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4928)));
    // 0x361a94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361a98: 0x18400069  blez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x361A98u;
    {
        const bool branch_taken_0x361a98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x361a98) {
            ctx->pc = 0x361C40u;
            goto label_361c40;
        }
    }
    ctx->pc = 0x361AA0u;
    // 0x361aa0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x361aa0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361aa4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x361AA4u;
    {
        const bool branch_taken_0x361aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361aa4) {
            ctx->pc = 0x361C28u;
            goto label_361c28;
        }
    }
    ctx->pc = 0x361AACu;
label_361aac:
    // 0x361aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x361aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361ab0: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x361ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x361ab4: 0x8e221344  lw          $v0, 0x1344($s1)
    ctx->pc = 0x361ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4932)));
    // 0x361ab8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x361ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x361abc: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x361ABCu;
    {
        const bool branch_taken_0x361abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361abc) {
            ctx->pc = 0x361C24u;
            goto label_361c24;
        }
    }
    ctx->pc = 0x361AC4u;
    // 0x361ac4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x361ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x361ac8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x361ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x361acc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x361accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x361ad0: 0x8e221348  lw          $v0, 0x1348($s1)
    ctx->pc = 0x361ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4936)));
    // 0x361ad4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x361ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361ad8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361adc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361ae0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361ae4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361ae8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361aec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x361aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361af0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x361af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x361af4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361AF4u;
    SET_GPR_U32(ctx, 31, 0x361AFCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361AFCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361AFCu) { return; }
    ctx->pc = 0x361AFCu;
label_361afc:
    // 0x361afc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361b04: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361b08: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361b0c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361b10: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x361b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x361b14: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x361b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x361b18: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361B18u;
    SET_GPR_U32(ctx, 31, 0x361B20u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361B20u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361B20u) { return; }
    ctx->pc = 0x361B20u;
label_361b20:
    // 0x361b20: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361b28: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361b2c: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361b30: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361b34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x361b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x361b38: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x361b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x361b3c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361B3Cu;
    SET_GPR_U32(ctx, 31, 0x361B44u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361B44u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361B44u) { return; }
    ctx->pc = 0x361B44u;
label_361b44:
    // 0x361b44: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361b4c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361b50: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361b54: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361b58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x361b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x361b5c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x361b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x361b60: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361B60u;
    SET_GPR_U32(ctx, 31, 0x361B68u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361B68u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361B68u) { return; }
    ctx->pc = 0x361B68u;
label_361b68:
    // 0x361b68: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361b70: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361b74: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361b78: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361b7c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x361b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x361b80: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x361b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x361b84: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361B84u;
    SET_GPR_U32(ctx, 31, 0x361B8Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361B8Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361B8Cu) { return; }
    ctx->pc = 0x361B8Cu;
label_361b8c:
    // 0x361b8c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361b94: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361b98: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361b9c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361ba0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x361ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x361ba4: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x361ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x361ba8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361BA8u;
    SET_GPR_U32(ctx, 31, 0x361BB0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361BB0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361BB0u) { return; }
    ctx->pc = 0x361BB0u;
label_361bb0:
    // 0x361bb0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361bb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361bb8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361bbc: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361bc0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361bc4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x361bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x361bc8: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x361bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x361bcc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361BCCu;
    SET_GPR_U32(ctx, 31, 0x361BD4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361BD4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361BD4u) { return; }
    ctx->pc = 0x361BD4u;
label_361bd4:
    // 0x361bd4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361bd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361bdc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361be0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361be4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361be8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x361be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x361bec: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x361becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x361bf0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361BF0u;
    SET_GPR_U32(ctx, 31, 0x361BF8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361BF8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361BF8u) { return; }
    ctx->pc = 0x361BF8u;
label_361bf8:
    // 0x361bf8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x361bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x361bfc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x361bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x361c00: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x361c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x361c04: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x361c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361c08: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x361C08u;
    SET_GPR_U32(ctx, 31, 0x361C10u);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x361C08u, 0x361C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C10u;
label_361c10:
    // 0x361c10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361C10u;
    {
        const bool branch_taken_0x361c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c10) {
            ctx->pc = 0x361C24u;
            goto label_361c24;
        }
    }
    ctx->pc = 0x361C18u;
    // 0x361c18: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x361c18u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x361c1c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x361C1Cu;
    {
        const bool branch_taken_0x361c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c1c) {
            ctx->pc = 0x361E98u;
            goto label_361e98;
        }
    }
    ctx->pc = 0x361C24u;
label_361c24:
    // 0x361c24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x361c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_361c28:
    // 0x361c28: 0x92221340  lbu         $v0, 0x1340($s1)
    ctx->pc = 0x361c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4928)));
    // 0x361c2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361c30: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x361c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361c34: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x361C34u;
    {
        const bool branch_taken_0x361c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361c34) {
            ctx->pc = 0x361AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361aac;
        }
    }
    ctx->pc = 0x361C3Cu;
    // 0x361c3c: 0x0  nop
    ctx->pc = 0x361c3cu;
    // NOP
label_361c40:
    // 0x361c40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x361c40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x361c44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x361c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_361c48:
    // 0x361c48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x361c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x361c4c: 0x9022e651  lbu         $v0, -0x19AF($at)
    ctx->pc = 0x361c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E651u));
    // 0x361c50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361c54: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x361c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361c58: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x361C58u;
    {
        const bool branch_taken_0x361c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361c58) {
            ctx->pc = 0x361A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361a6c;
        }
    }
    ctx->pc = 0x361C60u;
    // 0x361c60: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x361c60u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361c64: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x361C64u;
    {
        const bool branch_taken_0x361c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c64) {
            ctx->pc = 0x361E88u;
            goto label_361e88;
        }
    }
    ctx->pc = 0x361C6Cu;
label_361c6c:
    // 0x361c6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x361c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x361c70: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x361c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x361c74: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x361c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x361c78: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x361c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x361c7c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x361c7cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361c80: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x361c80u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361c84: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x361C84u;
    {
        const bool branch_taken_0x361c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c84) {
            ctx->pc = 0x361E68u;
            goto label_361e68;
        }
    }
    ctx->pc = 0x361C8Cu;
label_361c8c:
    // 0x361c8c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x361c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x361c90: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x361c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x361c94: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x361c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x361c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x361c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361c9c: 0x8c511390  lw          $s1, 0x1390($v0)
    ctx->pc = 0x361c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x361ca0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x361ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x361ca4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x361ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x361ca8: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x361CA8u;
    {
        const bool branch_taken_0x361ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ca8) {
            ctx->pc = 0x361E60u;
            goto label_361e60;
        }
    }
    ctx->pc = 0x361CB0u;
    // 0x361cb0: 0x92221340  lbu         $v0, 0x1340($s1)
    ctx->pc = 0x361cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4928)));
    // 0x361cb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361cb8: 0x18400069  blez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x361CB8u;
    {
        const bool branch_taken_0x361cb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x361cb8) {
            ctx->pc = 0x361E60u;
            goto label_361e60;
        }
    }
    ctx->pc = 0x361CC0u;
    // 0x361cc0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x361cc0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361cc4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x361CC4u;
    {
        const bool branch_taken_0x361cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361cc4) {
            ctx->pc = 0x361E48u;
            goto label_361e48;
        }
    }
    ctx->pc = 0x361CCCu;
label_361ccc:
    // 0x361ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x361cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361cd0: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x361cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x361cd4: 0x8e221344  lw          $v0, 0x1344($s1)
    ctx->pc = 0x361cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4932)));
    // 0x361cd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x361cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x361cdc: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x361CDCu;
    {
        const bool branch_taken_0x361cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361cdc) {
            ctx->pc = 0x361E44u;
            goto label_361e44;
        }
    }
    ctx->pc = 0x361CE4u;
    // 0x361ce4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x361ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x361ce8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x361ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x361cec: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x361cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x361cf0: 0x8e221348  lw          $v0, 0x1348($s1)
    ctx->pc = 0x361cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4936)));
    // 0x361cf4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x361cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361cf8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361cfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361d00: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361d04: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361d08: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361d0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x361d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361d10: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x361d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x361d14: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361D14u;
    SET_GPR_U32(ctx, 31, 0x361D1Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361D1Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361D1Cu) { return; }
    ctx->pc = 0x361D1Cu;
label_361d1c:
    // 0x361d1c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361d20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361d24: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361d28: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361d2c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361d30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x361d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x361d34: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x361d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x361d38: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361D38u;
    SET_GPR_U32(ctx, 31, 0x361D40u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361D40u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361D40u) { return; }
    ctx->pc = 0x361D40u;
label_361d40:
    // 0x361d40: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361d48: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361d4c: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361d50: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361d54: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x361d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x361d58: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x361d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x361d5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361D5Cu;
    SET_GPR_U32(ctx, 31, 0x361D64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361D64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361D64u) { return; }
    ctx->pc = 0x361D64u;
label_361d64:
    // 0x361d64: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361d68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361d6c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361d70: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361d74: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361d78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x361d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x361d7c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x361d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x361d80: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361D80u;
    SET_GPR_U32(ctx, 31, 0x361D88u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361D88u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361D88u) { return; }
    ctx->pc = 0x361D88u;
label_361d88:
    // 0x361d88: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361d8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361d90: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361d94: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361d98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361d9c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x361d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x361da0: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x361da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x361da4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361DA4u;
    SET_GPR_U32(ctx, 31, 0x361DACu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361DACu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361DACu) { return; }
    ctx->pc = 0x361DACu;
label_361dac:
    // 0x361dac: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361dacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361db0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361db4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361db8: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361dbc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361dc0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x361dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x361dc4: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x361dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x361dc8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361DC8u;
    SET_GPR_U32(ctx, 31, 0x361DD0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361DD0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361DD0u) { return; }
    ctx->pc = 0x361DD0u;
label_361dd0:
    // 0x361dd0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361dd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361dd8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361ddc: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361de0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361de4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x361de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x361de8: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x361de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x361dec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361DECu;
    SET_GPR_U32(ctx, 31, 0x361DF4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361DF4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361DF4u) { return; }
    ctx->pc = 0x361DF4u;
label_361df4:
    // 0x361df4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361df8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361dfc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361e00: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361e04: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361e08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x361e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x361e0c: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x361e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x361e10: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361E10u;
    SET_GPR_U32(ctx, 31, 0x361E18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361E18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361E18u) { return; }
    ctx->pc = 0x361E18u;
label_361e18:
    // 0x361e18: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x361e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x361e1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x361e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x361e20: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x361e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x361e24: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x361e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361e28: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x361E28u;
    SET_GPR_U32(ctx, 31, 0x361E30u);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x361E28u, 0x361E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E30u;
label_361e30:
    // 0x361e30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361E30u;
    {
        const bool branch_taken_0x361e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361e30) {
            ctx->pc = 0x361E44u;
            goto label_361e44;
        }
    }
    ctx->pc = 0x361E38u;
    // 0x361e38: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x361e38u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x361e3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x361E3Cu;
    {
        const bool branch_taken_0x361e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361e3c) {
            ctx->pc = 0x361E98u;
            goto label_361e98;
        }
    }
    ctx->pc = 0x361E44u;
label_361e44:
    // 0x361e44: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x361e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_361e48:
    // 0x361e48: 0x92221340  lbu         $v0, 0x1340($s1)
    ctx->pc = 0x361e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4928)));
    // 0x361e4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361e50: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x361e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361e54: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x361E54u;
    {
        const bool branch_taken_0x361e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361e54) {
            ctx->pc = 0x361CCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361ccc;
        }
    }
    ctx->pc = 0x361E5Cu;
    // 0x361e5c: 0x0  nop
    ctx->pc = 0x361e5cu;
    // NOP
label_361e60:
    // 0x361e60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x361e60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x361e64: 0x0  nop
    ctx->pc = 0x361e64u;
    // NOP
label_361e68:
    // 0x361e68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x361e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x361e6c: 0x9022e653  lbu         $v0, -0x19AD($at)
    ctx->pc = 0x361e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E653u));
    // 0x361e70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361e74: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x361e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361e78: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x361E78u;
    {
        const bool branch_taken_0x361e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361e78) {
            ctx->pc = 0x361C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361c8c;
        }
    }
    ctx->pc = 0x361E80u;
    // 0x361e80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x361e80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x361e84: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x361e84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_361e88:
    // 0x361e88: 0x2ea20020  sltiu       $v0, $s5, 0x20
    ctx->pc = 0x361e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x361e8c: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x361E8Cu;
    {
        const bool branch_taken_0x361e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361e8c) {
            ctx->pc = 0x361C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361c6c;
        }
    }
    ctx->pc = 0x361E94u;
    // 0x361e94: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x361e94u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_361e98:
    // 0x361e98: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x361e98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x361e9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x361e9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x361ea0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x361ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361ea4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x361ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361ea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361eb4: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x361eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x361eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x361EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361EC0u;
}
