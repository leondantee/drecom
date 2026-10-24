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

// Function: entry_001044c4
// Address: 0x1044c4 - 0x1044cc
void entry_001044c4_0x1044c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001044c4_0x1044c4");
#endif

    ctx->pc = 0x1044c4u;

    // 0x1044c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1044c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044c8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1044c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1044ccu;
}
