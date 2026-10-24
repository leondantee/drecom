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

// Function: entry_001ce0c8
// Address: 0x1ce0c8 - 0x1ce110
void entry_001ce0c8_0x1ce0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce0c8_0x1ce0c8");
#endif

    ctx->pc = 0x1ce0c8u;

    // 0x1ce0c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce0cc: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1ce0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1ce0d0: 0x106001f7  beqz        $v1, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x1CE0D0u;
    {
        const bool branch_taken_0x1ce0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0d0) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE0D8u;
    // 0x1ce0d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce0dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ce0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ce0e0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ce0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ce0e4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ce0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce0e8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CE0E8u;
    {
        const bool branch_taken_0x1ce0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0e8) {
            ctx->pc = 0x1CE158u;
            return;
        }
    }
    ctx->pc = 0x1CE0F0u;
    // 0x1ce0f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce0f4: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1ce0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ce0f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE0F8u;
    {
        const bool branch_taken_0x1ce0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0f8) {
            ctx->pc = 0x1CE110u;
            return;
        }
    }
    ctx->pc = 0x1CE100u;
    // 0x1ce100: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce104: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce108: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x1CE108u;
    {
        const bool branch_taken_0x1ce108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce108) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE110u;
}
