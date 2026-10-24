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

// Function: entry_0019f248
// Address: 0x19f248 - 0x19f258
void entry_0019f248_0x19f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f248_0x19f248");
#endif

    ctx->pc = 0x19f248u;

    // 0x19f248: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19f248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934640)));
    // 0x19f24c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f250: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19f250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f254: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19f254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x19f258u;
}
