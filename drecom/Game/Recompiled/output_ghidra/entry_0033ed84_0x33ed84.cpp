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

// Function: entry_0033ed84
// Address: 0x33ed84 - 0x33ed94
void entry_0033ed84_0x33ed84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ed84_0x33ed84");
#endif

    ctx->pc = 0x33ed84u;

    // 0x33ed84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed88: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x33ed88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33ed8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33ed90: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x33ed90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x33ed94u;
}
