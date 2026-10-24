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

// Function: entry_003223c8
// Address: 0x3223c8 - 0x32252c
void entry_003223c8_0x3223c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003223c8_0x3223c8");
#endif

    switch (ctx->pc) {
        case 0x3223ecu: goto label_3223ec;
        case 0x322410u: goto label_322410;
        case 0x322434u: goto label_322434;
        case 0x322468u: goto label_322468;
        case 0x322500u: goto label_322500;
        default: break;
    }

    ctx->pc = 0x3223c8u;

    // 0x3223c8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x3223c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3223cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3223ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3223d0: 0x2442a010  addiu       $v0, $v0, -0x5FF0
    ctx->pc = 0x3223d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x3223d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3223d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3223d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3223d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3223dc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3223dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3223e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3223e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3223e4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3223E4u;
    SET_GPR_U32(ctx, 31, 0x3223ECu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3223E4u, 0x3223ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223ECu;
label_3223ec:
    // 0x3223ec: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3223ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3223f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3223f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3223f4: 0x0  nop
    ctx->pc = 0x3223f4u;
    // NOP
    // 0x3223f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3223f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3223fc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x3223fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322400: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x322400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x322404: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x322404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x322408: 0xc06765c  jal         func_19D970
    ctx->pc = 0x322408u;
    SET_GPR_U32(ctx, 31, 0x322410u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x322408u, 0x322410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322410u;
label_322410:
    // 0x322410: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x322410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x322414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x322414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x322418: 0x0  nop
    ctx->pc = 0x322418u;
    // NOP
    // 0x32241c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32241cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x322420: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x322420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322424: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x322424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x322428: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x322428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x32242c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x32242Cu;
    SET_GPR_U32(ctx, 31, 0x322434u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x32242Cu, 0x322434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322434u;
label_322434:
    // 0x322434: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x322434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x322438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x322438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32243c: 0x0  nop
    ctx->pc = 0x32243cu;
    // NOP
    // 0x322440: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x322440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x322444: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x322444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322448: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x322448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32244c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x32244cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x322450: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x322450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x322454: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x322454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322458: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x322458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32245c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x32245cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322460: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x322460u;
    SET_GPR_U32(ctx, 31, 0x322468u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x322460u, 0x322468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322468u;
label_322468:
    // 0x322468: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32246c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x32246cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x322470: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322474: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322474u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322478: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x322478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x32247c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322480: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322484: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x322484u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x322488: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32248c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32248cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322490: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322494: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x322494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x322498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x322498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32249c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32249cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224a0: 0x8c26a618  lw          $a2, -0x59E8($at)
    ctx->pc = 0x3224a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224a4: 0xa0c2011b  sb          $v0, 0x11B($a2)
    ctx->pc = 0x3224a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 283), (uint8_t)GPR_U32(ctx, 2));
    // 0x3224a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224ac: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3224acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224b0: 0xa080011c  sb          $zero, 0x11C($a0)
    ctx->pc = 0x3224b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3224b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224bc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x3224bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3224c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224c8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x3224c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3224d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224d4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3224d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3224dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224e0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3224e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3224e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224ec: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3224ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224f4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3224f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3224F8u;
    SET_GPR_U32(ctx, 31, 0x322500u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3224F8u, 0x322500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322500u;
label_322500:
    // 0x322500: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322504: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x322504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x322508: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32250c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x32250cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x322510: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x322510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x322514: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x322514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x322518: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322518u;
    {
        const bool branch_taken_0x322518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x322518) {
            ctx->pc = 0x32252Cu;
            return;
        }
    }
    ctx->pc = 0x322520u;
    // 0x322520: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x322520u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322524: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x322524u;
    {
        const bool branch_taken_0x322524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322524) {
            ctx->pc = 0x322550u;
            return;
        }
    }
    ctx->pc = 0x32252Cu;
}
