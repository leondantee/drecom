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

// Function: entry_001beecc
// Address: 0x1beecc - 0x1beed8
void entry_001beecc_0x1beecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001beecc_0x1beecc");
#endif

    ctx->pc = 0x1beeccu;

    // 0x1beecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1beeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beed0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1beed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beed4: 0xa04313f9  sb          $v1, 0x13F9($v0)
    ctx->pc = 0x1beed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1beed8u;
}
