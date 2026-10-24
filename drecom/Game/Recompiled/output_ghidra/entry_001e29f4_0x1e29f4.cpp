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

// Function: entry_001e29f4
// Address: 0x1e29f4 - 0x1e2a04
void entry_001e29f4_0x1e29f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e29f4_0x1e29f4");
#endif

    ctx->pc = 0x1e29f4u;

    // 0x1e29f4: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x1e29f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e29f8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1e29f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e29fc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1e29fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e2a00: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e2a00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x1e2a04u;
}
