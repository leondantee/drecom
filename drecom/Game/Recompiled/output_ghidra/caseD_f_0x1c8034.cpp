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

// Function: caseD_f
// Address: 0x1c8034 - 0x1c80a4
void caseD_f_0x1c8034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1c8034");
#endif

    switch (ctx->pc) {
        case 0x1c8058u: goto label_1c8058;
        default: break;
    }

    ctx->pc = 0x1c8034u;

    // 0x1c8034: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c8034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8038: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c8038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c803c: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c803cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1c8040: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x1c8040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c8044: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1c8044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1c8048: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c804c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c8050: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C8050u;
    SET_GPR_U32(ctx, 31, 0x1C8058u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C8050u, 0x1C8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8058u;
label_1c8058:
    // 0x1c8058: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8058u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c805c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c805cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8060: 0xc4c10188  lwc1        $f1, 0x188($a2)
    ctx->pc = 0x1c8060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8064: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x1c8064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x1c8068: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c8068u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c806c: 0x0  nop
    ctx->pc = 0x1c806cu;
    // NOP
    // 0x1c8070: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c8074: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x1c8074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
    // 0x1c8078: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c807c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1c807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8084: 0x0  nop
    ctx->pc = 0x1c8084u;
    // NOP
    // 0x1c8088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c8088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c808c: 0x0  nop
    ctx->pc = 0x1c808cu;
    // NOP
    // 0x1c8090: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8090u;
    {
        const bool branch_taken_0x1c8090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8090) {
            ctx->pc = 0x1C80A4u;
            return;
        }
    }
    ctx->pc = 0x1C8098u;
    // 0x1c8098: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c809c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c80a0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1c80a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1c80a4u;
}
