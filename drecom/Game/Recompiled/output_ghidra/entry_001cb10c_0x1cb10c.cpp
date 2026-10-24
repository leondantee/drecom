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

// Function: entry_001cb10c
// Address: 0x1cb10c - 0x1cb11c
void entry_001cb10c_0x1cb10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb10c_0x1cb10c");
#endif

    ctx->pc = 0x1cb10cu;

    // 0x1cb10c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb110: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cb110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb114: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb118: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cb118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x1cb11cu;
}
