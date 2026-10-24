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

// Function: entry_0014ad64
// Address: 0x14ad64 - 0x14adfc
void entry_0014ad64_0x14ad64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ad64_0x14ad64");
#endif

    switch (ctx->pc) {
        case 0x14ad70u: goto label_14ad70;
        case 0x14ad84u: goto label_14ad84;
        case 0x14ad9cu: goto label_14ad9c;
        default: break;
    }

    ctx->pc = 0x14ad64u;

    // 0x14ad64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ad68: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14AD68u;
    SET_GPR_U32(ctx, 31, 0x14AD70u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14AD68u, 0x14AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD70u;
label_14ad70:
    // 0x14ad70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ad70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ad74: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ad78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14ad78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14ad7c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14AD7Cu;
    SET_GPR_U32(ctx, 31, 0x14AD84u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14AD7Cu, 0x14AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD84u;
label_14ad84:
    // 0x14ad84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ad88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ad8c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14ad90: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14ad94: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14AD94u;
    SET_GPR_U32(ctx, 31, 0x14AD9Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14AD94u, 0x14AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD9Cu;
label_14ad9c:
    // 0x14ad9c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14ad9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14ada0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ada4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ada8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14adac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14adb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14adb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14adb4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14adb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14adb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14adbc: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x14adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14adc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14adc4: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x14adc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14adc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14adc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14adcc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14adccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14add0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14add4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14add8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14addc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14addcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ade0: 0x0  nop
    ctx->pc = 0x14ade0u;
    // NOP
    // 0x14ade4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14ADE4u;
    {
        const bool branch_taken_0x14ade4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ade4) {
            ctx->pc = 0x14ADFCu;
            return;
        }
    }
    ctx->pc = 0x14ADECu;
    // 0x14adec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14adf0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14adf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14adf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14adf8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14adf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14adfcu;
}
