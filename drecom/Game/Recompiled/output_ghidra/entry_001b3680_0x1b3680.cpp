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

// Function: entry_001b3680
// Address: 0x1b3680 - 0x1b36b8
void entry_001b3680_0x1b3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3680_0x1b3680");
#endif

    ctx->pc = 0x1b3680u;

    // 0x1b3680: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b3680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b3684: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b3684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3688: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1b3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b368c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b368cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3690: 0x0  nop
    ctx->pc = 0x1b3690u;
    // NOP
    // 0x1b3694: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3694u;
    {
        const bool branch_taken_0x1b3694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3694) {
            ctx->pc = 0x1B36B8u;
            return;
        }
    }
    ctx->pc = 0x1B369Cu;
    // 0x1b369c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b36a0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1b36a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b36a4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1b36a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b36a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b36a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b36ac: 0x0  nop
    ctx->pc = 0x1b36acu;
    // NOP
    // 0x1b36b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B36B0u;
    {
        const bool branch_taken_0x1b36b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b36b0) {
            ctx->pc = 0x1B36C4u;
            return;
        }
    }
    ctx->pc = 0x1B36B8u;
}
