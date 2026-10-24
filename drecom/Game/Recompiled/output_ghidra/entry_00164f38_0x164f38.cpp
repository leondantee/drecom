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

// Function: entry_00164f38
// Address: 0x164f38 - 0x164f44
void entry_00164f38_0x164f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164f38_0x164f38");
#endif

    ctx->pc = 0x164f38u;

    // 0x164f38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x164f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x164f3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x164f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x164f40: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x164f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x164f44u;
}
