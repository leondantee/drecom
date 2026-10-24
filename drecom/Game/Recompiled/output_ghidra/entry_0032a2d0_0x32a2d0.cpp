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

// Function: entry_0032a2d0
// Address: 0x32a2d0 - 0x32a2d8
void entry_0032a2d0_0x32a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a2d0_0x32a2d0");
#endif

    ctx->pc = 0x32a2d0u;

    // 0x32a2d0: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x32a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x32a2d4: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x32a2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x32a2d8u;
}
