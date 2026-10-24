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

// Function: Set_effect_pl00_mizusibuki
// Address: 0x2ef280 - 0x2ef710
void Set_effect_pl00_mizusibuki_0x2ef280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_mizusibuki_0x2ef280");
#endif

    switch (ctx->pc) {
        case 0x2ef2bcu: goto label_2ef2bc;
        case 0x2ef2e4u: goto label_2ef2e4;
        case 0x2ef31cu: goto label_2ef31c;
        case 0x2ef360u: goto label_2ef360;
        case 0x2ef3f4u: goto label_2ef3f4;
        case 0x2ef49cu: goto label_2ef49c;
        case 0x2ef530u: goto label_2ef530;
        default: break;
    }

    ctx->pc = 0x2ef280u;

    // 0x2ef280: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ef280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ef284: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x2ef284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x2ef288: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ef288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ef28c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ef28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ef290: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ef290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ef294: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ef294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ef298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ef298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ef29c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef2a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef2a4: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2ef2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2ef2a8: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x2ef2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x2ef2ac: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x2ef2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x2ef2b0: 0xe7ac00a8  swc1        $f12, 0xA8($sp)
    ctx->pc = 0x2ef2b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ef2b4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF2B4u;
    SET_GPR_U32(ctx, 31, 0x2EF2BCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF2B4u, 0x2EF2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF2BCu;
label_2ef2bc:
    // 0x2ef2bc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ef2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ef2c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef2c4: 0x0  nop
    ctx->pc = 0x2ef2c4u;
    // NOP
    // 0x2ef2c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ef2c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef2cc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ef2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ef2d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ef2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef2d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ef2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ef2d8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2ef2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ef2dc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF2DCu;
    SET_GPR_U32(ctx, 31, 0x2EF2E4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF2DCu, 0x2EF2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF2E4u;
label_2ef2e4:
    // 0x2ef2e4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ef2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ef2e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef2ec: 0x0  nop
    ctx->pc = 0x2ef2ecu;
    // NOP
    // 0x2ef2f0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2ef2f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef2f4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ef2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ef2f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ef2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef2fc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ef2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ef300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef304: 0x0  nop
    ctx->pc = 0x2ef304u;
    // NOP
    // 0x2ef308: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ef308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ef30c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ef30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ef310: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2ef310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ef314: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF314u;
    SET_GPR_U32(ctx, 31, 0x2EF31Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF314u, 0x2EF31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF31Cu;
label_2ef31c:
    // 0x2ef31c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ef31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ef320: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef324: 0x0  nop
    ctx->pc = 0x2ef324u;
    // NOP
    // 0x2ef328: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ef328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef32c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ef32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ef330: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ef330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef334: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ef334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ef338: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2ef338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ef33c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2ef33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ef340: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2EF340u;
    {
        const bool branch_taken_0x2ef340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef340) {
            ctx->pc = 0x2EF45Cu;
            goto label_2ef45c;
        }
    }
    ctx->pc = 0x2EF348u;
    // 0x2ef348: 0x24042a09  addiu       $a0, $zero, 0x2A09
    ctx->pc = 0x2ef348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10761));
    // 0x2ef34c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ef34cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef350: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2ef350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ef354: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2ef354u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef358: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EF358u;
    SET_GPR_U32(ctx, 31, 0x2EF360u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EF358u, 0x2EF360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF360u;
label_2ef360:
    // 0x2ef360: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef364: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ef368: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef36c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef36cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef370: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2ef370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef374: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef378: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef378u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef37c: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2ef37cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef380: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef384: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef388: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ef388u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef38c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef390: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef390u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef394: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2ef394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef398: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef39c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef39cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef3a0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ef3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef3a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef3a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef3ac: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ef3acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef3b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef3b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef3b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef3bc: 0xa043013c  sb          $v1, 0x13C($v0)
    ctx->pc = 0x2ef3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef3c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef3c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef3c8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ef3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef3cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef3d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef3d4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ef3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef3d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef3dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef3e0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ef3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef3e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef3e8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ef3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef3ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EF3ECu;
    SET_GPR_U32(ctx, 31, 0x2EF3F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EF3ECu, 0x2EF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF3F4u;
label_2ef3f4:
    // 0x2ef3f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef3f8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ef3f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ef3fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef400: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ef400u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef404: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ef404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ef408: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ef408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ef40c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF40Cu;
    {
        const bool branch_taken_0x2ef40c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ef40c) {
            ctx->pc = 0x2EF420u;
            goto label_2ef420;
        }
    }
    ctx->pc = 0x2EF414u;
    // 0x2ef414: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ef414u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef418: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EF418u;
    {
        const bool branch_taken_0x2ef418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef418) {
            ctx->pc = 0x2EF448u;
            goto label_2ef448;
        }
    }
    ctx->pc = 0x2EF420u;
