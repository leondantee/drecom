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

// Function: entry_00116988
// Address: 0x116988 - 0x116990
void entry_00116988_0x116988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116988_0x116988");
#endif

    ctx->pc = 0x116988u;

    // 0x116988: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x116988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11698c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x11698cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x116990u;
}
