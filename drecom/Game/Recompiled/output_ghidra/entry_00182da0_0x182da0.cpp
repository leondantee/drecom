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

// Function: entry_00182da0
// Address: 0x182da0 - 0x182dc8
void entry_00182da0_0x182da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182da0_0x182da0");
#endif

    ctx->pc = 0x182da0u;

    // 0x182da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182da4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x182da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182da8: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x182da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x182dac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182db0: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x182db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x182db4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182DB4u;
    {
        const bool branch_taken_0x182db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182db4) {
            ctx->pc = 0x182DC8u;
            return;
        }
    }
    ctx->pc = 0x182DBCu;
    // 0x182dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182dc0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182dc4: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x182dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
    ctx->pc = 0x182dc8u;
}
