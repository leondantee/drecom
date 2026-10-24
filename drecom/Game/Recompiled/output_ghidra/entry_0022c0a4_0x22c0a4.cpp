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

// Function: entry_0022c0a4
// Address: 0x22c0a4 - 0x22c0f4
void entry_0022c0a4_0x22c0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c0a4_0x22c0a4");
#endif

    ctx->pc = 0x22c0a4u;

    // 0x22c0a4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c0a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c0ac: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c0b0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x22c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x22c0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c0b8: 0x0  nop
    ctx->pc = 0x22c0b8u;
    // NOP
    // 0x22c0bc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x22c0bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22c0c0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c0c4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c0c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c0c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c0cc: 0x0  nop
    ctx->pc = 0x22c0ccu;
    // NOP
    // 0x22c0d0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22C0D0u;
    {
        const bool branch_taken_0x22c0d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c0d0) {
            ctx->pc = 0x22C0F4u;
            return;
        }
    }
    ctx->pc = 0x22C0D8u;
    // 0x22c0d8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c0dc: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x22c0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c0e0: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x22c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x22c0e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c0e8: 0x0  nop
    ctx->pc = 0x22c0e8u;
    // NOP
    // 0x22c0ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22c0ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c0f0: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22c0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x22c0f4u;
}
