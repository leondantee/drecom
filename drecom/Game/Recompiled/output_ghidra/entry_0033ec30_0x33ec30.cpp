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

// Function: entry_0033ec30
// Address: 0x33ec30 - 0x33ec38
void entry_0033ec30_0x33ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ec30_0x33ec30");
#endif

    ctx->pc = 0x33ec30u;

    // 0x33ec30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ec34: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x33ec34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x33ec38u;
}
