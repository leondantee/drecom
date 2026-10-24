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

// Function: entry_002ba924
// Address: 0x2ba924 - 0x2ba930
void entry_002ba924_0x2ba924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ba924_0x2ba924");
#endif

    ctx->pc = 0x2ba924u;

    // 0x2ba924: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ba924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ba928: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba92c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ba92cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2ba930u;
}
