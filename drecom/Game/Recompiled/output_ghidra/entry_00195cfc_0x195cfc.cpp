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

// Function: entry_00195cfc
// Address: 0x195cfc - 0x195d04
void entry_00195cfc_0x195cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195cfc_0x195cfc");
#endif

    ctx->pc = 0x195cfcu;

    // 0x195cfc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x195cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x195d00: 0xac521270  sw          $s2, 0x1270($v0)
    ctx->pc = 0x195d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4720), GPR_U32(ctx, 18));
    ctx->pc = 0x195d04u;
}