label_2ef420:
    // 0x2ef420: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef424: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ef424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef428: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef42c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ef42cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef430: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x2ef430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x2ef434: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2ef434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2ef438: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x2ef438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ef43c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ef43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ef440: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x2ef440u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ef444: 0x32d1ffff  andi        $s1, $s6, 0xFFFF
    ctx->pc = 0x2ef444u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_2ef448:
    // 0x2ef448: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ef448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ef44c: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x2ef44cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ef450: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2ef450u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef454: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2EF454u;
    {
        const bool branch_taken_0x2ef454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef454) {
            ctx->pc = 0x2EF594u;
            goto label_2ef594;
        }
    }
    ctx->pc = 0x2EF45Cu;
label_2ef45c:
    // 0x2ef45c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2ef45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ef460: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2ef460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ef464: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ef464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ef468: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ef468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ef46c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef470: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ef470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef474: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ef474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ef478: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ef478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ef47c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ef47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ef480: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ef480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ef484: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ef484u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ef488: 0x24042a09  addiu       $a0, $zero, 0x2A09
    ctx->pc = 0x2ef488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10761));
    // 0x2ef48c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ef48cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef490: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2ef490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ef494: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EF494u;
    SET_GPR_U32(ctx, 31, 0x2EF49Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EF494u, 0x2EF49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF49Cu;
label_2ef49c:
    // 0x2ef49c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4a0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ef4a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4ac: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2ef4acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4b8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2ef4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4c4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ef4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4d0: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2ef4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4d8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4dc: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ef4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef4e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4ec: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2ef4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef4f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4f8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ef4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef500: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef504: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ef504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef508: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef50c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef50cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef510: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ef510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef514: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef518: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef51c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ef51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef520: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef524: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ef524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef528: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EF528u;
    SET_GPR_U32(ctx, 31, 0x2EF530u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EF528u, 0x2EF530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF530u;
label_2ef530:
    // 0x2ef530: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef534: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ef534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ef538: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef53c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ef53cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef540: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ef540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ef544: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ef544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ef548: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF548u;
    {
        const bool branch_taken_0x2ef548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ef548) {
            ctx->pc = 0x2EF55Cu;
            goto label_2ef55c;
        }
    }
    ctx->pc = 0x2EF550u;
    // 0x2ef550: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2ef550u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef554: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EF554u;
    {
        const bool branch_taken_0x2ef554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef554) {
            ctx->pc = 0x2EF584u;
            goto label_2ef584;
        }
    }
    ctx->pc = 0x2EF55Cu;
label_2ef55c:
    // 0x2ef55c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef560: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ef560u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef564: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x2ef564u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x2ef568: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2ef568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2ef56c: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x2ef56cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ef570: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef574: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ef574u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef578: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x2ef578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ef57c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2ef57cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef580: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2ef580u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ef584:
    // 0x2ef584: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ef584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ef588: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x2ef588u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ef58c: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2ef58cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef590: 0x0  nop
    ctx->pc = 0x2ef590u;
    // NOP
