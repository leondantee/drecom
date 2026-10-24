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

// Function: entry_00117a98
// Address: 0x117a98 - 0x117a9c
void entry_00117a98_0x117a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117a98_0x117a98");
#endif

    ctx->pc = 0x117a98u;

    // 0x117a98: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x117a98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x117a9cu;
}
