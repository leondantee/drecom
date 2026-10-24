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

// Function: entry_0011b468
// Address: 0x11b468 - 0x11b470
void entry_0011b468_0x11b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b468_0x11b468");
#endif

    ctx->pc = 0x11b468u;

    // 0x11b468: 0x8fb301ec  lw          $s3, 0x1EC($sp)
    ctx->pc = 0x11b468u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b46c: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x11b46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->pc = 0x11b470u;
}
