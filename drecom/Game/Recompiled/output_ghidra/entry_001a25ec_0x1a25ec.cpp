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

// Function: entry_001a25ec
// Address: 0x1a25ec - 0x1a260c
void entry_001a25ec_0x1a25ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a25ec_0x1a25ec");
#endif

    ctx->pc = 0x1a25ecu;

    // 0x1a25ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a25f0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a25f4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1a25f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a25f8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A25F8u;
    {
        const bool branch_taken_0x1a25f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a25f8) {
            ctx->pc = 0x1A260Cu;
            return;
        }
    }
    ctx->pc = 0x1A2600u;
    // 0x1a2600: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a2600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2604u;
    {
        const bool branch_taken_0x1a2604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2604) {
            ctx->pc = 0x1A2618u;
            return;
        }
    }
    ctx->pc = 0x1A260Cu;
}
