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

// Function: entry_0010b5bc
// Address: 0x10b5bc - 0x10b5c0
void entry_0010b5bc_0x10b5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b5bc_0x10b5bc");
#endif

    ctx->pc = 0x10b5bcu;

    // 0x10b5bc: 0xad843d20  sw          $a0, 0x3D20($t4)
    ctx->pc = 0x10b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 15648), GPR_U32(ctx, 4));
    ctx->pc = 0x10b5c0u;
}
