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

// Function: entry_001d9c04
// Address: 0x1d9c04 - 0x1d9c10
void entry_001d9c04_0x1d9c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9c04_0x1d9c04");
#endif

    ctx->pc = 0x1d9c04u;

    // 0x1d9c04: 0x0  nop
    ctx->pc = 0x1d9c04u;
    // NOP
    // 0x1d9c08: 0x24037530  addiu       $v1, $zero, 0x7530
    ctx->pc = 0x1d9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x1d9c0c: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x1d9c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1d9c10u;
}
