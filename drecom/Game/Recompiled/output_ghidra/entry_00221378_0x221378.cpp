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

// Function: entry_00221378
// Address: 0x221378 - 0x22147c
void entry_00221378_0x221378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221378_0x221378");
#endif

    switch (ctx->pc) {
        case 0x2213e8u: goto label_2213e8;
        case 0x2213f4u: goto label_2213f4;
        case 0x221430u: goto label_221430;
        case 0x22143cu: goto label_22143c;
        case 0x22146cu: goto label_22146c;
        default: break;
    }

    ctx->pc = 0x221378u;

    // 0x221378: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x22137c: 0x94a311f4  lhu         $v1, 0x11F4($a1)
    ctx->pc = 0x22137cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4596)));
    // 0x221380: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x221380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x221384: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x221384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221388: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x221388u;
    {
        const bool branch_taken_0x221388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221388) {
            ctx->pc = 0x22147Cu;
            return;
        }
    }
    ctx->pc = 0x221390u;
    // 0x221390: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221394: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221398: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x221398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x22139c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2213a0: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x2213a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2213a4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2213a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2213a8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2213a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2213ac: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x2213acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2213b0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2213b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2213b4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2213b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2213b8: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x2213b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2213bc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2213bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2213c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2213c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2213c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2213c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2213c8: 0x0  nop
    ctx->pc = 0x2213c8u;
    // NOP
    // 0x2213cc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2213ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2213d0: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x2213d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x2213d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2213d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2213d8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2213d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2213dc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2213dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2213e0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2213E0u;
    SET_GPR_U32(ctx, 31, 0x2213E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2213E0u, 0x2213E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213E8u;
label_2213e8:
    // 0x2213e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2213e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2213ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2213ECu;
    SET_GPR_U32(ctx, 31, 0x2213F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2213ECu, 0x2213F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213F4u;
label_2213f4:
    // 0x2213f4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2213f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2213f8: 0xc4811204  lwc1        $f1, 0x1204($a0)
    ctx->pc = 0x2213f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2213fc: 0x3c0641a0  lui         $a2, 0x41A0
    ctx->pc = 0x2213fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16800 << 16));
    // 0x221400: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x221400u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221404: 0x0  nop
    ctx->pc = 0x221404u;
    // NOP
    // 0x221408: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x221408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22140c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x22140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x221410: 0x2402050c  addiu       $v0, $zero, 0x50C
    ctx->pc = 0x221410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x221414: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x221418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22141c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x22141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x221420: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x221420u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221424: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x221424u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221428: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x221428u;
    SET_GPR_U32(ctx, 31, 0x221430u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x221428u, 0x221430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221430u;
label_221430:
    // 0x221430: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221434: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x221434u;
    SET_GPR_U32(ctx, 31, 0x22143Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x221434u, 0x22143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22143Cu;
label_22143c:
    // 0x22143c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22143cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221440: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221444: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x221444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x221448: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x221448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x22144c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22144cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221450: 0x2406051f  addiu       $a2, $zero, 0x51F
    ctx->pc = 0x221450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x221454: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x221454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x221458: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x221458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22145c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22145cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221460: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x221460u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221464: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x221464u;
    SET_GPR_U32(ctx, 31, 0x22146Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x221464u, 0x22146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22146Cu;
label_22146c:
    // 0x22146c: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x22146cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221470: 0xa0c011ee  sb          $zero, 0x11EE($a2)
    ctx->pc = 0x221470u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x221474: 0x10000255  b           . + 4 + (0x255 << 2)
    ctx->pc = 0x221474u;
    {
        const bool branch_taken_0x221474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221474) {
            ctx->pc = 0x221DCCu;
            return;
        }
    }
    ctx->pc = 0x22147Cu;
}
