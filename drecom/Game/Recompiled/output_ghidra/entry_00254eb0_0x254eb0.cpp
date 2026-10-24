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

// Function: entry_00254eb0
// Address: 0x254eb0 - 0x254efc
void entry_00254eb0_0x254eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254eb0_0x254eb0");
#endif

    ctx->pc = 0x254eb0u;

    // 0x254eb0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x254eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x254eb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x254eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254eb8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x254eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254ebc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x254ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x254ec0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x254ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x254ec4: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x254EC4u;
    {
        const bool branch_taken_0x254ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254ec4) {
            ctx->pc = 0x254E94u;
            return;
        }
    }
    ctx->pc = 0x254ECCu;
    // 0x254ecc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x254eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x254ed0: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x254ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x254ed4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x254ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x254ed8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x254ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254edc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254EDCu;
    {
        const bool branch_taken_0x254edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254edc) {
            ctx->pc = 0x254EFCu;
            return;
        }
    }
    ctx->pc = 0x254EE4u;
    // 0x254ee4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x254ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x254ee8: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x254ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x254eec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x254eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x254ef0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x254ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254ef4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254EF4u;
    {
        const bool branch_taken_0x254ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254ef4) {
            ctx->pc = 0x254F14u;
            return;
        }
    }
    ctx->pc = 0x254EFCu;
}
