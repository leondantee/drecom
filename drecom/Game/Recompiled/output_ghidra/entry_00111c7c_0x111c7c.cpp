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

// Function: entry_00111c7c
// Address: 0x111c7c - 0x111c80
void entry_00111c7c_0x111c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111c7c_0x111c7c");
#endif

    ctx->pc = 0x111c7cu;

    // 0x111c7c: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x111c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->pc = 0x111c80u;
}
