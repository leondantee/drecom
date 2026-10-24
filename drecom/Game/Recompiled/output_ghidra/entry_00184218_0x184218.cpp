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

// Function: entry_00184218
// Address: 0x184218 - 0x184220
void entry_00184218_0x184218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184218_0x184218");
#endif

    ctx->pc = 0x184218u;

    // 0x184218: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x184218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x18421c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18421cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x184220u;
}
