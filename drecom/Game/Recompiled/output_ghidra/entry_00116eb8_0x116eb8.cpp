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

// Function: entry_00116eb8
// Address: 0x116eb8 - 0x116ebc
void entry_00116eb8_0x116eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116eb8_0x116eb8");
#endif

    ctx->pc = 0x116eb8u;

    // 0x116eb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x116eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x116ebcu;
}
