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

// Function: entry_002169dc
// Address: 0x2169dc - 0x2169e4
void entry_002169dc_0x2169dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002169dc_0x2169dc");
#endif

    ctx->pc = 0x2169dcu;

    // 0x2169dc: 0x3c160062  lui         $s6, 0x62
    ctx->pc = 0x2169dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
    // 0x2169e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2169e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x2169e4u;
}
