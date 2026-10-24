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

// Function: entry_00357504
// Address: 0x357504 - 0x357508
void entry_00357504_0x357504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357504_0x357504");
#endif

    ctx->pc = 0x357504u;

    // 0x357504: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x357504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    ctx->pc = 0x357508u;
}
