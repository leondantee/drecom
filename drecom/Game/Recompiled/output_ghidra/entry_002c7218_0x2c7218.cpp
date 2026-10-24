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

// Function: entry_002c7218
// Address: 0x2c7218 - 0x2c72ac
void entry_002c7218_0x2c7218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7218_0x2c7218");
#endif

    switch (ctx->pc) {
        case 0x2c7230u: goto label_2c7230;
        case 0x2c7250u: goto label_2c7250;
        case 0x2c7268u: goto label_2c7268;
        case 0x2c7288u: goto label_2c7288;
        case 0x2c7298u: goto label_2c7298;
        case 0x2c72a4u: goto label_2c72a4;
        default: break;
    }

    ctx->pc = 0x2c7218u;

    // 0x2c7218: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c721c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7220: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2c7220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7224: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c7224u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c7228: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C7228u;
    SET_GPR_U32(ctx, 31, 0x2C7230u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C7228u, 0x2C7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7230u;
label_2c7230:
    // 0x2c7230: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7234: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c7234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c7238: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c723c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2c723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7240: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c7240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7244: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c7244u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c7248: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C7248u;
    SET_GPR_U32(ctx, 31, 0x2C7250u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C7248u, 0x2C7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7250u;
label_2c7250:
    // 0x2c7250: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7254: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c7254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c7258: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c7258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c725c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c725cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7260: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C7260u;
    SET_GPR_U32(ctx, 31, 0x2C7268u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C7260u, 0x2C7268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7268u;
label_2c7268:
    // 0x2c7268: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c726c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7270: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7274: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7278: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c7278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c727c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c727cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7280: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C7280u;
    SET_GPR_U32(ctx, 31, 0x2C7288u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C7280u, 0x2C7288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7288u;
label_2c7288:
    // 0x2c7288: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c7288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c728c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c728cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7290: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C7290u;
    SET_GPR_U32(ctx, 31, 0x2C7298u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C7290u, 0x2C7298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7298u;
label_2c7298:
    // 0x2c7298: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c7298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c729c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C729Cu;
    SET_GPR_U32(ctx, 31, 0x2C72A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C729Cu, 0x2C72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72A4u;
label_2c72a4:
    // 0x2c72a4: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2C72A4u;
    {
        const bool branch_taken_0x2c72a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c72a4) {
            ctx->pc = 0x2C7614u;
            return;
        }
    }
    ctx->pc = 0x2C72ACu;
}
