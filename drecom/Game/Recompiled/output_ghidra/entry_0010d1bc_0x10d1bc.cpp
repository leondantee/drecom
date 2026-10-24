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

// Function: entry_0010d1bc
// Address: 0x10d1bc - 0x10d1c0
void entry_0010d1bc_0x10d1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d1bc_0x10d1bc");
#endif

    ctx->pc = 0x10d1bcu;

    // 0x10d1bc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x10d1c0u;
}
