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

// Function: entry_0021eee8
// Address: 0x21eee8 - 0x21f068
void entry_0021eee8_0x21eee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021eee8_0x21eee8");
#endif

    switch (ctx->pc) {
        case 0x21ef7cu: goto label_21ef7c;
        case 0x21ef90u: goto label_21ef90;
        case 0x21efa8u: goto label_21efa8;
        case 0x21f03cu: goto label_21f03c;
        default: break;
    }

    ctx->pc = 0x21eee8u;

    // 0x21eee8: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x21eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x21eeec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21eeecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21eef0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x21eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eef4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21eef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21eef8: 0x0  nop
    ctx->pc = 0x21eef8u;
    // NOP
    // 0x21eefc: 0x450001d5  bc1f        . + 4 + (0x1D5 << 2)
    ctx->pc = 0x21EEFCu;
    {
        const bool branch_taken_0x21eefc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21eefc) {
            ctx->pc = 0x21F654u;
            return;
        }
    }
    ctx->pc = 0x21EF04u;
    // 0x21ef04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x21ef04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x21ef08: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x21ef08u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ef0c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x21ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21ef10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ef14: 0x0  nop
    ctx->pc = 0x21ef14u;
    // NOP
    // 0x21ef18: 0x450101ce  bc1t        . + 4 + (0x1CE << 2)
    ctx->pc = 0x21EF18u;
    {
        const bool branch_taken_0x21ef18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ef18) {
            ctx->pc = 0x21F654u;
            return;
        }
    }
    ctx->pc = 0x21EF20u;
    // 0x21ef20: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x21ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x21ef24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21ef24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ef28: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x21ef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21ef2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21ef30: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x21ef30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x21ef34: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x21ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x21ef38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21ef38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ef3c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x21ef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21ef40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21ef44: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x21ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x21ef48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ef48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ef4c: 0x0  nop
    ctx->pc = 0x21ef4cu;
    // NOP
    // 0x21ef50: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21ef50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21ef54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ef54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ef58: 0x0  nop
    ctx->pc = 0x21ef58u;
    // NOP
    // 0x21ef5c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x21ef5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x21ef60: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x21ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x21ef64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21ef64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21ef68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21ef68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21ef6c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21ef70: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x21ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21ef74: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21EF74u;
    SET_GPR_U32(ctx, 31, 0x21EF7Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21EF7Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21EF7Cu) { return; }
    ctx->pc = 0x21EF7Cu;
label_21ef7c:
    // 0x21ef7c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x21ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21ef80: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21ef84: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x21ef84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21ef88: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21EF88u;
    SET_GPR_U32(ctx, 31, 0x21EF90u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21EF90u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21EF90u) { return; }
    ctx->pc = 0x21EF90u;
label_21ef90:
    // 0x21ef90: 0x24043001  addiu       $a0, $zero, 0x3001
    ctx->pc = 0x21ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x21ef94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21ef94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ef98: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x21ef98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21ef9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21ef9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21efa0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21EFA0u;
    SET_GPR_U32(ctx, 31, 0x21EFA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21EFA0u, 0x21EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFA8u;
label_21efa8:
    // 0x21efa8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efac: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21efacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21efb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21efb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efb8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21efbc: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x21efbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x21efc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efc4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21efc8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21efc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21efcc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efd0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21efd4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21efd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21efd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efdc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21efe0: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21efe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21efe4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efe8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21efec: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21efecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21eff0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21eff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21eff4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21eff8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21eff8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21effc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21effcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f000: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f004: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21f004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f008: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f00c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f010: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21f010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f014: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f018: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f01c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21f01cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f020: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f024: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f028: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21f028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f02c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f030: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21f030u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f034: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21F034u;
    SET_GPR_U32(ctx, 31, 0x21F03Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21F034u, 0x21F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F03Cu;
label_21f03c:
    // 0x21f03c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f040: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21f040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21f044: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f048: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21f048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f04c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f050: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f054: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F054u;
    {
        const bool branch_taken_0x21f054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21f054) {
            ctx->pc = 0x21F068u;
            return;
        }
    }
    ctx->pc = 0x21F05Cu;
    // 0x21f05c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21f05cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21F060u;
    {
        const bool branch_taken_0x21f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f060) {
            ctx->pc = 0x21F084u;
            return;
        }
    }
    ctx->pc = 0x21F068u;
}
