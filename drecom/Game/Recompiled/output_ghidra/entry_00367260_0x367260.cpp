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

// Function: entry_00367260
// Address: 0x367260 - 0x367270
void entry_00367260_0x367260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00367260_0x367260");
#endif

    ctx->pc = 0x367260u;

    // 0x367260: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x367260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367264: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x367268: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36726c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x36726cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x367270u;
}
