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

// Function: entry_0018e190
// Address: 0x18e190 - 0x18e198
void entry_0018e190_0x18e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e190_0x18e190");
#endif

    ctx->pc = 0x18e190u;

    // 0x18e190: 0x8e310218  lw          $s1, 0x218($s1)
    ctx->pc = 0x18e190u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x18e194: 0x0  nop
    ctx->pc = 0x18e194u;
    // NOP
    ctx->pc = 0x18e198u;
}
