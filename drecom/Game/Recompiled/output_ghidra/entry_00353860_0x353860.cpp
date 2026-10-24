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

// Function: entry_00353860
// Address: 0x353860 - 0x353870
void entry_00353860_0x353860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00353860_0x353860");
#endif

    ctx->pc = 0x353860u;

    // 0x353860: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x353860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353864: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x353864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353868: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x353868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x35386c: 0xa065006e  sb          $a1, 0x6E($v1)
    ctx->pc = 0x35386cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x353870u;
}
