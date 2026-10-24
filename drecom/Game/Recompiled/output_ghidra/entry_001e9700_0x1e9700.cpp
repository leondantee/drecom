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

// Function: entry_001e9700
// Address: 0x1e9700 - 0x1e9788
void entry_001e9700_0x1e9700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9700_0x1e9700");
#endif

    switch (ctx->pc) {
        case 0x1e9718u: goto label_1e9718;
        case 0x1e9728u: goto label_1e9728;
        case 0x1e9778u: goto label_1e9778;
        case 0x1e9784u: goto label_1e9784;
        default: break;
    }

    ctx->pc = 0x1e9700u;

    // 0x1e9700: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9704: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9708: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1e9708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e970c: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x1e970cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x1e9710: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x1E9710u;
    SET_GPR_U32(ctx, 31, 0x1E9718u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x1E9710u, 0x1E9718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9718u;
label_1e9718:
    // 0x1e9718: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9718u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e971c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e9720: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E9720u;
    SET_GPR_U32(ctx, 31, 0x1E9728u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E9728u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E9728u) { return; }
    ctx->pc = 0x1E9728u;
label_1e9728:
    // 0x1e9728: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9728u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e972c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9730: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x1e9730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9734: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1e9734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1e9738: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e973c: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x1e973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9740: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1e9740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1e9744: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9748: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x1e9748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e974c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1e974cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1e9750: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e9750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e9754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9758: 0x0  nop
    ctx->pc = 0x1e9758u;
    // NOP
    // 0x1e975c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1e975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1e9760: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x1e9760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x1e9764: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e9764u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9768: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1e9768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e976c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e976cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9770: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E9770u;
    SET_GPR_U32(ctx, 31, 0x1E9778u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E9770u, 0x1E9778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9778u;
label_1e9778:
    // 0x1e9778: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e9778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e977c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E977Cu;
    SET_GPR_U32(ctx, 31, 0x1E9784u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E977Cu, 0x1E9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9784u;
label_1e9784:
    // 0x1e9784: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e9784u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e9788u;
}
