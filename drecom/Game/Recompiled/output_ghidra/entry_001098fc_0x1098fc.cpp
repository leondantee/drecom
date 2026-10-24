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

// Function: entry_001098fc
// Address: 0x1098fc - 0x109900
void entry_001098fc_0x1098fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001098fc_0x1098fc");
#endif

    ctx->pc = 0x1098fcu;

    // 0x1098fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1098fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x109900u;
}
