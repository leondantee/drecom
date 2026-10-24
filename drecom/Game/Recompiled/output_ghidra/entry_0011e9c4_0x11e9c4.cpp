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

// Function: entry_0011e9c4
// Address: 0x11e9c4 - 0x11e9cc
void entry_0011e9c4_0x11e9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e9c4_0x11e9c4");
#endif

    ctx->pc = 0x11e9c4u;

    // 0x11e9c4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x11e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e9c8: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x11e9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    ctx->pc = 0x11e9ccu;
}
