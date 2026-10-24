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

// Function: entry_0013c6c8
// Address: 0x13c6c8 - 0x13c6f8
void entry_0013c6c8_0x13c6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c6c8_0x13c6c8");
#endif

    ctx->pc = 0x13c6c8u;

    // 0x13c6c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c6cc: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x13c6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13c6d0: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x13c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x13c6d4: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x13c6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x13c6d8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C6D8u;
    {
        const bool branch_taken_0x13c6d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6d8) {
            ctx->pc = 0x13C6F8u;
            return;
        }
    }
    ctx->pc = 0x13C6E0u;
    // 0x13c6e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13c6e4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x13c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x13c6e8: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x13c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13c6ec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c6f4: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    ctx->pc = 0x13c6f8u;
}
