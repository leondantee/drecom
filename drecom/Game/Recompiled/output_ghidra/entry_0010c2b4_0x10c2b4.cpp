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

// Function: entry_0010c2b4
// Address: 0x10c2b4 - 0x10c2bc
void entry_0010c2b4_0x10c2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c2b4_0x10c2b4");
#endif

    ctx->pc = 0x10c2b4u;

    // 0x10c2b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10c2b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10c2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    ctx->pc = 0x10c2bcu;
}
