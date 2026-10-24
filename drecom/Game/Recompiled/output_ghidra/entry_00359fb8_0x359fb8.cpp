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

// Function: entry_00359fb8
// Address: 0x359fb8 - 0x359fc8
void entry_00359fb8_0x359fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359fb8_0x359fb8");
#endif

    ctx->pc = 0x359fb8u;

    // 0x359fb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359fbc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x359fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x359fc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x359fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x359fc4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x359fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x359fc8u;
}
