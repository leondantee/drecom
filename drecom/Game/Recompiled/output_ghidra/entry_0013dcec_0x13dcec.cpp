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

// Function: entry_0013dcec
// Address: 0x13dcec - 0x13dcf0
void entry_0013dcec_0x13dcec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dcec_0x13dcec");
#endif

    ctx->pc = 0x13dcecu;

    // 0x13dcec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x13dcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x13dcf0u;
}
