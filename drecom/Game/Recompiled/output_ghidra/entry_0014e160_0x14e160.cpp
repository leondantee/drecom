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

// Function: entry_0014e160
// Address: 0x14e160 - 0x14e168
void entry_0014e160_0x14e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e160_0x14e160");
#endif

    ctx->pc = 0x14e160u;

    // 0x14e160: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14e164: 0xa20213a7  sb          $v0, 0x13A7($s0)
    ctx->pc = 0x14e164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5031), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14e168u;
}
