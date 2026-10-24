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

// Function: entry_0032468c
// Address: 0x32468c - 0x324780
void entry_0032468c_0x32468c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032468c_0x32468c");
#endif

    switch (ctx->pc) {
        case 0x324694u: goto label_324694;
        case 0x3246bcu: goto label_3246bc;
        case 0x3246e4u: goto label_3246e4;
        case 0x324724u: goto label_324724;
        case 0x32477cu: goto label_32477c;
        default: break;
    }

    ctx->pc = 0x32468cu;

    // 0x32468c: 0xc067648  jal         func_19D920
    ctx->pc = 0x32468Cu;
    SET_GPR_U32(ctx, 31, 0x324694u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x32468Cu, 0x324694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324694u;
label_324694:
    // 0x324694: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x324694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x324698: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32469c: 0x0  nop
    ctx->pc = 0x32469cu;
    // NOP
    // 0x3246a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3246a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3246a4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3246a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3246a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3246a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3246acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3246b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3246b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3246b4: 0xc067648  jal         func_19D920
    ctx->pc = 0x3246B4u;
    SET_GPR_U32(ctx, 31, 0x3246BCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3246B4u, 0x3246BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3246BCu;
label_3246bc:
    // 0x3246bc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3246bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3246c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3246c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3246c4: 0x0  nop
    ctx->pc = 0x3246c4u;
    // NOP
    // 0x3246c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3246c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3246cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3246ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3246d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3246d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3246d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3246d8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3246d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3246dc: 0xc067648  jal         func_19D920
    ctx->pc = 0x3246DCu;
    SET_GPR_U32(ctx, 31, 0x3246E4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3246DCu, 0x3246E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3246E4u;
label_3246e4:
    // 0x3246e4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3246e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3246e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3246e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3246ec: 0x0  nop
    ctx->pc = 0x3246ecu;
    // NOP
    // 0x3246f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3246f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3246f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3246f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3246f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3246f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3246fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324700: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x324700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x324704: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x324704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x324708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32470c: 0x0  nop
    ctx->pc = 0x32470cu;
    // NOP
    // 0x324710: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x324710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x324714: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x324714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x324718: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x324718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x32471c: 0xc067648  jal         func_19D920
    ctx->pc = 0x32471Cu;
    SET_GPR_U32(ctx, 31, 0x324724u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x32471Cu, 0x324724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324724u;
label_324724:
    // 0x324724: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x324724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x324728: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32472c: 0x0  nop
    ctx->pc = 0x32472cu;
    // NOP
    // 0x324730: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324734: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x324734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x324738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32473c: 0x0  nop
    ctx->pc = 0x32473cu;
    // NOP
    // 0x324740: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x324740u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324744: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x324744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x324748: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x324748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x32474c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x32474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x324750: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x324750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324754: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x324754u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324758: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x324758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32475c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x32475cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x324760: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x324760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324764: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x324764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x324768: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x324768u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x32476c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x32476cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324770: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x324770u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324774: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x324774u;
    SET_GPR_U32(ctx, 31, 0x32477Cu);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x324774u, 0x32477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32477Cu;
label_32477c:
    // 0x32477c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32477cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x324780u;
}
