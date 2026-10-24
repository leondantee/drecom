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

// Function: entry_00202154
// Address: 0x202154 - 0x202210
void entry_00202154_0x202154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202154_0x202154");
#endif

    switch (ctx->pc) {
        case 0x202164u: goto label_202164;
        case 0x202174u: goto label_202174;
        case 0x202180u: goto label_202180;
        default: break;
    }

    ctx->pc = 0x202154u;

    // 0x202154: 0xc4c04830  lwc1        $f0, 0x4830($a2)
    ctx->pc = 0x202154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202158: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x202158u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20215c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x20215Cu;
    SET_GPR_U32(ctx, 31, 0x202164u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x20215Cu, 0x202164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202164u;
label_202164:
    // 0x202164: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x202164u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x202168: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x202168u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20216c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x20216Cu;
    SET_GPR_U32(ctx, 31, 0x202174u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x20216Cu, 0x202174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202174u;
label_202174:
    // 0x202174: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x202174u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202178: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x202178u;
    SET_GPR_U32(ctx, 31, 0x202180u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x202178u, 0x202180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202180u;
label_202180:
    // 0x202180: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202184: 0xe4404854  swc1        $f0, 0x4854($v0)
    ctx->pc = 0x202184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18516), bits); }
    // 0x202188: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x202188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x20218c: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x20218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202190: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x202190u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x202194: 0x3c024843  lui         $v0, 0x4843
    ctx->pc = 0x202194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18499 << 16));
    // 0x202198: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x202198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x20219c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20219cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2021a0: 0x0  nop
    ctx->pc = 0x2021a0u;
    // NOP
    // 0x2021a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2021a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2021a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2021a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021ac: 0xe4404858  swc1        $f0, 0x4858($v0)
    ctx->pc = 0x2021acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18520), bits); }
    // 0x2021b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2021b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021b4: 0x8c424840  lw          $v0, 0x4840($v0)
    ctx->pc = 0x2021b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18496)));
    // 0x2021b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2021b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2021bc: 0x0  nop
    ctx->pc = 0x2021bcu;
    // NOP
    // 0x2021c0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2021c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2021c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2021c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2021cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2021ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2021d0: 0xc4604850  lwc1        $f0, 0x4850($v1)
    ctx->pc = 0x2021d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2021d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2021d8: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x2021d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2021dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2021dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021e0: 0xc4404858  lwc1        $f0, 0x4858($v0)
    ctx->pc = 0x2021e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2021e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2021e8: 0xe4404858  swc1        $f0, 0x4858($v0)
    ctx->pc = 0x2021e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18520), bits); }
    // 0x2021ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2021ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021f0: 0x9042485c  lbu         $v0, 0x485C($v0)
    ctx->pc = 0x2021f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18524)));
    // 0x2021f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2021F4u;
    {
        const bool branch_taken_0x2021f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2021f4) {
            ctx->pc = 0x202210u;
            return;
        }
    }
    ctx->pc = 0x2021FCu;
    // 0x2021fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2021fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202200: 0x0  nop
    ctx->pc = 0x202200u;
    // NOP
    // 0x202204: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x202204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202208u;
    {
        const bool branch_taken_0x202208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202208) {
            ctx->pc = 0x20222Cu;
            return;
        }
    }
    ctx->pc = 0x202210u;
}
