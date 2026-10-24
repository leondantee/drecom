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

// Function: entry_00164ff0
// Address: 0x164ff0 - 0x164ffc
void entry_00164ff0_0x164ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164ff0_0x164ff0");
#endif

    ctx->pc = 0x164ff0u;

    // 0x164ff0: 0x24635490  addiu       $v1, $v1, 0x5490
    ctx->pc = 0x164ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21648));
    // 0x164ff4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164ff8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x164ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x164ffcu;
}
