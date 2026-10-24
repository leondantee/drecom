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

// Function: entry_00145aec
// Address: 0x145aec - 0x145af4
void entry_00145aec_0x145aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145aec_0x145aec");
#endif

    ctx->pc = 0x145aecu;

    // 0x145aec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145af0: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x145af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x145af4u;
}
