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

// Function: entry_00195a80
// Address: 0x195a80 - 0x195a88
void entry_00195a80_0x195a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a80_0x195a80");
#endif

    ctx->pc = 0x195a80u;

    // 0x195a80: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2792)));
    // 0x195a84: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x195a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->pc = 0x195a88u;
}
