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

// Function: entry_001826e8
// Address: 0x1826e8 - 0x182748
void entry_001826e8_0x1826e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001826e8_0x1826e8");
#endif

    ctx->pc = 0x1826e8u;

    // 0x1826e8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1826e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1826ec: 0x3c0442fa  lui         $a0, 0x42FA
    ctx->pc = 0x1826ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17146 << 16));
    // 0x1826f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1826f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1826f4: 0x0  nop
    ctx->pc = 0x1826f4u;
    // NOP
    // 0x1826f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1826f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1826fc: 0x0  nop
    ctx->pc = 0x1826fcu;
    // NOP
    // 0x182700: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x182700u;
    {
        const bool branch_taken_0x182700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182700) {
            ctx->pc = 0x182824u;
            return;
        }
    }
    ctx->pc = 0x182708u;
    // 0x182708: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x182708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18270c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18270cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182710: 0x0  nop
    ctx->pc = 0x182710u;
    // NOP
    // 0x182714: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182718: 0x0  nop
    ctx->pc = 0x182718u;
    // NOP
    // 0x18271c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18271Cu;
    {
        const bool branch_taken_0x18271c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18271c) {
            ctx->pc = 0x182748u;
            return;
        }
    }
    ctx->pc = 0x182724u;
    // 0x182724: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182728: 0xc421f238  lwc1        $f1, -0xDC8($at)
    ctx->pc = 0x182728u;
    { uint32_t bits = FAST_READ32(0x47F238u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18272c: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x18272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x182730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182734: 0x0  nop
    ctx->pc = 0x182734u;
    // NOP
    // 0x182738: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18273c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x18273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x182740: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182740u;
    {
        const bool branch_taken_0x182740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182740) {
            ctx->pc = 0x182760u;
            return;
        }
    }
    ctx->pc = 0x182748u;
}
