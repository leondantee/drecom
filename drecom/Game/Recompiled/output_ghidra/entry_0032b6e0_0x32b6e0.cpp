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

// Function: entry_0032b6e0
// Address: 0x32b6e0 - 0x32b710
void entry_0032b6e0_0x32b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b6e0_0x32b6e0");
#endif

    ctx->pc = 0x32b6e0u;

    // 0x32b6e0: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32b6e4: 0x2462b350  addiu       $v0, $v1, -0x4CB0
    ctx->pc = 0x32b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947664));
    // 0x32b6e8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32b6e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b6ec: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32b6f0: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x32b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x32b6f4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32b6f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b6f8: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32b6fc: 0x2462b710  addiu       $v0, $v1, -0x48F0
    ctx->pc = 0x32b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
    // 0x32b700: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x32b700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x32b704: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x32b704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x32b708: 0x1000025f  b           . + 4 + (0x25F << 2)
    ctx->pc = 0x32B708u;
    {
        const bool branch_taken_0x32b708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b708) {
            ctx->pc = 0x32C088u;
            return;
        }
    }
    ctx->pc = 0x32B710u;
}
