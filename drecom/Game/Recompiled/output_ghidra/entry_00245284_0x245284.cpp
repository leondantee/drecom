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

// Function: entry_00245284
// Address: 0x245284 - 0x2452d0
void entry_00245284_0x245284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245284_0x245284");
#endif

    ctx->pc = 0x245284u;

    // 0x245284: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x245288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24528c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245290: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245294: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x245294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x245298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24529c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x24529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2452a0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2452a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2452a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2452a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2452a8: 0x0  nop
    ctx->pc = 0x2452a8u;
    // NOP
    // 0x2452ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2452acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2452b0: 0x0  nop
    ctx->pc = 0x2452b0u;
    // NOP
    // 0x2452b4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2452B4u;
    {
        const bool branch_taken_0x2452b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2452b4) {
            ctx->pc = 0x2452D0u;
            return;
        }
    }
    ctx->pc = 0x2452BCu;
    // 0x2452bc: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2452bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x2452c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2452c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2452c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2452c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2452c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2452c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2452cc: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2452ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x2452d0u;
}
