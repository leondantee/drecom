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

// Function: entry_0030a9e0
// Address: 0x30a9e0 - 0x30aa14
void entry_0030a9e0_0x30a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a9e0_0x30a9e0");
#endif

    switch (ctx->pc) {
        case 0x30a9f4u: goto label_30a9f4;
        case 0x30aa10u: goto label_30aa10;
        default: break;
    }

    ctx->pc = 0x30a9e0u;

    // 0x30a9e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30a9e4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x30a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x30a9e8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30a9ec: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x30A9ECu;
    SET_GPR_U32(ctx, 31, 0x30A9F4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x30A9ECu, 0x30A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9F4u;
label_30a9f4:
    // 0x30a9f4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x30a9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x30a9f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30a9fc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30aa00: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x30aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30aa04: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x30aa04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30aa08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30AA08u;
    SET_GPR_U32(ctx, 31, 0x30AA10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30AA08u, 0x30AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA10u;
label_30aa10:
    // 0x30aa10: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x30aa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x30aa14u;
}
