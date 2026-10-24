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

// Function: entry_0018b688
// Address: 0x18b688 - 0x18b6c4
void entry_0018b688_0x18b688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b688_0x18b688");
#endif

    ctx->pc = 0x18b688u;

    // 0x18b688: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b68c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x18b68cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x18b690: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b694: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x18b694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18b698: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x18B698u;
    {
        const bool branch_taken_0x18b698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b698) {
            ctx->pc = 0x18B5B4u;
            return;
        }
    }
    ctx->pc = 0x18B6A0u;
    // 0x18b6a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x18b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18b6a4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18b6a8: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x18B6A8u;
    {
        const bool branch_taken_0x18b6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b6a8) {
            ctx->pc = 0x18B7D0u;
            return;
        }
    }
    ctx->pc = 0x18B6B0u;
    // 0x18b6b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b6b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6B4u;
    {
        const bool branch_taken_0x18b6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b6b4) {
            ctx->pc = 0x18B6C4u;
            return;
        }
    }
    ctx->pc = 0x18B6BCu;
    // 0x18b6bc: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x18B6BCu;
    {
        const bool branch_taken_0x18b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6bc) {
            ctx->pc = 0x18B8DCu;
            return;
        }
    }
    ctx->pc = 0x18B6C4u;
}
