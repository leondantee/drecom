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

// Function: entry_0035f298
// Address: 0x35f298 - 0x35f29c
void entry_0035f298_0x35f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f298_0x35f298");
#endif

    ctx->pc = 0x35f298u;

    // 0x35f298: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35f298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x35f29cu;
}
