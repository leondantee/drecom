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

// Function: entry_0017cadc
// Address: 0x17cadc - 0x17cb0c
void entry_0017cadc_0x17cadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cadc_0x17cadc");
#endif

    ctx->pc = 0x17cadcu;

    // 0x17cadc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17cae0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x17cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cae4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17cae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17cae8: 0xc420f0f0  lwc1        $f0, -0xF10($at)
    ctx->pc = 0x17cae8u;
    { uint32_t bits = FAST_READ32(0x47F0F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17caec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17caecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17caf0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17caf4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x17caf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17caf8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CAF8u;
    {
        const bool branch_taken_0x17caf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17caf8) {
            ctx->pc = 0x17CB0Cu;
            return;
        }
    }
    ctx->pc = 0x17CB00u;
    // 0x17cb00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cb00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cb04: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17cb08: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x17cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x17cb0cu;
}
