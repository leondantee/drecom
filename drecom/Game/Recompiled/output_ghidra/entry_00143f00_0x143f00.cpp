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

// Function: entry_00143f00
// Address: 0x143f00 - 0x143f04
void entry_00143f00_0x143f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f00_0x143f00");
#endif

    ctx->pc = 0x143f00u;

    // 0x143f00: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x143f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
    ctx->pc = 0x143f04u;
}
