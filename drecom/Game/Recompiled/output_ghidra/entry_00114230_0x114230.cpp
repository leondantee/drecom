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

// Function: entry_00114230
// Address: 0x114230 - 0x114234
void entry_00114230_0x114230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114230_0x114230");
#endif

    ctx->pc = 0x114230u;

    // 0x114230: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x114230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    ctx->pc = 0x114234u;
}
