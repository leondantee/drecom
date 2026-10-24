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

// Function: entry_0010c9a4
// Address: 0x10c9a4 - 0x10c9b0
void entry_0010c9a4_0x10c9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c9a4_0x10c9a4");
#endif

    ctx->pc = 0x10c9a4u;

    // 0x10c9a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x10c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x10c9a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10c9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10c9ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x10c9b0u;
}
