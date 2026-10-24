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

// Function: e2d_id13_type00
// Address: 0x2b0c90 - 0x2b0e18
void e2d_id13_type00_0x2b0c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id13_type00_0x2b0c90");
#endif

    switch (ctx->pc) {
        case 0x2b0ca4u: goto label_2b0ca4;
        case 0x2b0dc4u: goto label_2b0dc4;
        case 0x2b0dd4u: goto label_2b0dd4;
        default: break;
    }

    ctx->pc = 0x2b0c90u;

    // 0x2b0c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0c94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b0c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b0c98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b0c9c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2B0C9Cu;
    SET_GPR_U32(ctx, 31, 0x2B0CA4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2B0C9Cu, 0x2B0CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CA4u;
label_2b0ca4:
    // 0x2b0ca4: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2b0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2b0ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b0ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0cac: 0x0  nop
    ctx->pc = 0x2b0cacu;
    // NOP
    // 0x2b0cb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b0cb4: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2b0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2b0cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0cbc: 0x0  nop
    ctx->pc = 0x2b0cbcu;
    // NOP
    // 0x2b0cc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b0cc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0cc8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b0cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b0ccc: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x2b0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x2b0cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0cd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0cd8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2b0cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2b0cdc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b0ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0ce4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0ce8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b0ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b0cec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b0cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0cf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0cf8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b0cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b0cfc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b0d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0d04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0d08: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b0d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b0d0c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b0d10: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b0d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b0d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0d18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0d1c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b0d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b0d20: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b0d24: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b0d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b0d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0d2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0d30: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b0d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b0d34: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b0d38: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b0d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b0d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0d40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0d44: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b0d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b0d48: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x2b0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
    // 0x2b0d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0d50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0d54: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b0d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b0d58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0d5c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b0d60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b0d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b0d64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0d70: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b0d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b0d74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0d78: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b0d7c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b0d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b0d80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0d84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d88: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b0d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b0d8c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b0d90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b0d94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0d98: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b0d98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b0d9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0da0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2b0da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2b0da4: 0x2443003c  addiu       $v1, $v0, 0x3C
    ctx->pc = 0x2b0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2b0da8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0dac: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b0db0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0db4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0db8: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b0db8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b0dbc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B0DBCu;
    SET_GPR_U32(ctx, 31, 0x2B0DC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B0DBCu, 0x2B0DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DC4u;
label_2b0dc4:
    // 0x2b0dc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0dc8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b0dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b0dcc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B0DCCu;
    SET_GPR_U32(ctx, 31, 0x2B0DD4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B0DCCu, 0x2B0DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DD4u;
label_2b0dd4:
    // 0x2b0dd4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2b0dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2b0dd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b0dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0ddc: 0x0  nop
    ctx->pc = 0x2b0ddcu;
    // NOP
    // 0x2b0de0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b0de0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b0de4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0de8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b0de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b0dec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b0decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b0df0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0df4: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b0df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b0df8: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2b0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2b0dfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0e00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0e04: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b0e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b0e08: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b0e08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0e0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b0e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b0e10: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0E18u;
}
