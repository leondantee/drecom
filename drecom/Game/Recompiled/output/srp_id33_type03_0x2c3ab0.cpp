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

// Function: srp_id33_type03
// Address: 0x2c3ab0 - 0x2c3c5c
void srp_id33_type03_0x2c3ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id33_type03_0x2c3ab0");
#endif

    switch (ctx->pc) {
        case 0x2c3afcu: goto label_2c3afc;
        case 0x2c3c18u: goto label_2c3c18;
        default: break;
    }

    ctx->pc = 0x2c3ab0u;

    // 0x2c3ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3ab4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c3ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c3ab8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c3abc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3ac0: 0xa040036a  sb          $zero, 0x36A($v0)
    ctx->pc = 0x2c3ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 874), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3ac4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3acc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3ad0: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c3ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c3ad4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3adc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3ae0: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c3ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c3ae4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3aec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3af0: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c3af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c3af4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C3AF4u;
    SET_GPR_U32(ctx, 31, 0x2C3AFCu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C3AF4u, 0x2C3AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AFCu;
label_2c3afc:
    // 0x2c3afc: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2c3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2c3b00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c3b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3b04: 0x0  nop
    ctx->pc = 0x2c3b04u;
    // NOP
    // 0x2c3b08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c3b08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c3b0c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3b14: 0x0  nop
    ctx->pc = 0x2c3b14u;
    // NOP
    // 0x2c3b18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c3b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c3b1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3b20: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c3b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c3b24: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c3b28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3b2c: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c3b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3b30: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2c3b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c3b34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3b38: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c3b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3b3c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c3b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3b44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3b48: 0xe44002a4  swc1        $f0, 0x2A4($v0)
    ctx->pc = 0x2c3b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 676), bits); }
    // 0x2c3b4c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2c3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2c3b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3b54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3b58: 0xe4400270  swc1        $f0, 0x270($v0)
    ctx->pc = 0x2c3b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 624), bits); }
    // 0x2c3b5c: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x2c3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x2c3b60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c3b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c3b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3b68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3b6c: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2c3b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2c3b70: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x2c3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x2c3b74: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c3b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c3b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3b7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3b80: 0xe4400278  swc1        $f0, 0x278($v0)
    ctx->pc = 0x2c3b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x2c3b84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c3b88: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c3b8c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c3b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c3b90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3b98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c3b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3b9c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2c3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c3ba0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c3ba4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c3ba8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c3ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c3bac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3bb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3bb4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2c3bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2c3bb8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2c3bbc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c3bc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c3bc4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2c3bc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2c3bc8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3bcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3bd0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2c3bd0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c3bd4: 0x0  nop
    ctx->pc = 0x2c3bd4u;
    // NOP
    // 0x2c3bd8: 0x0  nop
    ctx->pc = 0x2c3bd8u;
    // NOP
    // 0x2c3bdc: 0x1010  mfhi        $v0
    ctx->pc = 0x2c3bdcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c3be0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3be4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3be8: 0xa04302aa  sb          $v1, 0x2AA($v0)
    ctx->pc = 0x2c3be8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 682), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3bec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c3becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3bf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3bf4: 0xa04302a8  sb          $v1, 0x2A8($v0)
    ctx->pc = 0x2c3bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3bf8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2c3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2c3bfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3c00: 0xa043034f  sb          $v1, 0x34F($v0)
    ctx->pc = 0x2c3c00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3c04: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c3c08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3c0c: 0xac430364  sw          $v1, 0x364($v0)
    ctx->pc = 0x2c3c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 868), GPR_U32(ctx, 3));
    // 0x2c3c10: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C3C10u;
    SET_GPR_U32(ctx, 31, 0x2C3C18u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C3C10u, 0x2C3C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C18u;
label_2c3c18:
    // 0x2c3c18: 0x3c0343be  lui         $v1, 0x43BE
    ctx->pc = 0x2c3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17342 << 16));
    // 0x2c3c1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c3c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3c20: 0x0  nop
    ctx->pc = 0x2c3c20u;
    // NOP
    // 0x2c3c24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c3c24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c3c28: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x2c3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x2c3c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3c30: 0x0  nop
    ctx->pc = 0x2c3c30u;
    // NOP
    // 0x2c3c34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c3c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c3c38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3c3c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c3c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c3c40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3c44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3c48: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c3c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3c4c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c3c4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3c50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c3c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c3c54: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3C5Cu;
}
