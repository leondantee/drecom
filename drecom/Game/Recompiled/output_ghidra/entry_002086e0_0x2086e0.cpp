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

// Function: entry_002086e0
// Address: 0x2086e0 - 0x2086f0
void entry_002086e0_0x2086e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002086e0_0x2086e0");
#endif

    ctx->pc = 0x2086e0u;

    // 0x2086e0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2086e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2086e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2086e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2086e8: 0x0  nop
    ctx->pc = 0x2086e8u;
    // NOP
    // 0x2086ec: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2086ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x2086f0u;
}
