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

// Function: entry_0031e6ac
// Address: 0x31e6ac - 0x31e6b0
void entry_0031e6ac_0x31e6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e6ac_0x31e6ac");
#endif

    ctx->pc = 0x31e6acu;

    // 0x31e6ac: 0xa420af66  sh          $zero, -0x509A($at)
    ctx->pc = 0x31e6acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946662), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x31e6b0u;
}
