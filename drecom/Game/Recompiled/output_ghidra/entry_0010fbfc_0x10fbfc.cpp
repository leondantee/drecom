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

// Function: entry_0010fbfc
// Address: 0x10fbfc - 0x10fc00
void entry_0010fbfc_0x10fbfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbfc_0x10fbfc");
#endif

    ctx->pc = 0x10fbfcu;

    // 0x10fbfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x10fbfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x10fc00u;
}
