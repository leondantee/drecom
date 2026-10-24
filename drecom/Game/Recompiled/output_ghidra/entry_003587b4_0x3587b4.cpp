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

// Function: entry_003587b4
// Address: 0x3587b4 - 0x3587bc
void entry_003587b4_0x3587b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003587b4_0x3587b4");
#endif

    ctx->pc = 0x3587b4u;

    // 0x3587b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3587b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3587b8: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x3587b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
    ctx->pc = 0x3587bcu;
}
