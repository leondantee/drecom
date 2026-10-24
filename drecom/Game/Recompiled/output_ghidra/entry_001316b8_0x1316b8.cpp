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

// Function: entry_001316b8
// Address: 0x1316b8 - 0x1316c8
void entry_001316b8_0x1316b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001316b8_0x1316b8");
#endif

    ctx->pc = 0x1316b8u;

    // 0x1316b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1316b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316bc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1316bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1316c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1316c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1316c4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1316c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1316c8u;
}
