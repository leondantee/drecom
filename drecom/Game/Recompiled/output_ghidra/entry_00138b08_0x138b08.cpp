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

// Function: entry_00138b08
// Address: 0x138b08 - 0x138b38
void entry_00138b08_0x138b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b08_0x138b08");
#endif

    ctx->pc = 0x138b08u;

    // 0x138b08: 0x2a03000b  slti        $v1, $s0, 0xB
    ctx->pc = 0x138b08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x138b0c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x138B0Cu;
    {
        const bool branch_taken_0x138b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138b0c) {
            ctx->pc = 0x138ABCu;
            return;
        }
    }
    ctx->pc = 0x138B14u;
    // 0x138b14: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138b18: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x138b18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x138b1c: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x138b1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x138b20: 0x32500020  andi        $s0, $s2, 0x20
    ctx->pc = 0x138b20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x138b24: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x138B24u;
    {
        const bool branch_taken_0x138b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b24) {
            ctx->pc = 0x138B94u;
            return;
        }
    }
    ctx->pc = 0x138B2Cu;
    // 0x138b2c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138b2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138b30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x138B30u;
    {
        const bool branch_taken_0x138b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b30) {
            ctx->pc = 0x138B80u;
            return;
        }
    }
    ctx->pc = 0x138B38u;
}
