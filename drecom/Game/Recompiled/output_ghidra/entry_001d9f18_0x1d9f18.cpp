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

// Function: entry_001d9f18
// Address: 0x1d9f18 - 0x1d9f60
void entry_001d9f18_0x1d9f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9f18_0x1d9f18");
#endif

    ctx->pc = 0x1d9f18u;

    // 0x1d9f18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9f1c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d9f1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9f20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d9f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d9f24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d9f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d9f28: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D9F28u;
    {
        const bool branch_taken_0x1d9f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f28) {
            ctx->pc = 0x1D9F04u;
            return;
        }
    }
    ctx->pc = 0x1D9F30u;
    // 0x1d9f30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9f34: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x1d9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9f38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d9f3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d9f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d9f40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9F40u;
    {
        const bool branch_taken_0x1d9f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f40) {
            ctx->pc = 0x1D9F60u;
            return;
        }
    }
    ctx->pc = 0x1D9F48u;
    // 0x1d9f48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9f4c: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x1d9f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9f50: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1d9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d9f54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d9f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d9f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9F58u;
    {
        const bool branch_taken_0x1d9f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f58) {
            ctx->pc = 0x1D9F78u;
            return;
        }
    }
    ctx->pc = 0x1D9F60u;
}
