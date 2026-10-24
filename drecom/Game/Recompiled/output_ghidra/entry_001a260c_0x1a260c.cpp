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

// Function: entry_001a260c
// Address: 0x1a260c - 0x1a2618
void entry_001a260c_0x1a260c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a260c_0x1a260c");
#endif

    ctx->pc = 0x1a260cu;

    // 0x1a260c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2610: 0x8c72000c  lw          $s2, 0xC($v1)
    ctx->pc = 0x1a2610u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a2614: 0x0  nop
    ctx->pc = 0x1a2614u;
    // NOP
    ctx->pc = 0x1a2618u;
}
