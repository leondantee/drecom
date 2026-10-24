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

// Function: entry_0027efac
// Address: 0x27efac - 0x27efb0
void entry_0027efac_0x27efac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027efac_0x27efac");
#endif

    ctx->pc = 0x27efacu;

    // 0x27efac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27efacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x27efb0u;
}
