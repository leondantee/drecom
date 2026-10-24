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

// Function: entry_00213eb0
// Address: 0x213eb0 - 0x213eb4
void entry_00213eb0_0x213eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213eb0_0x213eb0");
#endif

    ctx->pc = 0x213eb0u;

    // 0x213eb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x213eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x213eb4u;
}
