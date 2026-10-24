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

// Function: entry_0035d4a0
// Address: 0x35d4a0 - 0x35d4b0
void entry_0035d4a0_0x35d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d4a0_0x35d4a0");
#endif

    ctx->pc = 0x35d4a0u;

    // 0x35d4a0: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x35d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x35d4a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x35d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x35d4a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x35d4a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d4ac: 0x0  nop
    ctx->pc = 0x35d4acu;
    // NOP
    ctx->pc = 0x35d4b0u;
}
