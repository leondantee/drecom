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

// Function: entry_0011ff08
// Address: 0x11ff08 - 0x11ff14
void entry_0011ff08_0x11ff08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ff08_0x11ff08");
#endif

    ctx->pc = 0x11ff08u;

    // 0x11ff08: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x11ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11ff0c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x11ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11ff10: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x11ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    ctx->pc = 0x11ff14u;
}
