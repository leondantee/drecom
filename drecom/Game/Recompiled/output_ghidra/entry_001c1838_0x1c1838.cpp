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

// Function: entry_001c1838
// Address: 0x1c1838 - 0x1c1840
void entry_001c1838_0x1c1838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1838_0x1c1838");
#endif

    ctx->pc = 0x1c1838u;

    // 0x1c1838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c183c: 0xa040156c  sb          $zero, 0x156C($v0)
    ctx->pc = 0x1c183cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c1840u;
}
