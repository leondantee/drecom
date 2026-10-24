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

// Function: entry_00117e70
// Address: 0x117e70 - 0x117e74
void entry_00117e70_0x117e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117e70_0x117e70");
#endif

    ctx->pc = 0x117e70u;

    // 0x117e70: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x117e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x117e74u;
}
