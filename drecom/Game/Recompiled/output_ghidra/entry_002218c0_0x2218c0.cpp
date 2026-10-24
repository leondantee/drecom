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

// Function: entry_002218c0
// Address: 0x2218c0 - 0x221944
void entry_002218c0_0x2218c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002218c0_0x2218c0");
#endif

    switch (ctx->pc) {
        case 0x2218d8u: goto label_2218d8;
        case 0x2218e8u: goto label_2218e8;
        case 0x221938u: goto label_221938;
        default: break;
    }

    ctx->pc = 0x2218c0u;

    // 0x2218c0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2218c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2218c4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2218c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2218c8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2218c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2218cc: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x2218ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x2218d0: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2218D0u;
    SET_GPR_U32(ctx, 31, 0x2218D8u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2218D0u, 0x2218D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218D8u;
label_2218d8:
    // 0x2218d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2218d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2218dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2218dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2218e0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2218E0u;
    SET_GPR_U32(ctx, 31, 0x2218E8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2218E8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2218E8u) { return; }
    ctx->pc = 0x2218E8u;
label_2218e8:
    // 0x2218e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2218e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2218ec: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2218ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2218f0: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x2218f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2218f4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2218f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2218f8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2218f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2218fc: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x2218fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221900: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x221900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x221904: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221908: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x221908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22190c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x22190cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x221910: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x221910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x221914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221918: 0x0  nop
    ctx->pc = 0x221918u;
    // NOP
    // 0x22191c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x22191cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x221920: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x221920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x221924: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x221924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221928: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x221928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x22192c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x22192cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221930: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x221930u;
    SET_GPR_U32(ctx, 31, 0x221938u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x221930u, 0x221938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221938u;
label_221938:
    // 0x221938: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221938u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22193c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x22193Cu;
    SET_GPR_U32(ctx, 31, 0x221944u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x22193Cu, 0x221944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221944u;
}
