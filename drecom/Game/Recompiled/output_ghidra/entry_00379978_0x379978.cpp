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

// Function: entry_00379978
// Address: 0x379978 - 0x37997c
void entry_00379978_0x379978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379978_0x379978");
#endif

    ctx->pc = 0x379978u;

    // 0x379978: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x379978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x37997cu;
}
