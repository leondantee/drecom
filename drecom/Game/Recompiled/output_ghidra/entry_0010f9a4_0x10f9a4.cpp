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

// Function: entry_0010f9a4
// Address: 0x10f9a4 - 0x10f9a8
void entry_0010f9a4_0x10f9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f9a4_0x10f9a4");
#endif

    ctx->pc = 0x10f9a4u;

    // 0x10f9a4: 0x25084600  addiu       $t0, $t0, 0x4600
    ctx->pc = 0x10f9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17920));
    ctx->pc = 0x10f9a8u;
}
