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

// Function: entry_00185e54
// Address: 0x185e54 - 0x185e58
void entry_00185e54_0x185e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185e54_0x185e54");
#endif

    ctx->pc = 0x185e54u;

    // 0x185e54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    ctx->pc = 0x185e58u;
}
