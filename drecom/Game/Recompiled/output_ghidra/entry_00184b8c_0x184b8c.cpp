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

// Function: entry_00184b8c
// Address: 0x184b8c - 0x184b98
void entry_00184b8c_0x184b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184b8c_0x184b8c");
#endif

    ctx->pc = 0x184b8cu;

    // 0x184b8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x184b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x184b90: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x184b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x184b94: 0x0  nop
    ctx->pc = 0x184b94u;
    // NOP
    ctx->pc = 0x184b98u;
}
