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

// Function: entry_0026c82c
// Address: 0x26c82c - 0x26c83c
void entry_0026c82c_0x26c82c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c82c_0x26c82c");
#endif

    ctx->pc = 0x26c82cu;

    // 0x26c82c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c82cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c830: 0xad001b60  sw          $zero, 0x1B60($t0)
    ctx->pc = 0x26c830u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 0));
    // 0x26c834: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c838: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x26c838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x26c83cu;
}
