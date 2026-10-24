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

// Function: entry_002da468
// Address: 0x2da468 - 0x2da470
void entry_002da468_0x2da468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da468_0x2da468");
#endif

    ctx->pc = 0x2da468u;

    // 0x2da468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da46c: 0xa20200d8  sb          $v0, 0xD8($s0)
    ctx->pc = 0x2da46cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2da470u;
}
