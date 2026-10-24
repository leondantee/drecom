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

// Function: entry_00255ee8
// Address: 0x255ee8 - 0x255f14
void entry_00255ee8_0x255ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255ee8_0x255ee8");
#endif

    ctx->pc = 0x255ee8u;

    // 0x255ee8: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x255ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255ef0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255EF0u;
    {
        const bool branch_taken_0x255ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255ef0) {
            ctx->pc = 0x255F14u;
            return;
        }
    }
    ctx->pc = 0x255EF8u;
    // 0x255ef8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255efc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255f00: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x255f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255f04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255f08: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255f08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255f0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x255F0Cu;
    {
        const bool branch_taken_0x255f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f0c) {
            ctx->pc = 0x255F30u;
            return;
        }
    }
    ctx->pc = 0x255F14u;
}
