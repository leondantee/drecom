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

// Function: entry_001b52a0
// Address: 0x1b52a0 - 0x1b52d8
void entry_001b52a0_0x1b52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b52a0_0x1b52a0");
#endif

    ctx->pc = 0x1b52a0u;

    // 0x1b52a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b52a4: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1b52a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b52a8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1b52ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b52acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b52b0: 0x0  nop
    ctx->pc = 0x1b52b0u;
    // NOP
    // 0x1b52b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b52b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b52b8: 0x0  nop
    ctx->pc = 0x1b52b8u;
    // NOP
    // 0x1b52bc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B52BCu;
    {
        const bool branch_taken_0x1b52bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b52bc) {
            ctx->pc = 0x1B52D8u;
            return;
        }
    }
    ctx->pc = 0x1B52C4u;
    // 0x1b52c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b52c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b52cc: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1b52ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b52d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B52D0u;
    {
        const bool branch_taken_0x1b52d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b52d0) {
            ctx->pc = 0x1B52E0u;
            return;
        }
    }
    ctx->pc = 0x1B52D8u;
}
