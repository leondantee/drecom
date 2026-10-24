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

// Function: Em0a_eye_r0_reset
// Address: 0x368a20 - 0x368bcc
void Em0a_eye_r0_reset_0x368a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_eye_r0_reset_0x368a20");
#endif

    switch (ctx->pc) {
        case 0x368afcu: goto label_368afc;
        default: break;
    }

    ctx->pc = 0x368a20u;

    // 0x368a20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x368a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x368a24: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x368a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x368a28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x368a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x368a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x368a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x368a30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x368a34: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x368a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x368a38: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x368a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x368a3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x368a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368a40: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x368a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x368a44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x368a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368a48: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x368a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368a4c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x368a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x368a50: 0x2463af10  addiu       $v1, $v1, -0x50F0
    ctx->pc = 0x368a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946576));
    // 0x368a54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368a58: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x368a58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368a5c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x368a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368a60: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x368a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x368a64: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x368a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x368a68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x368a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x368a6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x368a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x368a70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x368a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368a74: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x368a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x368a78: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x368a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368a7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x368a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368a80: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x368a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x368a84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x368a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368a88: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x368a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368a8c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x368a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x368a90: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x368a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x368a94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368a98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x368a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368a9c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x368a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x368aa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368aa4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x368aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368aa8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x368aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368aac: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x368aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x368ab0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x368ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368ab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x368ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368ab8: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x368ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x368abc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x368abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368ac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368ac4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x368AC4u;
    {
        const bool branch_taken_0x368ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x368ac4) {
            ctx->pc = 0x368B44u;
            goto label_368b44;
        }
    }
    ctx->pc = 0x368ACCu;
    // 0x368acc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368ACCu;
    {
        const bool branch_taken_0x368acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368acc) {
            ctx->pc = 0x368ADCu;
            goto label_368adc;
        }
    }
    ctx->pc = 0x368AD4u;
    // 0x368ad4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x368AD4u;
    {
        const bool branch_taken_0x368ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ad4) {
            ctx->pc = 0x368BB0u;
            goto label_368bb0;
        }
    }
    ctx->pc = 0x368ADCu;
label_368adc:
    // 0x368adc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x368adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368ae0: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x368ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x368ae4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x368ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x368ae8: 0xa0620010  sb          $v0, 0x10($v1)
    ctx->pc = 0x368ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x368aec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x368aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368af0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x368af0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x368af4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x368AF4u;
    SET_GPR_U32(ctx, 31, 0x368AFCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x368AF4u, 0x368AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AFCu;
label_368afc:
    // 0x368afc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368b00: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x368b00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x368b04: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x368b04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x368b08: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x368b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x368b0c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x368b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x368b10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b14: 0x0  nop
    ctx->pc = 0x368b14u;
    // NOP
    // 0x368b18: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x368b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x368b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b20: 0x0  nop
    ctx->pc = 0x368b20u;
    // NOP
    // 0x368b24: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x368b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x368b28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b2c: 0x0  nop
    ctx->pc = 0x368b2cu;
    // NOP
    // 0x368b30: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x368b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x368b34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x368b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368b38: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x368b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x368b3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x368b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x368b40: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x368b40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
label_368b44:
    // 0x368b44: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x368b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368b48: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x368b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x368b4c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x368b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x368b50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368b50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b54: 0x0  nop
    ctx->pc = 0x368b54u;
    // NOP
    // 0x368b58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x368b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x368b5c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x368b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x368b60: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x368b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368b64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x368b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x368b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b6c: 0x0  nop
    ctx->pc = 0x368b6cu;
    // NOP
    // 0x368b70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x368b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368b74: 0x0  nop
    ctx->pc = 0x368b74u;
    // NOP
    // 0x368b78: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x368B78u;
    {
        const bool branch_taken_0x368b78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x368b78) {
            ctx->pc = 0x368BA0u;
            goto label_368ba0;
        }
    }
    ctx->pc = 0x368B80u;
    // 0x368b80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x368b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x368b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b88: 0x0  nop
    ctx->pc = 0x368b88u;
    // NOP
    // 0x368b8c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x368b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x368b90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x368b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368b94: 0xa0600011  sb          $zero, 0x11($v1)
    ctx->pc = 0x368b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x368b98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x368b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368b9c: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x368b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
label_368ba0:
    // 0x368ba0: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x368ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368ba4: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x368ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x368ba8: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x368ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368bac: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x368bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_368bb0:
    // 0x368bb0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x368bb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368bb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x368bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368bb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368bbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368bc0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x368bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x368bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x368BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368BCCu;
}
