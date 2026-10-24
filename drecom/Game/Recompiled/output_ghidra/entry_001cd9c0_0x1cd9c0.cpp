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

// Function: entry_001cd9c0
// Address: 0x1cd9c0 - 0x1cd9ec
void entry_001cd9c0_0x1cd9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd9c0_0x1cd9c0");
#endif

    ctx->pc = 0x1cd9c0u;

    // 0x1cd9c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1cd9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cd9c8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD9C8u;
    {
        const bool branch_taken_0x1cd9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd9c8) {
            ctx->pc = 0x1CD9ECu;
            return;
        }
    }
    ctx->pc = 0x1CD9D0u;
    // 0x1cd9d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd9d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9d8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cd9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd9dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9e0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1cd9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1cd9e4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1CD9E4u;
    {
        const bool branch_taken_0x1cd9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd9e4) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CD9ECu;
}
