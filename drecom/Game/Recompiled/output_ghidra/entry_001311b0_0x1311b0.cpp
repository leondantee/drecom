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

// Function: entry_001311b0
// Address: 0x1311b0 - 0x131214
void entry_001311b0_0x1311b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001311b0_0x1311b0");
#endif

    switch (ctx->pc) {
        case 0x1311d0u: goto label_1311d0;
        case 0x1311e8u: goto label_1311e8;
        default: break;
    }

    ctx->pc = 0x1311b0u;

    // 0x1311b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1311b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1311b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1311b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1311b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1311b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1311bc: 0x2406051a  addiu       $a2, $zero, 0x51A
    ctx->pc = 0x1311bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1306));
    // 0x1311c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1311c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1311c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1311c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1311c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1311C8u;
    SET_GPR_U32(ctx, 31, 0x1311D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1311C8u, 0x1311D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311D0u;
label_1311d0:
    // 0x1311d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1311d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1311d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1311d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1311d8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1311d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1311dc: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x1311dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1311e0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1311E0u;
    SET_GPR_U32(ctx, 31, 0x1311E8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1311E0u, 0x1311E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311E8u;
label_1311e8:
    // 0x1311e8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1311e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1311ec: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1311ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1311f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1311f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1311f4: 0x0  nop
    ctx->pc = 0x1311f4u;
    // NOP
    // 0x1311f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1311f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1311fc: 0x0  nop
    ctx->pc = 0x1311fcu;
    // NOP
    // 0x131200: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x131200u;
    {
        const bool branch_taken_0x131200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131200) {
            ctx->pc = 0x131214u;
            return;
        }
    }
    ctx->pc = 0x131208u;
    // 0x131208: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x131208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13120c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13120cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x131210: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x131210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x131214u;
}
