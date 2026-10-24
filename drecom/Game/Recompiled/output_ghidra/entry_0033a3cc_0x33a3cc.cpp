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

// Function: entry_0033a3cc
// Address: 0x33a3cc - 0x33a3d0
void entry_0033a3cc_0x33a3cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a3cc_0x33a3cc");
#endif

    ctx->pc = 0x33a3ccu;

    // 0x33a3cc: 0x8c249a18  lw          $a0, -0x65E8($at)
    ctx->pc = 0x33a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941208)));
    ctx->pc = 0x33a3d0u;
}
