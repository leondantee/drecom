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

// Function: entry_0029f994
// Address: 0x29f994 - 0x29f9a4
void entry_0029f994_0x29f994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f994_0x29f994");
#endif

    ctx->pc = 0x29f994u;

    // 0x29f994: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f998: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x29f998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x29f99c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f9a0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x29f9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x29f9a4u;
}
