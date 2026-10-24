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

// Function: entry_0036f40c
// Address: 0x36f40c - 0x36f414
void entry_0036f40c_0x36f40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036f40c_0x36f40c");
#endif

    ctx->pc = 0x36f40cu;

    // 0x36f40c: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x36f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958320)));
    // 0x36f410: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x36f414u;
}
