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

// Function: e2d_id48_type03
// Address: 0x2b5b50 - 0x2b5ccc
void e2d_id48_type03_0x2b5b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id48_type03_0x2b5b50");
#endif

    switch (ctx->pc) {
        case 0x2b5bc4u: goto label_2b5bc4;
        default: break;
    }

    ctx->pc = 0x2b5b50u;

    // 0x2b5b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5b54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b5b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b5b58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b5b5c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2b5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2b5b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5b64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5b68: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b5b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b5b6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b5b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5b70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5b74: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b5b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b5b78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b5b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5b7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5b80: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b5b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b5b84: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b5b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5b8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5b90: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b5b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b5b94: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b5b98: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b5b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b5b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5ba0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5ba4: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2b5ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2b5ba8: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b5bac: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b5bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b5bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5bb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5bb8: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b5bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b5bbc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B5BBCu;
    SET_GPR_U32(ctx, 31, 0x2B5BC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B5BBCu, 0x2B5BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BC4u;
label_2b5bc4:
    // 0x2b5bc4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b5bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b5bc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b5bc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5bcc: 0x0  nop
    ctx->pc = 0x2b5bccu;
    // NOP
    // 0x2b5bd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b5bd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b5bd4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b5bd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5bdc: 0x0  nop
    ctx->pc = 0x2b5bdcu;
    // NOP
    // 0x2b5be0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b5be4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5be8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5bec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b5becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b5bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5bf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5bf8: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2b5bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2b5bfc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b5c00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5c04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5c08: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b5c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b5c0c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b5c10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5c10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5c14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5c18: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b5c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b5c1c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b5c20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5c24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5c28: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b5c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b5c2c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2b5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2b5c30: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b5c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b5c34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5c38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5c3c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b5c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b5c40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5c44: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5c48: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b5c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b5c4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5c50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5c54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b5c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5c58: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b5c58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b5c5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5c60: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5c64: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b5c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b5c68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5c6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5c70: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b5c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b5c74: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b5c78: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b5c7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5c80: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b5c80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b5c84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b5c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5c88: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b5c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b5c8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b5c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5c90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5c94: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b5c94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5c98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b5c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5c9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5ca0: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b5ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5ca4: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2b5ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2b5ca8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5cac: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b5cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b5cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5cb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5cb8: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b5cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5cbc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b5cbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5cc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b5cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5CCCu;
}
