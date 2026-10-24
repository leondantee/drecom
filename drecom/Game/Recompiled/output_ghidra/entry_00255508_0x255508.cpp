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

// Function: entry_00255508
// Address: 0x255508 - 0x255528
void entry_00255508_0x255508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255508_0x255508");
#endif

    ctx->pc = 0x255508u;

    // 0x255508: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25550c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25550cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255510: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x255510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255514: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x255514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x255518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25551c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x25551cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255520: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x255520u;
    {
        const bool branch_taken_0x255520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255520) {
            ctx->pc = 0x255570u;
            return;
        }
    }
    ctx->pc = 0x255528u;
}
