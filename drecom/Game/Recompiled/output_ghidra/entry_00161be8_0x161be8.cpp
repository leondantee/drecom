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

// Function: entry_00161be8
// Address: 0x161be8 - 0x161bf0
void entry_00161be8_0x161be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161be8_0x161be8");
#endif

    ctx->pc = 0x161be8u;

    // 0x161be8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161bec: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x161bf0u;
}
