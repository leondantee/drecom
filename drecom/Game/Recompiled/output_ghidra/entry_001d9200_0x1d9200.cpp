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

// Function: entry_001d9200
// Address: 0x1d9200 - 0x1d9204
void entry_001d9200_0x1d9200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9200_0x1d9200");
#endif

    ctx->pc = 0x1d9200u;

    // 0x1d9200: 0xac22c508  sw          $v0, -0x3AF8($at)
    ctx->pc = 0x1d9200u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952200), GPR_U32(ctx, 2));
    ctx->pc = 0x1d9204u;
}
