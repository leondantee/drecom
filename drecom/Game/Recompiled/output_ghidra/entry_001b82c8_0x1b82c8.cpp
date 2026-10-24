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

// Function: entry_001b82c8
// Address: 0x1b82c8 - 0x1b830c
void entry_001b82c8_0x1b82c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b82c8_0x1b82c8");
#endif

    ctx->pc = 0x1b82c8u;

    // 0x1b82c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b82c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b82cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82d0: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1b82d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1b82d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82d8: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b82d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b82dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b82dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82e0: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1b82e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
    // 0x1b82e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82e8: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1b82e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b82ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b82ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82f0: 0xe4a01570  swc1        $f0, 0x1570($a1)
    ctx->pc = 0x1b82f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5488), bits); }
    // 0x1b82f4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b82f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82f8: 0x8cc71b6c  lw          $a3, 0x1B6C($a2)
    ctx->pc = 0x1b82f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7020)));
    // 0x1b82fc: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B82FCu;
    {
        const bool branch_taken_0x1b82fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b82fc) {
            ctx->pc = 0x1B830Cu;
            return;
        }
    }
    ctx->pc = 0x1B8304u;
    // 0x1b8304: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b8304u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8308: 0xa5001574  sh          $zero, 0x1574($t0)
    ctx->pc = 0x1b8308u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5492), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1b830cu;
}
