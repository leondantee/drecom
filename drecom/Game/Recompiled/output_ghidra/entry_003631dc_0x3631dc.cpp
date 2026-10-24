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

// Function: entry_003631dc
// Address: 0x3631dc - 0x363250
void entry_003631dc_0x3631dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003631dc_0x3631dc");
#endif

    switch (ctx->pc) {
        case 0x363204u: goto label_363204;
        case 0x36321cu: goto label_36321c;
        default: break;
    }

    ctx->pc = 0x3631dcu;

    // 0x3631dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3631dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3631e0: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x3631e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x3631e4: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x3631e4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3631e8: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x3631e8u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x3631ec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3631ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3631f0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3631f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3631f4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3631f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3631f8: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x3631f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x3631fc: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x3631FCu;
    SET_GPR_U32(ctx, 31, 0x363204u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x3631FCu, 0x363204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363204u;
label_363204:
    // 0x363204: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363208: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36320c: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x36320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x363210: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x363210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x363214: 0xc058f20  jal         func_163C80
    ctx->pc = 0x363214u;
    SET_GPR_U32(ctx, 31, 0x36321Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x363214u, 0x36321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36321Cu;
label_36321c:
    // 0x36321c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x36321cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x363220: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x363220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x363224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363228: 0x0  nop
    ctx->pc = 0x363228u;
    // NOP
    // 0x36322c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36322cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363230: 0x0  nop
    ctx->pc = 0x363230u;
    // NOP
    // 0x363234: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x363234u;
    {
        const bool branch_taken_0x363234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363234) {
            ctx->pc = 0x363250u;
            return;
        }
    }
    ctx->pc = 0x36323Cu;
    // 0x36323c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x36323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x363240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x363240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363244: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x363244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363248: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x363248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36324c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x36324cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->pc = 0x363250u;
}
