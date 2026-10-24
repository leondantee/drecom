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

// Function: entry_0028cc00
// Address: 0x28cc00 - 0x28cc30
void entry_0028cc00_0x28cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cc00_0x28cc00");
#endif

    ctx->pc = 0x28cc00u;

    // 0x28cc00: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cc04: 0x8c2520f8  lw          $a1, 0x20F8($at)
    ctx->pc = 0x28cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28cc08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cc0c: 0x10a30086  beq         $a1, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x28CC0Cu;
    {
        const bool branch_taken_0x28cc0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x28cc0c) {
            ctx->pc = 0x28CE28u;
            return;
        }
    }
    ctx->pc = 0x28CC14u;
    // 0x28cc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cc18: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x28CC18u;
    {
        const bool branch_taken_0x28cc18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x28cc18) {
            ctx->pc = 0x28CCC8u;
            return;
        }
    }
    ctx->pc = 0x28CC20u;
    // 0x28cc20: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CC20u;
    {
        const bool branch_taken_0x28cc20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cc20) {
            ctx->pc = 0x28CC30u;
            return;
        }
    }
    ctx->pc = 0x28CC28u;
    // 0x28cc28: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x28CC28u;
    {
        const bool branch_taken_0x28cc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cc28) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CC30u;
}
