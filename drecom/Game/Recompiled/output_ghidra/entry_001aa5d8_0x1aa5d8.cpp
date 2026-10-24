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

// Function: entry_001aa5d8
// Address: 0x1aa5d8 - 0x1aa61c
void entry_001aa5d8_0x1aa5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa5d8_0x1aa5d8");
#endif

    ctx->pc = 0x1aa5d8u;

    // 0x1aa5d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5dc: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1aa5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa5e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1aa5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa5e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa5ec: 0x0  nop
    ctx->pc = 0x1aa5ecu;
    // NOP
    // 0x1aa5f0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1AA5F0u;
    {
        const bool branch_taken_0x1aa5f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa5f0) {
            ctx->pc = 0x1AA61Cu;
            return;
        }
    }
    ctx->pc = 0x1AA5F8u;
    // 0x1aa5f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5fc: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1aa5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa600: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa604: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1aa604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1aa608: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa60c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa614: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa618: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1aa618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    ctx->pc = 0x1aa61cu;
}
