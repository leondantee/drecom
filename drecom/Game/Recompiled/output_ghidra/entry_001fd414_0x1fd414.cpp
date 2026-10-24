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

// Function: entry_001fd414
// Address: 0x1fd414 - 0x1fd428
void entry_001fd414_0x1fd414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd414_0x1fd414");
#endif

    ctx->pc = 0x1fd414u;

    // 0x1fd414: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd418: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x1fd418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1fd41c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1fd41cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd420: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1fd420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fd424: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1fd424u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x1fd428u;
}
