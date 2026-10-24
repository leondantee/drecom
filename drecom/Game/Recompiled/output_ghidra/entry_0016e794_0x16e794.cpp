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

// Function: entry_0016e794
// Address: 0x16e794 - 0x16e798
void entry_0016e794_0x16e794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e794_0x16e794");
#endif

    ctx->pc = 0x16e794u;

    // 0x16e794: 0xe420ab18  swc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294945560), bits); }
    ctx->pc = 0x16e798u;
}
