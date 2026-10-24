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

// Function: entry_001cb850
// Address: 0x1cb850 - 0x1cb860
void entry_001cb850_0x1cb850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb850_0x1cb850");
#endif

    ctx->pc = 0x1cb850u;

    // 0x1cb850: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1cb850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb854: 0x84c3127c  lh          $v1, 0x127C($a2)
    ctx->pc = 0x1cb854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4732)));
    // 0x1cb858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb85c: 0xa4c3127c  sh          $v1, 0x127C($a2)
    ctx->pc = 0x1cb85cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4732), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1cb860u;
}
