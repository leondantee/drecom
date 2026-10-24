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

// Function: Em10_hang_line_set
// Address: 0x1369f0 - 0x136bb4
void Em10_hang_line_set_0x1369f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_hang_line_set_0x1369f0");
#endif

    switch (ctx->pc) {
        case 0x136a20u: goto label_136a20;
        case 0x136a90u: goto label_136a90;
        case 0x136abcu: goto label_136abc;
        default: break;
    }

    ctx->pc = 0x1369f0u;

    // 0x1369f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1369f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1369f4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1369f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1369f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1369f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1369fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1369fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x136a00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136a04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136a08: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x136a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x136a0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x136a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x136a10: 0x24731330  addiu       $s3, $v1, 0x1330
    ctx->pc = 0x136a10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x136a14: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x136a14u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136a18: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x136A18u;
    {
        const bool branch_taken_0x136a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a18) {
            ctx->pc = 0x136B88u;
            goto label_136b88;
        }
    }
    ctx->pc = 0x136A20u;
label_136a20:
    // 0x136a20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x136a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x136a24: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x136a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x136a28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x136a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x136a2c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x136a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x136a30: 0x24634e80  addiu       $v1, $v1, 0x4E80
    ctx->pc = 0x136a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20096));
    // 0x136a34: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x136a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x136a38: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x136a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136a3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x136a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x136a40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x136a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x136a44: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x136A44u;
    {
        const bool branch_taken_0x136a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a44) {
            ctx->pc = 0x136B80u;
            goto label_136b80;
        }
    }
    ctx->pc = 0x136A4Cu;
    // 0x136a4c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x136a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x136a50: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x136a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x136a54: 0x2470004c  addiu       $s0, $v1, 0x4C
    ctx->pc = 0x136a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x136a58: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x136a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136a5c: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x136A5Cu;
    {
        const bool branch_taken_0x136a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136a5c) {
            ctx->pc = 0x136B80u;
            goto label_136b80;
        }
    }
    ctx->pc = 0x136A64u;
    // 0x136a64: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x136a64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x136a68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x136A68u;
    {
        const bool branch_taken_0x136a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a68) {
            ctx->pc = 0x136A84u;
            goto label_136a84;
        }
    }
    ctx->pc = 0x136A70u;
    // 0x136a70: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x136a70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x136a74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x136a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x136a78: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x136a78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x136a7c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x136A7Cu;
    {
        const bool branch_taken_0x136a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a7c) {
            ctx->pc = 0x136B80u;
            goto label_136b80;
        }
    }
    ctx->pc = 0x136A84u;
label_136a84:
    // 0x136a84: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x136a84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136a88: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x136A88u;
    {
        const bool branch_taken_0x136a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a88) {
            ctx->pc = 0x136B70u;
            goto label_136b70;
        }
    }
    ctx->pc = 0x136A90u;
label_136a90:
    // 0x136a90: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x136a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x136a94: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x136a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x136a98: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x136a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x136a9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x136a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x136aa0: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x136aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x136aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136aa8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x136aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x136aac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x136aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136ab0: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x136ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x136ab4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x136AB4u;
    SET_GPR_U32(ctx, 31, 0x136ABCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x136AB4u, 0x136ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136ABCu;
label_136abc:
    // 0x136abc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x136abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136ac0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x136ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x136ac4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x136ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x136ac8: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x136AC8u;
    {
        const bool branch_taken_0x136ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136ac8) {
            ctx->pc = 0x136B40u;
            goto label_136b40;
        }
    }
    ctx->pc = 0x136AD0u;
    // 0x136ad0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x136ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136ad4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x136AD4u;
    {
        const bool branch_taken_0x136ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136ad4) {
            ctx->pc = 0x136B28u;
            goto label_136b28;
        }
    }
    ctx->pc = 0x136ADCu;
    // 0x136adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ae0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x136AE0u;
    {
        const bool branch_taken_0x136ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136ae0) {
            ctx->pc = 0x136B10u;
            goto label_136b10;
        }
    }
    ctx->pc = 0x136AE8u;
    // 0x136ae8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136AE8u;
    {
        const bool branch_taken_0x136ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ae8) {
            ctx->pc = 0x136AF8u;
            goto label_136af8;
        }
    }
    ctx->pc = 0x136AF0u;
    // 0x136af0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x136AF0u;
    {
        const bool branch_taken_0x136af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136af0) {
            ctx->pc = 0x136B50u;
            goto label_136b50;
        }
    }
    ctx->pc = 0x136AF8u;
label_136af8:
    // 0x136af8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x136af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x136afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136b00: 0x0  nop
    ctx->pc = 0x136b00u;
    // NOP
    // 0x136b04: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x136b08: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x136B08u;
    {
        const bool branch_taken_0x136b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b08) {
            ctx->pc = 0x136B50u;
            goto label_136b50;
        }
    }
    ctx->pc = 0x136B10u;
label_136b10:
    // 0x136b10: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x136b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x136b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136b18: 0x0  nop
    ctx->pc = 0x136b18u;
    // NOP
    // 0x136b1c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x136b20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x136B20u;
    {
        const bool branch_taken_0x136b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b20) {
            ctx->pc = 0x136B50u;
            goto label_136b50;
        }
    }
    ctx->pc = 0x136B28u;
label_136b28:
    // 0x136b28: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x136b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x136b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136b30: 0x0  nop
    ctx->pc = 0x136b30u;
    // NOP
    // 0x136b34: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x136b38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x136B38u;
    {
        const bool branch_taken_0x136b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b38) {
            ctx->pc = 0x136B50u;
            goto label_136b50;
        }
    }
    ctx->pc = 0x136B40u;
label_136b40:
    // 0x136b40: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x136b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x136b44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136b48: 0x0  nop
    ctx->pc = 0x136b48u;
    // NOP
    // 0x136b4c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_136b50:
    // 0x136b50: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x136b50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x136b54: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x136b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x136b58: 0x24634e88  addiu       $v1, $v1, 0x4E88
    ctx->pc = 0x136b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20104));
    // 0x136b5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136b60: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x136b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x136b64: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x136b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136b68: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x136b68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x136b6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x136b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_136b70:
    // 0x136b70: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x136b70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x136b74: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x136B74u;
    {
        const bool branch_taken_0x136b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136b74) {
            ctx->pc = 0x136A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136a90;
        }
    }
    ctx->pc = 0x136B7Cu;
    // 0x136b7c: 0x0  nop
    ctx->pc = 0x136b7cu;
    // NOP
label_136b80:
    // 0x136b80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x136b80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x136b84: 0x0  nop
    ctx->pc = 0x136b84u;
    // NOP
label_136b88:
    // 0x136b88: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x136b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x136b8c: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x136B8Cu;
    {
        const bool branch_taken_0x136b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136b8c) {
            ctx->pc = 0x136A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136a20;
        }
    }
    ctx->pc = 0x136B94u;
    // 0x136b94: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x136b94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x136b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136ba8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x136ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x136bac: 0x3e00008  jr          $ra
    ctx->pc = 0x136BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136BB4u;
}
