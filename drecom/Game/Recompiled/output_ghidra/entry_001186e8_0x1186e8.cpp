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

// Function: entry_001186e8
// Address: 0x1186e8 - 0x1186ec
void entry_001186e8_0x1186e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186e8_0x1186e8");
#endif

    ctx->pc = 0x1186e8u;

    // 0x1186e8: 0x26834928  addiu       $v1, $s4, 0x4928
    ctx->pc = 0x1186e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
    ctx->pc = 0x1186ecu;
}
