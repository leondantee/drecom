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

// Function: entry_0010d414
// Address: 0x10d414 - 0x10d418
void entry_0010d414_0x10d414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d414_0x10d414");
#endif

    ctx->pc = 0x10d414u;

    // 0x10d414: 0x252445f8  addiu       $a0, $t1, 0x45F8
    ctx->pc = 0x10d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 17912));
    ctx->pc = 0x10d418u;
}
