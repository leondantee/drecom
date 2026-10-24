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

// Function: entry_0021d6a4
// Address: 0x21d6a4 - 0x21d6ac
void entry_0021d6a4_0x21d6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d6a4_0x21d6a4");
#endif

    ctx->pc = 0x21d6a4u;

    // 0x21d6a4: 0x244610e0  addiu       $a2, $v0, 0x10E0
    ctx->pc = 0x21d6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x21d6a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21d6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21d6acu;
}
