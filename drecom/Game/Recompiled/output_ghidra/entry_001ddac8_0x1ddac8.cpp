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

// Function: entry_001ddac8
// Address: 0x1ddac8 - 0x1ddad0
void entry_001ddac8_0x1ddac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddac8_0x1ddac8");
#endif

    ctx->pc = 0x1ddac8u;

    // 0x1ddac8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ddac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddacc: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1ddaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->pc = 0x1ddad0u;
}
