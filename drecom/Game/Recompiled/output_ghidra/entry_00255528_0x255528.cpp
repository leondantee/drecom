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

// Function: entry_00255528
// Address: 0x255528 - 0x255554
void entry_00255528_0x255528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255528_0x255528");
#endif

    ctx->pc = 0x255528u;

    // 0x255528: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x255528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25552c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255530: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255530u;
    {
        const bool branch_taken_0x255530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255530) {
            ctx->pc = 0x255554u;
            return;
        }
    }
    ctx->pc = 0x255538u;
    // 0x255538: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25553c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25553cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255540: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x255540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255544: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255548: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255548u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x25554c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25554Cu;
    {
        const bool branch_taken_0x25554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25554c) {
            ctx->pc = 0x255570u;
            return;
        }
    }
    ctx->pc = 0x255554u;
}
