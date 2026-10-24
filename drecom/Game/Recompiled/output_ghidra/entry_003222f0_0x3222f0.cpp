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

// Function: entry_003222f0
// Address: 0x3222f0 - 0x3223c8
void entry_003222f0_0x3222f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003222f0_0x3222f0");
#endif

    switch (ctx->pc) {
        case 0x322374u: goto label_322374;
        case 0x322380u: goto label_322380;
        case 0x3223a4u: goto label_3223a4;
        case 0x3223b8u: goto label_3223b8;
        case 0x3223c4u: goto label_3223c4;
        default: break;
    }

    ctx->pc = 0x3222f0u;

    // 0x3222f0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3222f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3222f4: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x3222f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x3222f8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3222f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x3222fc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x3222fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x322300: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x322300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322304: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x322304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x322308: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x322308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x32230c: 0x1202002e  beq         $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x32230Cu;
    {
        const bool branch_taken_0x32230c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x32230c) {
            ctx->pc = 0x3223C8u;
            return;
        }
    }
    ctx->pc = 0x322314u;
    // 0x322314: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x322314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x322318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32231c: 0x0  nop
    ctx->pc = 0x32231cu;
    // NOP
    // 0x322320: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x322320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x322324: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x322324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x322328: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x322328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x32232c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x32232cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x322330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322334: 0x0  nop
    ctx->pc = 0x322334u;
    // NOP
    // 0x322338: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x322338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x32233c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x32233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x322340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322344: 0x0  nop
    ctx->pc = 0x322344u;
    // NOP
    // 0x322348: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x322348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x32234c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x32234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x322350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322354: 0x0  nop
    ctx->pc = 0x322354u;
    // NOP
    // 0x322358: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x322358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x32235c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x32235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x322360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322364: 0x0  nop
    ctx->pc = 0x322364u;
    // NOP
    // 0x322368: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x322368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x32236c: 0xc067648  jal         func_19D920
    ctx->pc = 0x32236Cu;
    SET_GPR_U32(ctx, 31, 0x322374u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x32236Cu, 0x322374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322374u;
label_322374:
    // 0x322374: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x322374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x322378: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x322378u;
    SET_GPR_U32(ctx, 31, 0x322380u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x322378u, 0x322380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322380u;
label_322380:
    // 0x322380: 0x3c033fd3  lui         $v1, 0x3FD3
    ctx->pc = 0x322380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16339 << 16));
    // 0x322384: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x322384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x322388: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x322388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32238c: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x32238cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x322390: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x322390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x322394: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x322394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x322398: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x322398u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32239c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x32239Cu;
    SET_GPR_U32(ctx, 31, 0x3223A4u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x32239Cu, 0x3223A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223A4u;
label_3223a4:
    // 0x3223a4: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x3223a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x3223a8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3223a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3223ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3223acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3223b0: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x3223B0u;
    SET_GPR_U32(ctx, 31, 0x3223B8u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x3223B0u, 0x3223B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223B8u;
label_3223b8:
    // 0x3223b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3223b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3223bc: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x3223BCu;
    SET_GPR_U32(ctx, 31, 0x3223C4u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x3223BCu, 0x3223C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223C4u;
label_3223c4:
    // 0x3223c4: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3223c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    ctx->pc = 0x3223c8u;
}
