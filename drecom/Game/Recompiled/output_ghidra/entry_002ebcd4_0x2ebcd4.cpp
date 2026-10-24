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

// Function: entry_002ebcd4
// Address: 0x2ebcd4 - 0x2ebf90
void entry_002ebcd4_0x2ebcd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ebcd4_0x2ebcd4");
#endif

    switch (ctx->pc) {
        case 0x2ebd14u: goto label_2ebd14;
        case 0x2ebd20u: goto label_2ebd20;
        case 0x2ebd80u: goto label_2ebd80;
        case 0x2ebda4u: goto label_2ebda4;
        case 0x2ebdc8u: goto label_2ebdc8;
        case 0x2ebdecu: goto label_2ebdec;
        case 0x2ebe50u: goto label_2ebe50;
        case 0x2ebe80u: goto label_2ebe80;
        default: break;
    }

    ctx->pc = 0x2ebcd4u;

    // 0x2ebcd4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2ebcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ebcd8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ebcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ebcdc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ebcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ebce0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ebce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ebce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ebce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ebce8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ebce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ebcec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ebcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ebcf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ebcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ebcf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ebcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ebcf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ebcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ebcfc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ebcfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ebd00: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x2ebd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x2ebd04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ebd04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ebd08: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ebd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ebd0c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EBD0Cu;
    SET_GPR_U32(ctx, 31, 0x2EBD14u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EBD0Cu, 0x2EBD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD14u;
label_2ebd14:
    // 0x2ebd14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ebd14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ebd18: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EBD18u;
    SET_GPR_U32(ctx, 31, 0x2EBD20u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EBD18u, 0x2EBD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD20u;
label_2ebd20:
    // 0x2ebd20: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ebd20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ebd24: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ebd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ebd28: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ebd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ebd2c: 0x12030098  beq         $s0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2EBD2Cu;
    {
        const bool branch_taken_0x2ebd2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ebd2c) {
            ctx->pc = 0x2EBF90u;
            return;
        }
    }
    ctx->pc = 0x2EBD34u;
    // 0x2ebd34: 0x3c02415e  lui         $v0, 0x415E
    ctx->pc = 0x2ebd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16734 << 16));
    // 0x2ebd38: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ebd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ebd3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebd40: 0x0  nop
    ctx->pc = 0x2ebd40u;
    // NOP
    // 0x2ebd44: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ebd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ebd48: 0x3c024158  lui         $v0, 0x4158
    ctx->pc = 0x2ebd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16728 << 16));
    // 0x2ebd4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebd4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebd50: 0x0  nop
    ctx->pc = 0x2ebd50u;
    // NOP
    // 0x2ebd54: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ebd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ebd58: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2ebd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2ebd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebd60: 0x0  nop
    ctx->pc = 0x2ebd60u;
    // NOP
    // 0x2ebd64: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ebd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ebd68: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ebd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ebd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebd70: 0x0  nop
    ctx->pc = 0x2ebd70u;
    // NOP
    // 0x2ebd74: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ebd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ebd78: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBD78u;
    SET_GPR_U32(ctx, 31, 0x2EBD80u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBD78u, 0x2EBD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD80u;
label_2ebd80:
    // 0x2ebd80: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ebd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ebd84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebd88: 0x0  nop
    ctx->pc = 0x2ebd88u;
    // NOP
    // 0x2ebd8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ebd8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebd90: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ebd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebd94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ebd94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ebd98: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ebd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ebd9c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBD9Cu;
    SET_GPR_U32(ctx, 31, 0x2EBDA4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBD9Cu, 0x2EBDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDA4u;
label_2ebda4:
    // 0x2ebda4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ebda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ebda8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebdac: 0x0  nop
    ctx->pc = 0x2ebdacu;
    // NOP
    // 0x2ebdb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ebdb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebdb4: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ebdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebdb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ebdb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ebdbc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ebdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ebdc0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBDC0u;
    SET_GPR_U32(ctx, 31, 0x2EBDC8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBDC0u, 0x2EBDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDC8u;
label_2ebdc8:
    // 0x2ebdc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ebdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ebdcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebdd0: 0x0  nop
    ctx->pc = 0x2ebdd0u;
    // NOP
    // 0x2ebdd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ebdd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebdd8: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ebdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebddc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ebddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ebde0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ebde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ebde4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBDE4u;
    SET_GPR_U32(ctx, 31, 0x2EBDECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBDE4u, 0x2EBDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDECu;
label_2ebdec:
    // 0x2ebdec: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ebdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ebdf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebdf4: 0x0  nop
    ctx->pc = 0x2ebdf4u;
    // NOP
    // 0x2ebdf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ebdf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebdfc: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ebdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebe00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ebe00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ebe04: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ebe04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ebe08: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ebe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ebe0c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ebe0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ebe10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebe10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebe14: 0x0  nop
    ctx->pc = 0x2ebe14u;
    // NOP
    // 0x2ebe18: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2ebe18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2ebe1c: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ebe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ebe20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ebe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ebe24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebe24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebe28: 0x0  nop
    ctx->pc = 0x2ebe28u;
    // NOP
    // 0x2ebe2c: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2ebe2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2ebe30: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ebe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ebe34: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ebe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ebe38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebe38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebe3c: 0x0  nop
    ctx->pc = 0x2ebe3cu;
    // NOP
    // 0x2ebe40: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2ebe40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2ebe44: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x2ebe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ebe48: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EBE48u;
    SET_GPR_U32(ctx, 31, 0x2EBE50u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EBE48u, 0x2EBE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE50u;
label_2ebe50:
    // 0x2ebe50: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ebe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ebe54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebe54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebe58: 0x0  nop
    ctx->pc = 0x2ebe58u;
    // NOP
    // 0x2ebe5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebe5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebe60: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ebe60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ebe64: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ebe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ebe68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebe68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebe6c: 0x0  nop
    ctx->pc = 0x2ebe6cu;
    // NOP
    // 0x2ebe70: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ebe70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ebe74: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x2ebe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ebe78: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EBE78u;
    SET_GPR_U32(ctx, 31, 0x2EBE80u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EBE78u, 0x2EBE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE80u;
label_2ebe80:
    // 0x2ebe80: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2ebe80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2ebe84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ebe84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebe88: 0x0  nop
    ctx->pc = 0x2ebe88u;
    // NOP
    // 0x2ebe8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebe8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebe90: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ebe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ebe94: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2ebe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2ebe98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebe98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebe9c: 0x0  nop
    ctx->pc = 0x2ebe9cu;
    // NOP
    // 0x2ebea0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ebea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ebea4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ebea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ebea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebeac: 0x0  nop
    ctx->pc = 0x2ebeacu;
    // NOP
    // 0x2ebeb0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ebeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ebeb4: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2ebeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2ebeb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebeb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebebc: 0x0  nop
    ctx->pc = 0x2ebebcu;
    // NOP
    // 0x2ebec0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ebec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ebec4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2ebec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2ebec8: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2ebec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2ebecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebeccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebed0: 0x0  nop
    ctx->pc = 0x2ebed0u;
    // NOP
    // 0x2ebed4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ebed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ebed8: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2ebed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2ebedc: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2ebedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2ebee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebee4: 0x0  nop
    ctx->pc = 0x2ebee4u;
    // NOP
    // 0x2ebee8: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ebee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ebeec: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2ebeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2ebef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebef4: 0x0  nop
    ctx->pc = 0x2ebef4u;
    // NOP
    // 0x2ebef8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2ebef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2ebefc: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2ebefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x2ebf00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebf00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebf04: 0x0  nop
    ctx->pc = 0x2ebf04u;
    // NOP
    // 0x2ebf08: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ebf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ebf0c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2ebf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ebf10: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2ebf10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2ebf14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ebf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ebf18: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ebf18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ebf1c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ebf1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ebf20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ebf20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ebf24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ebf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ebf28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ebf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ebf2c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ebf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ebf30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ebf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ebf34: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ebf34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ebf38: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ebf38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ebf3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ebf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ebf40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ebf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ebf44: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ebf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ebf48: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ebf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ebf4c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ebf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ebf50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ebf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ebf54: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ebf54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ebf58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ebf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ebf5c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2ebf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2ebf60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ebf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ebf64: 0xa2030138  sb          $v1, 0x138($s0)
    ctx->pc = 0x2ebf64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ebf68: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2ebf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2ebf6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ebf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ebf70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebf70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebf74: 0x0  nop
    ctx->pc = 0x2ebf74u;
    // NOP
    // 0x2ebf78: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ebf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ebf7c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2ebf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2ebf80: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2ebf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2ebf84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebf84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebf88: 0x0  nop
    ctx->pc = 0x2ebf88u;
    // NOP
    // 0x2ebf8c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ebf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    ctx->pc = 0x2ebf90u;
}
