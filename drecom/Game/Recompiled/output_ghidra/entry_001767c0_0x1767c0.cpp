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

// Function: entry_001767c0
// Address: 0x1767c0 - 0x1767ec
void entry_001767c0_0x1767c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001767c0_0x1767c0");
#endif

    ctx->pc = 0x1767c0u;

    // 0x1767c0: 0x87a300cc  lh          $v1, 0xCC($sp)
    ctx->pc = 0x1767c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1767c4: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x1767c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1767c8: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x1767c8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1767cc: 0x151c3c  dsll32      $v1, $s5, 16
    ctx->pc = 0x1767ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 16));
    // 0x1767d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1767d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1767d4: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1767D4u;
    {
        const bool branch_taken_0x1767d4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1767d4) {
            ctx->pc = 0x1767ECu;
            return;
        }
    }
    ctx->pc = 0x1767DCu;
    // 0x1767dc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1767dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1767e0: 0xa7a300ce  sh          $v1, 0xCE($sp)
    ctx->pc = 0x1767e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 206), (uint16_t)GPR_U32(ctx, 3));
    // 0x1767e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1767E4u;
    {
        const bool branch_taken_0x1767e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767e4) {
            ctx->pc = 0x1767F0u;
            return;
        }
    }
    ctx->pc = 0x1767ECu;
}
