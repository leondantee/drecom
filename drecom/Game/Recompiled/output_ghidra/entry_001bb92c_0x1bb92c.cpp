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

// Function: entry_001bb92c
// Address: 0x1bb92c - 0x1bb93c
void entry_001bb92c_0x1bb92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb92c_0x1bb92c");
#endif

    ctx->pc = 0x1bb92cu;

    // 0x1bb92c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb930: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bb930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bb934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bb934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bb938: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bb938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bb93cu;
}
