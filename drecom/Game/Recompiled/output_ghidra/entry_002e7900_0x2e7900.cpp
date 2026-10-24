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

// Function: entry_002e7900
// Address: 0x2e7900 - 0x2e790c
void entry_002e7900_0x2e7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7900_0x2e7900");
#endif

    ctx->pc = 0x2e7900u;

    // 0x2e7900: 0x92020082  lbu         $v0, 0x82($s0)
    ctx->pc = 0x2e7900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x2e7904: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7908: 0xa2020082  sb          $v0, 0x82($s0)
    ctx->pc = 0x2e7908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e790cu;
}
