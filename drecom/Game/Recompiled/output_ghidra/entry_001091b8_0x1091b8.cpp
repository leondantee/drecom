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

// Function: entry_001091b8
// Address: 0x1091b8 - 0x1091c4
void entry_001091b8_0x1091b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001091b8_0x1091b8");
#endif

    ctx->pc = 0x1091b8u;

    // 0x1091b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1091b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1091bc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1091bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1091c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1091c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->pc = 0x1091c4u;
}
