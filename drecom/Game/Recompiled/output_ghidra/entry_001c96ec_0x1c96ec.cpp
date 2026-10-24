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

// Function: entry_001c96ec
// Address: 0x1c96ec - 0x1c96fc
void entry_001c96ec_0x1c96ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c96ec_0x1c96ec");
#endif

    ctx->pc = 0x1c96ecu;

    // 0x1c96ec: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c96ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c96f0: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c96f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c96f4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c96f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c96f8: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c96f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c96fcu;
}
