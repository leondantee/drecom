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

// Function: e2d_id8d_type00
// Address: 0x2bdd90 - 0x2bdf48
void e2d_id8d_type00_0x2bdd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id8d_type00_0x2bdd90");
#endif

    switch (ctx->pc) {
        case 0x2bddd4u: goto label_2bddd4;
        case 0x2bde04u: goto label_2bde04;
        case 0x2bde2cu: goto label_2bde2c;
        case 0x2bde54u: goto label_2bde54;
        default: break;
    }

    ctx->pc = 0x2bdd90u;

    // 0x2bdd90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bdd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bdd94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bdd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bdd98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bdd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bdd9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bdd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bdda0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdda4: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2bdda4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdda8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bddac: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2bddacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bddb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bddb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bddb8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2bddb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bddbc: 0x3c0242a4  lui         $v0, 0x42A4
    ctx->pc = 0x2bddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17060 << 16));
    // 0x2bddc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bddc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bddc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bddc8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bddcc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BDDCCu;
    SET_GPR_U32(ctx, 31, 0x2BDDD4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BDDCCu, 0x2BDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDDD4u;
label_2bddd4:
    // 0x2bddd4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2bddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2bddd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bddd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdddc: 0x0  nop
    ctx->pc = 0x2bdddcu;
    // NOP
    // 0x2bdde0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bdde0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bdde4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2bdde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2bdde8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bddec: 0x0  nop
    ctx->pc = 0x2bddecu;
    // NOP
    // 0x2bddf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bddf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bddf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bddf8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bddf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bddfc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BDDFCu;
    SET_GPR_U32(ctx, 31, 0x2BDE04u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BDDFCu, 0x2BDE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE04u;
label_2bde04:
    // 0x2bde04: 0x3c024391  lui         $v0, 0x4391
    ctx->pc = 0x2bde04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17297 << 16));
    // 0x2bde08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bde08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bde0c: 0x0  nop
    ctx->pc = 0x2bde0cu;
    // NOP
    // 0x2bde10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bde10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bde14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bde14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bde18: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2bde18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bde1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bde1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bde20: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x2bde20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2bde24: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BDE24u;
    SET_GPR_U32(ctx, 31, 0x2BDE2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BDE24u, 0x2BDE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE2Cu;
label_2bde2c:
    // 0x2bde2c: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x2bde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
    // 0x2bde30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bde30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bde34: 0x0  nop
    ctx->pc = 0x2bde34u;
    // NOP
    // 0x2bde38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bde38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bde3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bde40: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x2bde40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bde44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bde44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bde48: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x2bde48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2bde4c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BDE4Cu;
    SET_GPR_U32(ctx, 31, 0x2BDE54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BDE4Cu, 0x2BDE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE54u;
label_2bde54:
    // 0x2bde54: 0x3c034391  lui         $v1, 0x4391
    ctx->pc = 0x2bde54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17297 << 16));
    // 0x2bde58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bde58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bde5c: 0x0  nop
    ctx->pc = 0x2bde5cu;
    // NOP
    // 0x2bde60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bde60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bde64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bde64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bde68: 0xc46000b8  lwc1        $f0, 0xB8($v1)
    ctx->pc = 0x2bde68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bde6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bde6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bde70: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x2bde70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x2bde74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bde74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bde78: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bde78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bde7c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bde7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bde80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bde80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bde84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bde84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bde88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bde88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bde8c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bde8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bde90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bde90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bde94: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bde94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bde98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bde98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bde9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bde9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdea0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdea4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bdea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bdea8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bdea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bdeac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bdeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bdeb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdeb4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bdeb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bdeb8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdebc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bdebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bdec0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bdec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdec4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bdec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdec8: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bdec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bdecc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bdeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bded0: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bded0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bded4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bded4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bded8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bded8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdedc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdee0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdee8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdeec: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bdeecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bdef0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdef4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdef4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdef8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdefc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdf00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdf04: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bdf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bdf08: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bdf08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bdf0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bdf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bdf10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdf14: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bdf14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bdf18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdf1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bdf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bdf20: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2bdf20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bdf24: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bdf24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdf28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bdf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdf2c: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bdf2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bdf30: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bdf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bdf34: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bdf34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdf38: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bdf38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdf3c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bdf3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bdf40: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDF48u;
}
