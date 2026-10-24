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

// Function: entry_003582c0
// Address: 0x3582c0 - 0x3582c8
void entry_003582c0_0x3582c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003582c0_0x3582c0");
#endif

    ctx->pc = 0x3582c0u;

    // 0x3582c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3582c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3582c4: 0xae040280  sw          $a0, 0x280($s0)
    ctx->pc = 0x3582c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 4));
    ctx->pc = 0x3582c8u;
}
