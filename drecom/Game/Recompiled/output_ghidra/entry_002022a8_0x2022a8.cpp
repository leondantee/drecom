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

// Function: entry_002022a8
// Address: 0x2022a8 - 0x2023b8
void entry_002022a8_0x2022a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002022a8_0x2022a8");
#endif

    switch (ctx->pc) {
        case 0x2022b8u: goto label_2022b8;
        case 0x2022c8u: goto label_2022c8;
        case 0x2022d4u: goto label_2022d4;
        case 0x2022f4u: goto label_2022f4;
        case 0x20231cu: goto label_20231c;
        case 0x202340u: goto label_202340;
        case 0x202350u: goto label_202350;
        case 0x20235cu: goto label_20235c;
        default: break;
    }

    ctx->pc = 0x2022a8u;

    // 0x2022a8: 0xc4c0482c  lwc1        $f0, 0x482C($a2)
    ctx->pc = 0x2022a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022ac: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2022acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2022b0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2022B0u;
    SET_GPR_U32(ctx, 31, 0x2022B8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2022B0u, 0x2022B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022B8u;
label_2022b8:
    // 0x2022b8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2022b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2022bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2022bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2022c0: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x2022C0u;
    SET_GPR_U32(ctx, 31, 0x2022C8u);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x2022C0u, 0x2022C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022C8u;
label_2022c8:
    // 0x2022c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2022c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2022cc: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x2022CCu;
    SET_GPR_U32(ctx, 31, 0x2022D4u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x2022CCu, 0x2022D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022D4u;
label_2022d4:
    // 0x2022d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2022d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2022d8: 0xc4414858  lwc1        $f1, 0x4858($v0)
    ctx->pc = 0x2022d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2022dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2022dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2022e0: 0xe4404858  swc1        $f0, 0x4858($v0)
    ctx->pc = 0x2022e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18520), bits); }
    // 0x2022e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2022e8: 0x8c444834  lw          $a0, 0x4834($v0)
    ctx->pc = 0x2022e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18484)));
    // 0x2022ec: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x2022ECu;
    SET_GPR_U32(ctx, 31, 0x2022F4u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2022ECu, 0x2022F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022F4u;
label_2022f4:
    // 0x2022f4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2022f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2022f8: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2022f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2022fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2022fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x202300: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x202300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x202304: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202308: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x202308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20230c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20230cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202310: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x202310u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x202314: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x202314u;
    SET_GPR_U32(ctx, 31, 0x20231Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x202314u, 0x20231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20231Cu;
label_20231c:
    // 0x20231c: 0x3c034009  lui         $v1, 0x4009
    ctx->pc = 0x20231cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16393 << 16));
    // 0x202320: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x202320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x202324: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x202324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202328: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x202328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
    // 0x20232c: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x20232cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
    // 0x202330: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x202330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x202334: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x202334u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202338: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x202338u;
    SET_GPR_U32(ctx, 31, 0x202340u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x202338u, 0x202340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202340u;
label_202340:
    // 0x202340: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x202340u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x202344: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x202344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202348: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x202348u;
    SET_GPR_U32(ctx, 31, 0x202350u);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x202348u, 0x202350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202350u;
label_202350:
    // 0x202350: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x202350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202354: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x202354u;
    SET_GPR_U32(ctx, 31, 0x20235Cu);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x202354u, 0x20235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20235Cu;
label_20235c:
    // 0x20235c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202360: 0xac624838  sw          $v0, 0x4838($v1)
    ctx->pc = 0x202360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18488), GPR_U32(ctx, 2));
    // 0x202364: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x202364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202368: 0x8c834844  lw          $v1, 0x4844($a0)
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18500)));
    // 0x20236c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20236cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202370: 0xac834844  sw          $v1, 0x4844($a0)
    ctx->pc = 0x202370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18500), GPR_U32(ctx, 3));
    // 0x202374: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202378: 0xc4614830  lwc1        $f1, 0x4830($v1)
    ctx->pc = 0x202378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20237c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20237cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202380: 0x0  nop
    ctx->pc = 0x202380u;
    // NOP
    // 0x202384: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x202384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202388: 0x0  nop
    ctx->pc = 0x202388u;
    // NOP
    // 0x20238c: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x20238Cu;
    {
        const bool branch_taken_0x20238c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20238c) {
            ctx->pc = 0x20240Cu;
            return;
        }
    }
    ctx->pc = 0x202394u;
    // 0x202394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202398: 0x8c634844  lw          $v1, 0x4844($v1)
    ctx->pc = 0x202398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18500)));
    // 0x20239c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20239Cu;
    {
        const bool branch_taken_0x20239c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x20239c) {
            ctx->pc = 0x2023B8u;
            return;
        }
    }
    ctx->pc = 0x2023A4u;
    // 0x2023a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2023a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2023a8: 0x0  nop
    ctx->pc = 0x2023a8u;
    // NOP
    // 0x2023ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2023acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2023b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2023B0u;
    {
        const bool branch_taken_0x2023b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2023b0) {
            ctx->pc = 0x2023D4u;
            return;
        }
    }
    ctx->pc = 0x2023B8u;
}
