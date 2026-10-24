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

// Function: entry_001f3d24
// Address: 0x1f3d24 - 0x1f3d44
void entry_001f3d24_0x1f3d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3d24_0x1f3d24");
#endif

    switch (ctx->pc) {
        case 0x1f3d3cu: goto label_1f3d3c;
        default: break;
    }

    ctx->pc = 0x1f3d24u;

    // 0x1f3d24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d28: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3d2c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3d30: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f3d30u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f3d34: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F3D34u;
    SET_GPR_U32(ctx, 31, 0x1F3D3Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F3D34u, 0x1F3D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D3Cu;
label_1f3d3c:
    // 0x1f3d3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d40: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f3d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1f3d44u;
}
