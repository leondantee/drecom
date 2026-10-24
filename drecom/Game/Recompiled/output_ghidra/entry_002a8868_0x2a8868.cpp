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

// Function: entry_002a8868
// Address: 0x2a8868 - 0x2a8870
void entry_002a8868_0x2a8868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8868_0x2a8868");
#endif

    ctx->pc = 0x2a8868u;

    // 0x2a8868: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2a8868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2a886c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a886cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2a8870u;
}
