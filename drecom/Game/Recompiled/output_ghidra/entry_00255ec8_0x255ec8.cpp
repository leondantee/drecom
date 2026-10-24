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

// Function: entry_00255ec8
// Address: 0x255ec8 - 0x255ee8
void entry_00255ec8_0x255ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255ec8_0x255ec8");
#endif

    ctx->pc = 0x255ec8u;

    // 0x255ec8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255ecc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255ed0: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x255ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255ed4: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x255ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x255ed8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255edc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255edcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255ee0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x255EE0u;
    {
        const bool branch_taken_0x255ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255ee0) {
            ctx->pc = 0x255F30u;
            return;
        }
    }
    ctx->pc = 0x255EE8u;
}
