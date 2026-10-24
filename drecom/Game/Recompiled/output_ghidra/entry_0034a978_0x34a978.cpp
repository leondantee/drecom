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

// Function: entry_0034a978
// Address: 0x34a978 - 0x34a988
void entry_0034a978_0x34a978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a978_0x34a978");
#endif

    ctx->pc = 0x34a978u;

    // 0x34a978: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a97c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a97cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a980: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a984: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x34a988u;
}
