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

// Function: entry_00165000
// Address: 0x165000 - 0x165004
void entry_00165000_0x165000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165000_0x165000");
#endif

    ctx->pc = 0x165000u;

    // 0x165000: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x165000u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2792), GPR_U32(ctx, 3));
    ctx->pc = 0x165004u;
}
