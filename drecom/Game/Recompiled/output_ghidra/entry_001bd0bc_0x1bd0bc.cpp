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

// Function: entry_001bd0bc
// Address: 0x1bd0bc - 0x1bd100
void entry_001bd0bc_0x1bd0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd0bc_0x1bd0bc");
#endif

    ctx->pc = 0x1bd0bcu;

    // 0x1bd0bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bd0bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd0c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd0c4: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1bd0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1bd0c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd0cc: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1bd0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd0d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd0d4: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1bd0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1bd0d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd0dc: 0xc4801568  lwc1        $f0, 0x1568($a0)
    ctx->pc = 0x1bd0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd0e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd0e4: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1bd0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1bd0e8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd0ec: 0x8ca41b6c  lw          $a0, 0x1B6C($a1)
    ctx->pc = 0x1bd0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7020)));
    // 0x1bd0f0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD0F0u;
    {
        const bool branch_taken_0x1bd0f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd0f0) {
            ctx->pc = 0x1BD100u;
            return;
        }
    }
    ctx->pc = 0x1BD0F8u;
    // 0x1bd0f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd0fc: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1bd0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1bd100u;
}
