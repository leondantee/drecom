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

// Function: entry_0033e918
// Address: 0x33e918 - 0x33e928
void entry_0033e918_0x33e918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e918_0x33e918");
#endif

    ctx->pc = 0x33e918u;

    // 0x33e918: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x33e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e91c: 0x906210a9  lbu         $v0, 0x10A9($v1)
    ctx->pc = 0x33e91cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4265)));
    // 0x33e920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33e924: 0xa06210a9  sb          $v0, 0x10A9($v1)
    ctx->pc = 0x33e924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4265), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x33e928u;
}
