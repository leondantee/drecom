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

// Function: entry_00296648
// Address: 0x296648 - 0x296650
void entry_00296648_0x296648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296648_0x296648");
#endif

    ctx->pc = 0x296648u;

    // 0x296648: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x29664c: 0xa46069ae  sh          $zero, 0x69AE($v1)
    ctx->pc = 0x29664cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 27054), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x296650u;
}
