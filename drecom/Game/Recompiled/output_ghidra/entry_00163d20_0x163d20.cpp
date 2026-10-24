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

// Function: entry_00163d20
// Address: 0x163d20 - 0x163d28
void entry_00163d20_0x163d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163d20_0x163d20");
#endif

    ctx->pc = 0x163d20u;

    // 0x163d20: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x163d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163d24: 0x0  nop
    ctx->pc = 0x163d24u;
    // NOP
    ctx->pc = 0x163d28u;
}
