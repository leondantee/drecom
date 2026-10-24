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

// Function: entry_0021f118
// Address: 0x21f118 - 0x21f220
void entry_0021f118_0x21f118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f118_0x21f118");
#endif

    switch (ctx->pc) {
        case 0x21f134u: goto label_21f134;
        case 0x21f148u: goto label_21f148;
        case 0x21f160u: goto label_21f160;
        case 0x21f1f4u: goto label_21f1f4;
        default: break;
    }

    ctx->pc = 0x21f118u;

    // 0x21f118: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x21f118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x21f11c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21f11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21f120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21f120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f124: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21f124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f128: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x21f128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21f12c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21F12Cu;
    SET_GPR_U32(ctx, 31, 0x21F134u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21F134u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F134u) { return; }
    ctx->pc = 0x21F134u;
label_21f134:
    // 0x21f134: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x21f134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f138: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21f138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21f13c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x21f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f140: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21F140u;
    SET_GPR_U32(ctx, 31, 0x21F148u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21F148u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F148u) { return; }
    ctx->pc = 0x21F148u;
label_21f148:
    // 0x21f148: 0x24043001  addiu       $a0, $zero, 0x3001
    ctx->pc = 0x21f148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x21f14c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21f14cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f150: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x21f150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f154: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21f154u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f158: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21F158u;
    SET_GPR_U32(ctx, 31, 0x21F160u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21F158u, 0x21F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F160u;
label_21f160:
    // 0x21f160: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f164: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21f164u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21f168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f16c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f170: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f174: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x21f174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x21f178: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f17c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f180: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21f180u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f184: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f188: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f188u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f18c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21f18cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f190: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f194: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f198: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21f198u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f19c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1a4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21f1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1b0: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21f1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1bc: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21f1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1c8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21f1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1d4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21f1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1e0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21f1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1e8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21F1ECu;
    SET_GPR_U32(ctx, 31, 0x21F1F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21F1ECu, 0x21F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1F4u;
label_21f1f4:
    // 0x21f1f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1f8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21f1f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21f1fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f200: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21f200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f204: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f208: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f20c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F20Cu;
    {
        const bool branch_taken_0x21f20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21f20c) {
            ctx->pc = 0x21F220u;
            return;
        }
    }
    ctx->pc = 0x21F214u;
    // 0x21f214: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21f214u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f218: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21F218u;
    {
        const bool branch_taken_0x21f218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f218) {
            ctx->pc = 0x21F23Cu;
            return;
        }
    }
    ctx->pc = 0x21F220u;
}
