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

// Function: e2d_id01_type01
// Address: 0x2aa990 - 0x2aab34
void e2d_id01_type01_0x2aa990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id01_type01_0x2aa990");
#endif

    switch (ctx->pc) {
        case 0x2aa9f0u: goto label_2aa9f0;
        default: break;
    }

    ctx->pc = 0x2aa990u;

    // 0x2aa990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa994: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aa994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aa998: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aa998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aa99c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aa99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aa9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa9a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa9a8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aa9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aa9ac: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aa9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aa9b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa9b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa9b8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aa9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aa9bc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aa9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aa9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa9c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa9c8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aa9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aa9cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa9d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa9d8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aa9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aa9dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2aa9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa9e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa9e4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2aa9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa9e8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AA9E8u;
    SET_GPR_U32(ctx, 31, 0x2AA9F0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AA9E8u, 0x2AA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA9F0u;
label_2aa9f0:
    // 0x2aa9f0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2aa9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2aa9f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aa9f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa9f8: 0x0  nop
    ctx->pc = 0x2aa9f8u;
    // NOP
    // 0x2aa9fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa9fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aaa00: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2aaa00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2aaa04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaa04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaa08: 0x0  nop
    ctx->pc = 0x2aaa08u;
    // NOP
    // 0x2aaa0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aaa0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aaa10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aaa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aaa14: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aaa14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aaa18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aaa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aaa1c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aaa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aaa20: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aaa20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aaa24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aaa24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aaa28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aaa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aaa2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aaa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aaa30: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2aaa30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2aaa34: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aaa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aaa38: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aaa38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aaa3c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aaa3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aaa40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aaa40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aaa44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aaa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aaa48: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2aaa48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2aaa4c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2aaa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2aaa50: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2aaa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2aaa54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aaa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aaa58: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2aaa58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aaa5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aaa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aaa60: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2aaa60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2aaa64: 0x24640258  addiu       $a0, $v1, 0x258
    ctx->pc = 0x2aaa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 600));
    // 0x2aaa68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aaa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aaa6c: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2aaa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2aaa70: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x2aaa70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x2aaa74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaa74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaa78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aaa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aaa7c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2aaa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2aaa80: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x2aaa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x2aaa84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaa84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaa88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aaa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aaa8c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2aaa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2aaa90: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2aaa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2aaa94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaa94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaa98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aaa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aaa9c: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2aaa9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2aaaa0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2aaaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2aaaa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaaa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaaa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aaaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aaaac: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2aaaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2aaab0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2aaab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2aaab4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaab8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aaab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aaabc: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2aaabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2aaac0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2aaac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aaac4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aaac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aaac8: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2aaac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aaacc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aaaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aaad0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aaad0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aaad4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aaad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aaad8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aaad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aaadc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aaadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aaae0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aaae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aaae4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2aaae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2aaae8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aaae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aaaec: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aaaecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aaaf0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aaaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aaaf4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aaaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aaaf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aaaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aaafc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2aaafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2aab00: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2aab00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2aab04: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2aab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2aab08: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aab08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aab0c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2aab0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aab10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aab10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aab14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2aab14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2aab18: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2aab18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aab1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aab20: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2aab20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aab24: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aab24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aab28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aab2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAB34u;
}
