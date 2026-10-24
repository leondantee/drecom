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

// Function: entry_00117468
// Address: 0x117468 - 0x117470
void entry_00117468_0x117468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117468_0x117468");
#endif

    ctx->pc = 0x117468u;

    // 0x117468: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x117468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11746c: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x11746cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->pc = 0x117470u;
}
