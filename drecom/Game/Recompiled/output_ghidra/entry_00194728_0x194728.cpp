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

// Function: entry_00194728
// Address: 0x194728 - 0x1947e8
void entry_00194728_0x194728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194728_0x194728");
#endif

    switch (ctx->pc) {
        case 0x194748u: goto label_194748;
        case 0x194760u: goto label_194760;
        case 0x19477cu: goto label_19477c;
        case 0x194790u: goto label_194790;
        case 0x1947acu: goto label_1947ac;
        default: break;
    }

    ctx->pc = 0x194728u;

    // 0x194728: 0xafb500c0  sw          $s5, 0xC0($sp)
    ctx->pc = 0x194728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 21));
    // 0x19472c: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x19472cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x194730: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x194730u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x194734: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x194734u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x194738: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x194738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x19473c: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x19473cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x194740: 0xc0d889c  jal         func_362270
    ctx->pc = 0x194740u;
    SET_GPR_U32(ctx, 31, 0x194748u);
    ctx->pc = 0x362270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362270u, 0x194740u, 0x194748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194748u;
label_194748:
    // 0x194748: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x194748u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19474c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x19474cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194750: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x194750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x194754: 0x26c60480  addiu       $a2, $s6, 0x480
    ctx->pc = 0x194754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 1152));
    // 0x194758: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x194758u;
    SET_GPR_U32(ctx, 31, 0x194760u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x194760u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x194760u) { return; }
    ctx->pc = 0x194760u;
label_194760:
    // 0x194760: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x194760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194764: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x194764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x194768: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x194768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x19476c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x19476cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194770: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x194770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194774: 0xc040c60  jal         func_103180
    ctx->pc = 0x194774u;
    SET_GPR_U32(ctx, 31, 0x19477Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x19477Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19477Cu) { return; }
    ctx->pc = 0x19477Cu;
label_19477c:
    // 0x19477c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x19477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194780: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x194780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x194784: 0x26c60490  addiu       $a2, $s6, 0x490
    ctx->pc = 0x194784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 1168));
    // 0x194788: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x194788u;
    SET_GPR_U32(ctx, 31, 0x194790u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x194790u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x194790u) { return; }
    ctx->pc = 0x194790u;
label_194790:
    // 0x194790: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x194790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194794: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x194794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x194798: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x194798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x19479c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x19479cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1947a0: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x1947a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1947a4: 0xc040c60  jal         func_103180
    ctx->pc = 0x1947A4u;
    SET_GPR_U32(ctx, 31, 0x1947ACu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1947ACu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1947ACu) { return; }
    ctx->pc = 0x1947ACu;
label_1947ac:
    // 0x1947ac: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1947acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1947b0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1947b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1947b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1947b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1947b8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1947b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1947bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1947bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1947c0: 0x0  nop
    ctx->pc = 0x1947c0u;
    // NOP
    // 0x1947c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1947C4u;
    {
        const bool branch_taken_0x1947c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1947c4) {
            ctx->pc = 0x1947E8u;
            return;
        }
    }
    ctx->pc = 0x1947CCu;
    // 0x1947cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1947ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1947d0: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x1947d0u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1947d4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1947d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1947d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1947d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1947dc: 0x0  nop
    ctx->pc = 0x1947dcu;
    // NOP
    // 0x1947e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1947E0u;
    {
        const bool branch_taken_0x1947e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1947e0) {
            ctx->pc = 0x1947F0u;
            return;
        }
    }
    ctx->pc = 0x1947E8u;
}
