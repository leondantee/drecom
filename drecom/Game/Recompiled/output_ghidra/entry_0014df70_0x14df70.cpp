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

// Function: entry_0014df70
// Address: 0x14df70 - 0x14df80
void entry_0014df70_0x14df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014df70_0x14df70");
#endif

    ctx->pc = 0x14df70u;

    // 0x14df70: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14df74: 0xa602122c  sh          $v0, 0x122C($s0)
    ctx->pc = 0x14df74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4652), (uint16_t)GPR_U32(ctx, 2));
    // 0x14df78: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14df7c: 0xa602122e  sh          $v0, 0x122E($s0)
    ctx->pc = 0x14df7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4654), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14df80u;
}
