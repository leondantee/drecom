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

// Function: entry_00111664
// Address: 0x111664 - 0x11166c
void entry_00111664_0x111664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111664_0x111664");
#endif

    ctx->pc = 0x111664u;

    // 0x111664: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x111664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x111668: 0x41023  negu        $v0, $a0
    ctx->pc = 0x111668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    ctx->pc = 0x11166cu;
}
