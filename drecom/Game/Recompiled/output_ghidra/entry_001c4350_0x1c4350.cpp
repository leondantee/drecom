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

// Function: entry_001c4350
// Address: 0x1c4350 - 0x1c4388
void entry_001c4350_0x1c4350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4350_0x1c4350");
#endif

    ctx->pc = 0x1c4350u;

    // 0x1c4350: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4354: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1c4354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4358: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c4358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1c435c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c435cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4360: 0x0  nop
    ctx->pc = 0x1c4360u;
    // NOP
    // 0x1c4364: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4368: 0x0  nop
    ctx->pc = 0x1c4368u;
    // NOP
    // 0x1c436c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C436Cu;
    {
        const bool branch_taken_0x1c436c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c436c) {
            ctx->pc = 0x1C4388u;
            return;
        }
    }
    ctx->pc = 0x1C4374u;
    // 0x1c4374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4378: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c437c: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1c437cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c4380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4380u;
    {
        const bool branch_taken_0x1c4380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4380) {
            ctx->pc = 0x1C4390u;
            return;
        }
    }
    ctx->pc = 0x1C4388u;
}
