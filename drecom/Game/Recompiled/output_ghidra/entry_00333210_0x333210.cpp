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

// Function: entry_00333210
// Address: 0x333210 - 0x333218
void entry_00333210_0x333210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333210_0x333210");
#endif

    ctx->pc = 0x333210u;

    // 0x333210: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333214: 0xae235dd4  sw          $v1, 0x5DD4($s1)
    ctx->pc = 0x333214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 3));
    ctx->pc = 0x333218u;
}
