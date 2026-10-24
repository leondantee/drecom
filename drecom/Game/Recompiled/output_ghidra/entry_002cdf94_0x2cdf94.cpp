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

// Function: entry_002cdf94
// Address: 0x2cdf94 - 0x2cdfa4
void entry_002cdf94_0x2cdf94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cdf94_0x2cdf94");
#endif

    switch (ctx->pc) {
        case 0x2cdf9cu: goto label_2cdf9c;
        default: break;
    }

    ctx->pc = 0x2cdf94u;

    // 0x2cdf94: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CDF94u;
    SET_GPR_U32(ctx, 31, 0x2CDF9Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CDF94u, 0x2CDF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF9Cu;
label_2cdf9c:
    // 0x2cdf9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2cdf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdfa0: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x2cdfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    ctx->pc = 0x2cdfa4u;
}