label_2ef594:
    // 0x2ef594: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ef594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ef598: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ef598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ef59c: 0x12030051  beq         $s0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2EF59Cu;
    {
        const bool branch_taken_0x2ef59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef59c) {
            ctx->pc = 0x2EF6E4u;
            goto label_2ef6e4;
        }
    }
    ctx->pc = 0x2EF5A4u;
    // 0x2ef5a4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2ef5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ef5a8: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x2ef5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef5ac: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2ef5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2ef5b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef5b4: 0x0  nop
    ctx->pc = 0x2ef5b4u;
    // NOP
    // 0x2ef5b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ef5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ef5bc: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2ef5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2ef5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef5c4: 0x0  nop
    ctx->pc = 0x2ef5c4u;
    // NOP
    // 0x2ef5c8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ef5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ef5cc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ef5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ef5d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef5d4: 0x0  nop
    ctx->pc = 0x2ef5d4u;
    // NOP
    // 0x2ef5d8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ef5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ef5dc: 0x3c0341a8  lui         $v1, 0x41A8
    ctx->pc = 0x2ef5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16808 << 16));
    // 0x2ef5e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef5e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef5e4: 0x0  nop
    ctx->pc = 0x2ef5e4u;
    // NOP
    // 0x2ef5e8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ef5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ef5ec: 0x3c033f7c  lui         $v1, 0x3F7C
    ctx->pc = 0x2ef5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16252 << 16));
    // 0x2ef5f0: 0x346328f6  ori         $v1, $v1, 0x28F6
    ctx->pc = 0x2ef5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10486);
    // 0x2ef5f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef5f8: 0x0  nop
    ctx->pc = 0x2ef5f8u;
    // NOP
    // 0x2ef5fc: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2ef5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2ef600: 0x3c033f7c  lui         $v1, 0x3F7C
    ctx->pc = 0x2ef600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16252 << 16));
    // 0x2ef604: 0x346328f6  ori         $v1, $v1, 0x28F6
    ctx->pc = 0x2ef604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10486);
    // 0x2ef608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef60c: 0x0  nop
    ctx->pc = 0x2ef60cu;
    // NOP
    // 0x2ef610: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2ef610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2ef614: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x2ef614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x2ef618: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x2ef618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x2ef61c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef620: 0x0  nop
    ctx->pc = 0x2ef620u;
    // NOP
    // 0x2ef624: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2ef624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2ef628: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2ef628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2ef62c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ef62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ef630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef634: 0x0  nop
    ctx->pc = 0x2ef634u;
    // NOP
    // 0x2ef638: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x2ef638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x2ef63c: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2ef63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2ef640: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ef640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ef644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef648: 0x0  nop
    ctx->pc = 0x2ef648u;
    // NOP
    // 0x2ef64c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2ef64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2ef650: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2ef650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2ef654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef658: 0x0  nop
    ctx->pc = 0x2ef658u;
    // NOP
    // 0x2ef65c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ef65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ef660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ef660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef664: 0x0  nop
    ctx->pc = 0x2ef664u;
    // NOP
    // 0x2ef668: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ef668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ef66c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2ef66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2ef670: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef674: 0x0  nop
    ctx->pc = 0x2ef674u;
    // NOP
    // 0x2ef678: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ef678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ef67c: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2ef67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2ef680: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2ef680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2ef684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef688: 0x0  nop
    ctx->pc = 0x2ef688u;
    // NOP
    // 0x2ef68c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ef68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ef690: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2ef690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2ef694: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2ef694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2ef698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef69c: 0x0  nop
    ctx->pc = 0x2ef69cu;
    // NOP
    // 0x2ef6a0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ef6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ef6a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ef6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ef6a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef6a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef6ac: 0x0  nop
    ctx->pc = 0x2ef6acu;
    // NOP
    // 0x2ef6b0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ef6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ef6b4: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x2ef6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
    // 0x2ef6b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ef6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef6bc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ef6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef6c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef6c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef6c4: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x2ef6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x2ef6c8: 0x3c03bc23  lui         $v1, 0xBC23
    ctx->pc = 0x2ef6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
    // 0x2ef6cc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ef6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ef6d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef6d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef6d4: 0x0  nop
    ctx->pc = 0x2ef6d4u;
    // NOP
    // 0x2ef6d8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ef6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ef6dc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2ef6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ef6e0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2ef6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_2ef6e4:
    // 0x2ef6e4: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2ef6e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ef6e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ef6e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ef6ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ef6ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef6f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ef6f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef6f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ef6f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef6f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ef6f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef6fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef704: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2ef704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ef708: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF710u;
}
