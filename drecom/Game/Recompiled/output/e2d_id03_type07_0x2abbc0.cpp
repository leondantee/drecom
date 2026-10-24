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

// Function: e2d_id03_type07
// Address: 0x2abbc0 - 0x2abe64
void e2d_id03_type07_0x2abbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type07_0x2abbc0");
#endif

    switch (ctx->pc) {
        case 0x2abc64u: goto label_2abc64;
        case 0x2abc94u: goto label_2abc94;
        case 0x2abcb4u: goto label_2abcb4;
        case 0x2abcd4u: goto label_2abcd4;
        default: break;
    }

    ctx->pc = 0x2abbc0u;

    // 0x2abbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2abbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2abbc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2abbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2abbc8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2abbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2abbcc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2abbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2abbd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abbd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abbd8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2abbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2abbdc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2abbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2abbe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abbe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abbe8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2abbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2abbec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2abbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2abbf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abbf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abbf8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2abbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2abbfc: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x2abbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x2abc00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abc04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abc08: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2abc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2abc0c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2abc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2abc10: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2abc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2abc14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abc18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abc1c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2abc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2abc20: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2abc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2abc24: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2abc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2abc28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abc2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abc30: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2abc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2abc34: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2abc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2abc38: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2abc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2abc3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abc40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abc44: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2abc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2abc48: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2abc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2abc4c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2abc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2abc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abc54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abc58: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2abc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2abc5c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2ABC5Cu;
    SET_GPR_U32(ctx, 31, 0x2ABC64u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2ABC5Cu, 0x2ABC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC64u;
label_2abc64:
    // 0x2abc64: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2abc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2abc68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2abc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abc6c: 0x0  nop
    ctx->pc = 0x2abc6cu;
    // NOP
    // 0x2abc70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2abc70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2abc74: 0x3c024475  lui         $v0, 0x4475
    ctx->pc = 0x2abc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17525 << 16));
    // 0x2abc78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abc78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abc7c: 0x0  nop
    ctx->pc = 0x2abc7cu;
    // NOP
    // 0x2abc80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2abc80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2abc84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abc88: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2abc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2abc8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ABC8Cu;
    SET_GPR_U32(ctx, 31, 0x2ABC94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ABC8Cu, 0x2ABC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC94u;
label_2abc94:
    // 0x2abc94: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2abc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2abc98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2abc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abc9c: 0x0  nop
    ctx->pc = 0x2abc9cu;
    // NOP
    // 0x2abca0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2abca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2abca4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abca8: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2abca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2abcac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ABCACu;
    SET_GPR_U32(ctx, 31, 0x2ABCB4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ABCACu, 0x2ABCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCB4u;
label_2abcb4:
    // 0x2abcb4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2abcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2abcb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2abcb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abcbc: 0x0  nop
    ctx->pc = 0x2abcbcu;
    // NOP
    // 0x2abcc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2abcc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2abcc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abcc8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2abcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2abccc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ABCCCu;
    SET_GPR_U32(ctx, 31, 0x2ABCD4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ABCCCu, 0x2ABCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCD4u;
label_2abcd4:
    // 0x2abcd4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2abcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2abcd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2abcd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abcdc: 0x0  nop
    ctx->pc = 0x2abcdcu;
    // NOP
    // 0x2abce0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2abce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2abce4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abce8: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2abce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2abcec: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2abcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2abcf0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2abcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2abcf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abcf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abcf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abcfc: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2abcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2abd00: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2abd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2abd04: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2abd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2abd08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abd08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abd0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abd10: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x2abd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x2abd14: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2abd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2abd18: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2abd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2abd1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abd1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abd20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abd24: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x2abd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2abd28: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abd2c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abd30: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abd30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abd34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abd38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abd3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abd40: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2abd40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2abd44: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abd48: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abd48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abd4c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abd4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abd50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abd54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abd58: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2abd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2abd5c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2abd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2abd60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2abd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2abd64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abd68: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2abd68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2abd6c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2abd6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abd70: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2abd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2abd74: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2abd74u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2abd78: 0x0  nop
    ctx->pc = 0x2abd78u;
    // NOP
    // 0x2abd7c: 0x0  nop
    ctx->pc = 0x2abd7cu;
    // NOP
    // 0x2abd80: 0x1810  mfhi        $v1
    ctx->pc = 0x2abd80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2abd84: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2abd84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abd88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abd8c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2abd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2abd90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abd94: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abd94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abd98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abd9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abda0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abda4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abda8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2abda8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2abdac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abdb0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abdb4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abdb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abdb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abdbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abdc0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2abdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2abdc4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2abdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2abdc8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2abdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2abdcc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abdd0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2abdd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2abdd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abdd8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2abdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2abddc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2abddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abde0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2abde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abde4: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2abde4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2abde8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2abde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2abdec: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2abdecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abdf0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abdf4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abdf8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abdf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abdfc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abe00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abe04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abe08: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2abe08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2abe0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abe10: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abe10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abe14: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abe14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abe18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abe18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abe1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abe20: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2abe20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2abe24: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2abe24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2abe28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2abe28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2abe2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abe2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abe30: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2abe30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2abe34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abe38: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2abe38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2abe3c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2abe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2abe40: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2abe40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abe44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2abe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abe48: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2abe48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2abe4c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2abe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2abe50: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2abe50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abe54: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2abe54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abe58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2abe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2abe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABE64u;
}
