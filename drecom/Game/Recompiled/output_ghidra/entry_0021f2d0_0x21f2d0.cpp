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

// Function: entry_0021f2d0
// Address: 0x21f2d0 - 0x21f3d4
void entry_0021f2d0_0x21f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f2d0_0x21f2d0");
#endif

    switch (ctx->pc) {
        case 0x21f2ecu: goto label_21f2ec;
        case 0x21f300u: goto label_21f300;
        case 0x21f318u: goto label_21f318;
        case 0x21f3a8u: goto label_21f3a8;
        default: break;
    }

    ctx->pc = 0x21f2d0u;

    // 0x21f2d0: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x21f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x21f2d4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x21f2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x21f2d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21f2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f2dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21f2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f2e0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x21f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21f2e4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21F2E4u;
    SET_GPR_U32(ctx, 31, 0x21F2ECu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21F2ECu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F2ECu) { return; }
    ctx->pc = 0x21F2ECu;
label_21f2ec:
    // 0x21f2ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x21f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f2f0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21f2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21f2f4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x21f2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f2f8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21F2F8u;
    SET_GPR_U32(ctx, 31, 0x21F300u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21F300u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F300u) { return; }
    ctx->pc = 0x21F300u;
label_21f300:
    // 0x21f300: 0x24043001  addiu       $a0, $zero, 0x3001
    ctx->pc = 0x21f300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x21f304: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21f304u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f308: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x21f308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f30c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21f30cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f310: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21F310u;
    SET_GPR_U32(ctx, 31, 0x21F318u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21F310u, 0x21F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F318u;
label_21f318:
    // 0x21f318: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f31c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21f31cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21f320: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f324: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f328: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21f328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f32c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f330: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f330u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f334: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21f334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f338: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f33c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f340: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21f340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f344: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f348: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f34c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21f34cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f350: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f354: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f358: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21f358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f35c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f360: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f360u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f364: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21f364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f368: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f36c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f370: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21f370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f374: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f378: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f378u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f37c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21f37cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f380: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f384: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f388: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21f388u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f38c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f390: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f390u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f394: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21f394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f398: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f39c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f3a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21F3A0u;
    SET_GPR_U32(ctx, 31, 0x21F3A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21F3A0u, 0x21F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3A8u;
label_21f3a8:
    // 0x21f3a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f3ac: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21f3acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21f3b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f3b4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f3b8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f3bc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f3c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F3C0u;
    {
        const bool branch_taken_0x21f3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21f3c0) {
            ctx->pc = 0x21F3D4u;
            return;
        }
    }
    ctx->pc = 0x21F3C8u;
    // 0x21f3c8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21f3c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f3cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21F3CCu;
    {
        const bool branch_taken_0x21f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f3cc) {
            ctx->pc = 0x21F3F8u;
            return;
        }
    }
    ctx->pc = 0x21F3D4u;
}
