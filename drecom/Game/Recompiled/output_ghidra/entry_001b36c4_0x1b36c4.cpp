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

// Function: entry_001b36c4
// Address: 0x1b36c4 - 0x1b36fc
void entry_001b36c4_0x1b36c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b36c4_0x1b36c4");
#endif

    ctx->pc = 0x1b36c4u;

    // 0x1b36c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b36c8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1b36c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b36cc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1b36ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b36d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b36d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b36d4: 0x0  nop
    ctx->pc = 0x1b36d4u;
    // NOP
    // 0x1b36d8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B36D8u;
    {
        const bool branch_taken_0x1b36d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b36d8) {
            ctx->pc = 0x1B36FCu;
            return;
        }
    }
    ctx->pc = 0x1B36E0u;
    // 0x1b36e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b36e4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1b36e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b36e8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1b36e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b36ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b36ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b36f0: 0x0  nop
    ctx->pc = 0x1b36f0u;
    // NOP
    // 0x1b36f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B36F4u;
    {
        const bool branch_taken_0x1b36f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b36f4) {
            ctx->pc = 0x1B3708u;
            return;
        }
    }
    ctx->pc = 0x1B36FCu;
}
