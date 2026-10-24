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

// Function: entry_001a7c50
// Address: 0x1a7c50 - 0x1a7c60
void entry_001a7c50_0x1a7c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7c50_0x1a7c50");
#endif

    ctx->pc = 0x1a7c50u;

    // 0x1a7c50: 0x82030310  lb          $v1, 0x310($s0)
    ctx->pc = 0x1a7c50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7c54: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x1a7c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a7c58: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a7c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a7c5c: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x1a7c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1a7c60u;
}
