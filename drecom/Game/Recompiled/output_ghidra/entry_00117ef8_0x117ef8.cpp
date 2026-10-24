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

// Function: entry_00117ef8
// Address: 0x117ef8 - 0x117efc
void entry_00117ef8_0x117ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117ef8_0x117ef8");
#endif

    ctx->pc = 0x117ef8u;

    // 0x117ef8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x117ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->pc = 0x117efcu;
}
