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

// Function: entry_0024a0cc
// Address: 0x24a0cc - 0x24a0d8
void entry_0024a0cc_0x24a0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a0cc_0x24a0cc");
#endif

    ctx->pc = 0x24a0ccu;

    // 0x24a0cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x24a0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24a0d0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a0d4: 0xa0650029  sb          $a1, 0x29($v1)
    ctx->pc = 0x24a0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x24a0d8u;
}
