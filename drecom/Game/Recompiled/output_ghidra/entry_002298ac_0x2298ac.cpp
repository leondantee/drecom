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

// Function: entry_002298ac
// Address: 0x2298ac - 0x2298f8
void entry_002298ac_0x2298ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002298ac_0x2298ac");
#endif

    ctx->pc = 0x2298acu;

    // 0x2298ac: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2298acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2298b0: 0x3c06be32  lui         $a2, 0xBE32
    ctx->pc = 0x2298b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48690 << 16));
    // 0x2298b4: 0x34c5b8c2  ori         $a1, $a2, 0xB8C2
    ctx->pc = 0x2298b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)47298);
    // 0x2298b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2298b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2298bc: 0x0  nop
    ctx->pc = 0x2298bcu;
    // NOP
    // 0x2298c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2298c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2298c4: 0x0  nop
    ctx->pc = 0x2298c4u;
    // NOP
    // 0x2298c8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2298C8u;
    {
        const bool branch_taken_0x2298c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2298c8) {
            ctx->pc = 0x2298F8u;
            return;
        }
    }
    ctx->pc = 0x2298D0u;
    // 0x2298d0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2298d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2298d4: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2298d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2298d8: 0xc501006c  lwc1        $f1, 0x6C($t0)
    ctx->pc = 0x2298d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2298dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2298dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2298e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2298e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2298e4: 0x0  nop
    ctx->pc = 0x2298e4u;
    // NOP
    // 0x2298e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2298e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2298ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2298ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2298f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2298f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2298f4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2298f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x2298f8u;
}
