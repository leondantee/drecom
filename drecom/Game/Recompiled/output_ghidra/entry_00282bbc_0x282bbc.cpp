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

// Function: entry_00282bbc
// Address: 0x282bbc - 0x282bc0
void entry_00282bbc_0x282bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282bbc_0x282bbc");
#endif

    ctx->pc = 0x282bbcu;

    // 0x282bbc: 0x244535c0  addiu       $a1, $v0, 0x35C0
    ctx->pc = 0x282bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    ctx->pc = 0x282bc0u;
}
