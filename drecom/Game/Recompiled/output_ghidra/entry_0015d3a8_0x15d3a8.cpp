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

// Function: entry_0015d3a8
// Address: 0x15d3a8 - 0x15d3ac
void entry_0015d3a8_0x15d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d3a8_0x15d3a8");
#endif

    ctx->pc = 0x15d3a8u;

    // 0x15d3a8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x15d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x15d3acu;
}
