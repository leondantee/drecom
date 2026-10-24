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

// Function: entry_0010bd54
// Address: 0x10bd54 - 0x10bd5c
void entry_0010bd54_0x10bd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bd54_0x10bd54");
#endif

    ctx->pc = 0x10bd54u;

    // 0x10bd54: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x10bd54u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x10bd58: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->pc = 0x10bd5cu;
}
