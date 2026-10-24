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

// Function: entry_0034021c
// Address: 0x34021c - 0x340228
void entry_0034021c_0x34021c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034021c_0x34021c");
#endif

    ctx->pc = 0x34021cu;

    // 0x34021c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x34021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x340220: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x340220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340224: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x340224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x340228u;
}
