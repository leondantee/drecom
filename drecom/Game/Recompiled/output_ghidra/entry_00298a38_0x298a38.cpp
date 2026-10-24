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

// Function: entry_00298a38
// Address: 0x298a38 - 0x298a48
void entry_00298a38_0x298a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298a38_0x298a38");
#endif

    ctx->pc = 0x298a38u;

    // 0x298a38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a3c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x298a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x298a40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x298a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x298a44: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x298a44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x298a48u;
}
