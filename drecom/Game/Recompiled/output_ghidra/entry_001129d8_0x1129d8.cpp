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

// Function: entry_001129d8
// Address: 0x1129d8 - 0x1129e0
void entry_001129d8_0x1129d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001129d8_0x1129d8");
#endif

    ctx->pc = 0x1129d8u;

    // 0x1129d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1129d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1129dc: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1129dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    ctx->pc = 0x1129e0u;
}
