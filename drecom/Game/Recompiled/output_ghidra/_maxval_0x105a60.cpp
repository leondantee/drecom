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

// Function: _maxval
// Address: 0x105a60 - 0x105a64
void _maxval_0x105a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_maxval_0x105a60");
#endif

    ctx->pc = 0x105a60u;

    // 0x105a60: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x105a60u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    ctx->pc = 0x105a64u;
}
