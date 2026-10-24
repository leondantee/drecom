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

// Function: entry_001be6a4
// Address: 0x1be6a4 - 0x1be6e8
void entry_001be6a4_0x1be6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be6a4_0x1be6a4");
#endif

    ctx->pc = 0x1be6a4u;

    // 0x1be6a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1be6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be6a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6ac: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1be6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1be6b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6b4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1be6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be6b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6bc: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1be6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1be6c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6c4: 0xc4801568  lwc1        $f0, 0x1568($a0)
    ctx->pc = 0x1be6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be6c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6cc: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1be6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1be6d0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1be6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6d4: 0x8cc31b6c  lw          $v1, 0x1B6C($a2)
    ctx->pc = 0x1be6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7020)));
    // 0x1be6d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE6D8u;
    {
        const bool branch_taken_0x1be6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be6d8) {
            ctx->pc = 0x1BE6E8u;
            return;
        }
    }
    ctx->pc = 0x1BE6E0u;
    // 0x1be6e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6e4: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1be6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1be6e8u;
}
