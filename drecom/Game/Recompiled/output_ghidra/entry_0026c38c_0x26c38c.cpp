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

// Function: entry_0026c38c
// Address: 0x26c38c - 0x26c394
void entry_0026c38c_0x26c38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c38c_0x26c38c");
#endif

    ctx->pc = 0x26c38cu;

    // 0x26c38c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c390: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x26c390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x26c394u;
}
