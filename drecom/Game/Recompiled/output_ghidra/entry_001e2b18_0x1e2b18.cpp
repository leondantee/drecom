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

// Function: entry_001e2b18
// Address: 0x1e2b18 - 0x1e2b60
void entry_001e2b18_0x1e2b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2b18_0x1e2b18");
#endif

    ctx->pc = 0x1e2b18u;

    // 0x1e2b18: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2b1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e2b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e2b20: 0x106001d5  beqz        $v1, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1E2B20u;
    {
        const bool branch_taken_0x1e2b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b20) {
            ctx->pc = 0x1E3278u;
            return;
        }
    }
    ctx->pc = 0x1E2B28u;
    // 0x1e2b28: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e2b28u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e2b2c: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2b30: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1e2b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e2b34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2B34u;
    {
        const bool branch_taken_0x1e2b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b34) {
            ctx->pc = 0x1E2B60u;
            return;
        }
    }
    ctx->pc = 0x1E2B3Cu;
    // 0x1e2b3c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e2b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e2b40: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e2b40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e2b44: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x1e2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1e2b48: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x1e2b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e2b4c: 0xafb301dc  sw          $s3, 0x1DC($sp)
    ctx->pc = 0x1e2b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 19));
    // 0x1e2b50: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1e2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e2b54: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e2b54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e2b58: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x1E2B58u;
    {
        const bool branch_taken_0x1e2b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b58) {
            ctx->pc = 0x1E3280u;
            return;
        }
    }
    ctx->pc = 0x1E2B60u;
}
