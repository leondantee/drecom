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

// Function: entry_001b6c78
// Address: 0x1b6c78 - 0x1b6cbc
void entry_001b6c78_0x1b6c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6c78_0x1b6c78");
#endif

    ctx->pc = 0x1b6c78u;

    // 0x1b6c78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6c7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c80: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1b6c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
    // 0x1b6c84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c88: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6c8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c90: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1b6c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1b6c94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c98: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1b6c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6c9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ca0: 0xe4801570  swc1        $f0, 0x1570($a0)
    ctx->pc = 0x1b6ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5488), bits); }
    // 0x1b6ca4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ca8: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1b6ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1b6cac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6CACu;
    {
        const bool branch_taken_0x1b6cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cac) {
            ctx->pc = 0x1B6CBCu;
            return;
        }
    }
    ctx->pc = 0x1B6CB4u;
    // 0x1b6cb4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6cb8: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1b6cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1b6cbcu;
}
