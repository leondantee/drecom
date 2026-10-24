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

// Function: entry_0019ec30
// Address: 0x19ec30 - 0x19ec38
void entry_0019ec30_0x19ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ec30_0x19ec30");
#endif

    ctx->pc = 0x19ec30u;

    // 0x19ec30: 0x938580c0  lbu         $a1, -0x7F40($gp)
    ctx->pc = 0x19ec30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x19ec34: 0xa38580c4  sb          $a1, -0x7F3C($gp)
    ctx->pc = 0x19ec34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934724), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x19ec38u;
}
