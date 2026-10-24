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

// Function: entry_0010a410
// Address: 0x10a410 - 0x10a414
void entry_0010a410_0x10a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a410_0x10a410");
#endif

    ctx->pc = 0x10a410u;

    // 0x10a410: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x10a414u;
}
