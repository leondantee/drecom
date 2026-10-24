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

// Function: entry_00146f48
// Address: 0x146f48 - 0x146f54
void entry_00146f48_0x146f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146f48_0x146f48");
#endif

    ctx->pc = 0x146f48u;

    // 0x146f48: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x146f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x146f4c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146f50: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x146f50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x146f54u;
}
