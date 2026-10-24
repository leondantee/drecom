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

// Function: entry_00346334
// Address: 0x346334 - 0x34648c
void entry_00346334_0x346334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346334_0x346334");
#endif

    switch (ctx->pc) {
        case 0x346344u: goto label_346344;
        case 0x346368u: goto label_346368;
        case 0x3463b8u: goto label_3463b8;
        case 0x3463c8u: goto label_3463c8;
        case 0x3463e0u: goto label_3463e0;
        case 0x3463f4u: goto label_3463f4;
        case 0x34644cu: goto label_34644c;
        default: break;
    }

    ctx->pc = 0x346334u;

    // 0x346334: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346338: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346338u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34633c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34633Cu;
    SET_GPR_U32(ctx, 31, 0x346344u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34633Cu, 0x346344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346344u;
label_346344:
    // 0x346344: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x346344u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x346348: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34634c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34634cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346350: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x346350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346354: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346358: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x346358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x34635c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34635cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346360: 0xc05cd10  jal         func_173440
    ctx->pc = 0x346360u;
    SET_GPR_U32(ctx, 31, 0x346368u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x346360u, 0x346368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346368u;
label_346368:
    // 0x346368: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x346368u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34636c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346370: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346374: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x346374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346378: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34637c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346380: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x346380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x346384: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x346384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x346388: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34638c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346390: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x346390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346394: 0x3c034128  lui         $v1, 0x4128
    ctx->pc = 0x346394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16680 << 16));
    // 0x346398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34639c: 0x0  nop
    ctx->pc = 0x34639cu;
    // NOP
    // 0x3463a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3463a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3463a4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x3463a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3463a8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3463a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3463ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3463acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3463b0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3463B0u;
    SET_GPR_U32(ctx, 31, 0x3463B8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3463B0u, 0x3463B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463B8u;
label_3463b8:
    // 0x3463b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3463b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3463bc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3463bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3463c0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3463C0u;
    SET_GPR_U32(ctx, 31, 0x3463C8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3463C0u, 0x3463C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463C8u;
label_3463c8:
    // 0x3463c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3463c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3463cc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3463ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3463d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3463d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3463d4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x3463d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3463d8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3463D8u;
    SET_GPR_U32(ctx, 31, 0x3463E0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3463E0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3463E0u) { return; }
    ctx->pc = 0x3463E0u;
label_3463e0:
    // 0x3463e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3463e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3463e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3463e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3463e8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x3463e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3463ec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3463ECu;
    SET_GPR_U32(ctx, 31, 0x3463F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3463F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3463F4u) { return; }
    ctx->pc = 0x3463F4u;
label_3463f4:
    // 0x3463f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3463f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3463f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3463f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3463fc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3463fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346400: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346404: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346408: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x346408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34640c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34640cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x346410: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x346410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346414: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x346414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x346418: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x346418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34641c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x34641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346420: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x346420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x346424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346428: 0x0  nop
    ctx->pc = 0x346428u;
    // NOP
    // 0x34642c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34642cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x346430: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x346430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x346434: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x346434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x346438: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x346438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34643c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x34643cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x346440: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x346440u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346444: 0xc059e1c  jal         func_167870
    ctx->pc = 0x346444u;
    SET_GPR_U32(ctx, 31, 0x34644Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x346444u, 0x34644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34644Cu;
label_34644c:
    // 0x34644c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x34644cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x346450: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x346450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x346454: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x346454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x346458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34645c: 0x0  nop
    ctx->pc = 0x34645cu;
    // NOP
    // 0x346460: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x346460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x346464: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x346464u;
    {
        const bool branch_taken_0x346464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x346464) {
            ctx->pc = 0x34648Cu;
            return;
        }
    }
    ctx->pc = 0x34646Cu;
    // 0x34646c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x34646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346470: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x346470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x346474: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x346474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346478: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34647c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346480: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x346480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x346484: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x346484u;
    {
        const bool branch_taken_0x346484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346484) {
            ctx->pc = 0x3464A4u;
            return;
        }
    }
    ctx->pc = 0x34648Cu;
}
