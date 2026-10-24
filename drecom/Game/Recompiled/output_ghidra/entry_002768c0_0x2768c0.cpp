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

// Function: entry_002768c0
// Address: 0x2768c0 - 0x276a38
void entry_002768c0_0x2768c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002768c0_0x2768c0");
#endif

    switch (ctx->pc) {
        case 0x2768c8u: goto label_2768c8;
        case 0x2768f4u: goto label_2768f4;
        case 0x27691cu: goto label_27691c;
        case 0x276968u: goto label_276968;
        case 0x276a0cu: goto label_276a0c;
        default: break;
    }

    ctx->pc = 0x2768c0u;

    // 0x2768c0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2768C0u;
    SET_GPR_U32(ctx, 31, 0x2768C8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2768C0u, 0x2768C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2768C8u;
label_2768c8:
    // 0x2768c8: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x2768c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x2768cc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2768ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2768d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2768d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2768d4: 0x0  nop
    ctx->pc = 0x2768d4u;
    // NOP
    // 0x2768d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2768d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2768dc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2768dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2768e0: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x2768e0u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2768e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2768e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2768e8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2768e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2768ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2768ECu;
    SET_GPR_U32(ctx, 31, 0x2768F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2768ECu, 0x2768F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2768F4u;
label_2768f4:
    // 0x2768f4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2768f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2768f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2768f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2768fc: 0x0  nop
    ctx->pc = 0x2768fcu;
    // NOP
    // 0x276900: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276904: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x276908: 0xc420d2c4  lwc1        $f0, -0x2D3C($at)
    ctx->pc = 0x276908u;
    { uint32_t bits = FAST_READ32(0x38D2C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27690c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27690cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276910: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x276910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x276914: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276914u;
    SET_GPR_U32(ctx, 31, 0x27691Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276914u, 0x27691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27691Cu;
label_27691c:
    // 0x27691c: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x27691cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x276920: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x276920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x276924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276928: 0x0  nop
    ctx->pc = 0x276928u;
    // NOP
    // 0x27692c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27692cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276930: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x276934: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x276934u;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27693c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x27693cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x276940: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x276940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x276944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276948: 0x0  nop
    ctx->pc = 0x276948u;
    // NOP
    // 0x27694c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x27694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x276950: 0x24040b05  addiu       $a0, $zero, 0xB05
    ctx->pc = 0x276950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2821));
    // 0x276954: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276954u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276958: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x276958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27695c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27695cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276960: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276960u;
    SET_GPR_U32(ctx, 31, 0x276968u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276960u, 0x276968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276968u;
label_276968:
    // 0x276968: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x27696c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x27696cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x276970: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x276970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276974: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276978: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276978u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x27697c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x27697cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x276980: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276984: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276988: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x276988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x27698c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x27698cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x276990: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x276990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x276994: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x276994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x276998: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27699c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x27699cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769a0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2769a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769a4: 0xa082011a  sb          $v0, 0x11A($a0)
    ctx->pc = 0x2769a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x2769a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769b0: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2769b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769b8: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2769b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769bc: 0xa060011c  sb          $zero, 0x11C($v1)
    ctx->pc = 0x2769bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769c8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2769c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769d4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2769d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769e0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2769e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769ec: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2769ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769f8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2769f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276a00: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x276a00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x276a04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276A04u;
    SET_GPR_U32(ctx, 31, 0x276A0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276A04u, 0x276A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A0Cu;
label_276a0c:
    // 0x276a0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276a10: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x276a10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x276a14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276a18: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x276a18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x276a1c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x276a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x276a20: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x276a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x276a24: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276A24u;
    {
        const bool branch_taken_0x276a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276a24) {
            ctx->pc = 0x276A38u;
            return;
        }
    }
    ctx->pc = 0x276A2Cu;
    // 0x276a2c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x276a2cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276a30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x276A30u;
    {
        const bool branch_taken_0x276a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276a30) {
            ctx->pc = 0x276A58u;
            return;
        }
    }
    ctx->pc = 0x276A38u;
}
