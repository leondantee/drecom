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

// Function: entry_0027ab10
// Address: 0x27ab10 - 0x27ab14
void entry_0027ab10_0x27ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ab10_0x27ab10");
#endif

    ctx->pc = 0x27ab10u;

    // 0x27ab10: 0x24501ac0  addiu       $s0, $v0, 0x1AC0
    ctx->pc = 0x27ab10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    ctx->pc = 0x27ab14u;
}
