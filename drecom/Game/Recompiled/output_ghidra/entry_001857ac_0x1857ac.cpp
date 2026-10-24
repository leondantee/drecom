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

// Function: entry_001857ac
// Address: 0x1857ac - 0x1857b0
void entry_001857ac_0x1857ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001857ac_0x1857ac");
#endif

    ctx->pc = 0x1857acu;

    // 0x1857ac: 0xe4200320  swc1        $f0, 0x320($at)
    ctx->pc = 0x1857acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 800), bits); }
    ctx->pc = 0x1857b0u;
}
