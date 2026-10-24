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

// Function: entry_0022e8ec
// Address: 0x22e8ec - 0x22e90c
void entry_0022e8ec_0x22e8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e8ec_0x22e8ec");
#endif

    switch (ctx->pc) {
        case 0x22e904u: goto label_22e904;
        default: break;
    }

    ctx->pc = 0x22e8ecu;

    // 0x22e8ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e8f0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22e8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e8f4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x22e8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e8f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22e8f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22e8fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22E8FCu;
    SET_GPR_U32(ctx, 31, 0x22E904u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22E8FCu, 0x22E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E904u;
label_22e904:
    // 0x22e904: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e908: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22e908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x22e90cu;
}
