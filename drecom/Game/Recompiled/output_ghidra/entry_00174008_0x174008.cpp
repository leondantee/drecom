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

// Function: entry_00174008
// Address: 0x174008 - 0x174010
void entry_00174008_0x174008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174008_0x174008");
#endif

    ctx->pc = 0x174008u;

    // 0x174008: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x174008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17400c: 0x0  nop
    ctx->pc = 0x17400cu;
    // NOP
    ctx->pc = 0x174010u;
}
