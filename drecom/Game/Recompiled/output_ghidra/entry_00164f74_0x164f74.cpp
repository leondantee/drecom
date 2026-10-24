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

// Function: entry_00164f74
// Address: 0x164f74 - 0x164f84
void entry_00164f74_0x164f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164f74_0x164f74");
#endif

    ctx->pc = 0x164f74u;

    // 0x164f74: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x164f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x164f78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x164f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x164f7c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x164f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x164f80: 0x0  nop
    ctx->pc = 0x164f80u;
    // NOP
    ctx->pc = 0x164f84u;
}
