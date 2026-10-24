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

// Function: entry_00116a84
// Address: 0x116a84 - 0x116a8c
void entry_00116a84_0x116a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a84_0x116a84");
#endif

    ctx->pc = 0x116a84u;

    // 0x116a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x116a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116a88: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x116a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x116a8cu;
}
