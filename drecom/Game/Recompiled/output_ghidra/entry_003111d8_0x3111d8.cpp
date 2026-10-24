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

// Function: entry_003111d8
// Address: 0x3111d8 - 0x31120c
void entry_003111d8_0x3111d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003111d8_0x3111d8");
#endif

    switch (ctx->pc) {
        case 0x3111ecu: goto label_3111ec;
        case 0x311208u: goto label_311208;
        default: break;
    }

    ctx->pc = 0x3111d8u;

    // 0x3111d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3111d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3111dc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x3111dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3111e0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3111e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3111e4: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x3111E4u;
    SET_GPR_U32(ctx, 31, 0x3111ECu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x3111E4u, 0x3111ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111ECu;
label_3111ec:
    // 0x3111ec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3111ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3111f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3111f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3111f4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3111f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3111f8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x3111f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3111fc: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x3111fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x311200: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x311200u;
    SET_GPR_U32(ctx, 31, 0x311208u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x311200u, 0x311208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311208u;
label_311208:
    // 0x311208: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x311208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x31120cu;
}
