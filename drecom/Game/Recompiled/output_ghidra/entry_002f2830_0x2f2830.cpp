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

// Function: entry_002f2830
// Address: 0x2f2830 - 0x2f2834
void entry_002f2830_0x2f2830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2830_0x2f2830");
#endif

    ctx->pc = 0x2f2830u;

    // 0x2f2830: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2f2830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x2f2834u;
}
