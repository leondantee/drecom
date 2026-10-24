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

// Function: entry_003556fc
// Address: 0x3556fc - 0x355704
void entry_003556fc_0x3556fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003556fc_0x3556fc");
#endif

    ctx->pc = 0x3556fcu;

    // 0x3556fc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x3556fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x355700: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x355700u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x355704u;
}
