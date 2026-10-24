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

// Function: entry_002835a0
// Address: 0x2835a0 - 0x2835a8
void entry_002835a0_0x2835a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002835a0_0x2835a0");
#endif

    ctx->pc = 0x2835a0u;

    // 0x2835a0: 0xa020d4b1  sb          $zero, -0x2B4F($at)
    ctx->pc = 0x2835a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294956209), (uint8_t)GPR_U32(ctx, 0));
    // 0x2835a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2835a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2835a8u;
}
