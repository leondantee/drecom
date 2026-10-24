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

// Function: entry_001841f4
// Address: 0x1841f4 - 0x184200
void entry_001841f4_0x1841f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001841f4_0x1841f4");
#endif

    ctx->pc = 0x1841f4u;

    // 0x1841f4: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1841f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1841f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1841f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1841fc: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x1841fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x184200u;
}
