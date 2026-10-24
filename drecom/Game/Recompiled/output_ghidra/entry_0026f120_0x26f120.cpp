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

// Function: entry_0026f120
// Address: 0x26f120 - 0x26f130
void entry_0026f120_0x26f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f120_0x26f120");
#endif

    ctx->pc = 0x26f120u;

    // 0x26f120: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f124: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26f124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26f128: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f12c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26f12cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26f130u;
}
