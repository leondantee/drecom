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

// Function: entry_002c7c50
// Address: 0x2c7c50 - 0x2c7c78
void entry_002c7c50_0x2c7c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7c50_0x2c7c50");
#endif

    ctx->pc = 0x2c7c50u;

    // 0x2c7c50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7c58: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x2c7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c7c5c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x2c7c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2c7c60: 0x3063bfff  andi        $v1, $v1, 0xBFFF
    ctx->pc = 0x2c7c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
    // 0x2c7c64: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2c7c64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c7c68: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2c7c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c6c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x2c7c6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2c7c70: 0x3063bfff  andi        $v1, $v1, 0xBFFF
    ctx->pc = 0x2c7c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
    // 0x2c7c74: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2c7c74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2c7c78u;
}
