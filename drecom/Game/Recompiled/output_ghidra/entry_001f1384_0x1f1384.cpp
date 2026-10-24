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

// Function: entry_001f1384
// Address: 0x1f1384 - 0x1f13a4
void entry_001f1384_0x1f1384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1384_0x1f1384");
#endif

    switch (ctx->pc) {
        case 0x1f139cu: goto label_1f139c;
        default: break;
    }

    ctx->pc = 0x1f1384u;

    // 0x1f1384: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1388: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f1388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f138c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1390: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f1390u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1394: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F1394u;
    SET_GPR_U32(ctx, 31, 0x1F139Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F1394u, 0x1F139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F139Cu;
label_1f139c:
    // 0x1f139c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f13a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1f13a4u;
}
