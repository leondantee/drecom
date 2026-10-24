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

// Function: entry_001b07c4
// Address: 0x1b07c4 - 0x1b0824
void entry_001b07c4_0x1b07c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b07c4_0x1b07c4");
#endif

    ctx->pc = 0x1b07c4u;

    // 0x1b07c4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1b07c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b07c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b07c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b07cc: 0x0  nop
    ctx->pc = 0x1b07ccu;
    // NOP
    // 0x1b07d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b07d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b07d4: 0x0  nop
    ctx->pc = 0x1b07d4u;
    // NOP
    // 0x1b07d8: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B07D8u;
    {
        const bool branch_taken_0x1b07d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b07d8) {
            ctx->pc = 0x1B083Cu;
            return;
        }
    }
    ctx->pc = 0x1B07E0u;
    // 0x1b07e0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1b07e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b07e4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1b07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1b07e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b07e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b07ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b07ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b07f0: 0x0  nop
    ctx->pc = 0x1b07f0u;
    // NOP
    // 0x1b07f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b07f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b07f8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b07f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1b07fc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1b07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0804: 0x0  nop
    ctx->pc = 0x1b0804u;
    // NOP
    // 0x1b0808: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b080c: 0x0  nop
    ctx->pc = 0x1b080cu;
    // NOP
    // 0x1b0810: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0810u;
    {
        const bool branch_taken_0x1b0810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0810) {
            ctx->pc = 0x1B0824u;
            return;
        }
    }
    ctx->pc = 0x1B0818u;
    // 0x1b0818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b081c: 0x0  nop
    ctx->pc = 0x1b081cu;
    // NOP
    // 0x1b0820: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b0820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->pc = 0x1b0824u;
}
