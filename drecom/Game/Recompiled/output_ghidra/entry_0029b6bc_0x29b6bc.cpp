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

// Function: entry_0029b6bc
// Address: 0x29b6bc - 0x29b6c0
void entry_0029b6bc_0x29b6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b6bc_0x29b6bc");
#endif

    ctx->pc = 0x29b6bcu;

    // 0x29b6bc: 0xffa001c8  sd          $zero, 0x1C8($sp)
    ctx->pc = 0x29b6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 0));
    ctx->pc = 0x29b6c0u;
}
