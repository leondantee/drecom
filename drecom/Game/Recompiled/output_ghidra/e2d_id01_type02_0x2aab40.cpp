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

// Function: e2d_id01_type02
// Address: 0x2aab40 - 0x2aacd4
void e2d_id01_type02_0x2aab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id01_type02_0x2aab40");
#endif

    switch (ctx->pc) {
        case 0x2aaba0u: goto label_2aaba0;
        default: break;
    }

    ctx->pc = 0x2aab40u;

    // 0x2aab40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aab44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aab48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aab48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aab4c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aab50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aab50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aab54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aab58: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aab58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aab5c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aab60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aab60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aab64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aab68: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aab68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aab6c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aab70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aab70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aab74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aab78: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aab78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aab7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aab80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aab80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aab84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aab88: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aab88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aab8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2aab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aab90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aab94: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2aab94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aab98: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AAB98u;
    SET_GPR_U32(ctx, 31, 0x2AABA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AAB98u, 0x2AABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AABA0u;
label_2aaba0:
    // 0x2aaba0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2aaba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2aaba4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aaba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aaba8: 0x0  nop
    ctx->pc = 0x2aaba8u;
    // NOP
    // 0x2aabac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aabacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aabb0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2aabb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2aabb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aabb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aabb8: 0x0  nop
    ctx->pc = 0x2aabb8u;
    // NOP
    // 0x2aabbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aabbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aabc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aabc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aabc4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aabc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aabc8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aabc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aabcc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aabccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aabd0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aabd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aabd4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aabd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aabd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aabd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aabdc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aabdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aabe0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2aabe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2aabe4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aabe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aabe8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aabec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aabecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aabf0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aabf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aabf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aabf8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2aabf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2aabfc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2aabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2aac00: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2aac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2aac04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aac04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aac08: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2aac08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aac0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aac0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aac10: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2aac10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2aac14: 0x246401c2  addiu       $a0, $v1, 0x1C2
    ctx->pc = 0x2aac14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 450));
    // 0x2aac18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aac1c: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2aac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2aac20: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x2aac20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x2aac24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aac24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aac28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aac2c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2aac2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2aac30: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2aac30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2aac34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aac34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aac38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aac3c: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2aac3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2aac40: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2aac40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2aac44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aac44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aac48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aac4c: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2aac4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2aac50: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2aac50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2aac54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aac54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aac58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aac5c: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2aac5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2aac60: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2aac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aac64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aac68: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2aac68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aac6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aac6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aac70: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aac70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aac74: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aac74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aac78: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aac78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aac7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aac80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aac80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aac84: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2aac84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2aac88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aac88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aac8c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aac90: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aac90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aac94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aac94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aac98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aac98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aac9c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2aac9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2aaca0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2aaca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2aaca4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2aaca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2aaca8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aaca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aacac: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2aacacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aacb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aacb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aacb4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2aacb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2aacb8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2aacb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aacbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aacc0: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2aacc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aacc4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aacc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aacc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aacc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aaccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AACCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AACCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AACD4u;
}
