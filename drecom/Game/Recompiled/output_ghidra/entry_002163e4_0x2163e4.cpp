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

// Function: entry_002163e4
// Address: 0x2163e4 - 0x2163f0
void entry_002163e4_0x2163e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002163e4_0x2163e4");
#endif

    ctx->pc = 0x2163e4u;

    // 0x2163e4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2163e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2163e8: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x2163e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x2163ec: 0x2484c8c0  addiu       $a0, $a0, -0x3740
    ctx->pc = 0x2163ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953152));
    ctx->pc = 0x2163f0u;
}
