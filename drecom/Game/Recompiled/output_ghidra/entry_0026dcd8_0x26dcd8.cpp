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

// Function: entry_0026dcd8
// Address: 0x26dcd8 - 0x26dd34
void entry_0026dcd8_0x26dcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026dcd8_0x26dcd8");
#endif

    ctx->pc = 0x26dcd8u;

    // 0x26dcd8: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dcdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26dcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dce0: 0x0  nop
    ctx->pc = 0x26dce0u;
    // NOP
    // 0x26dce4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26dce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dce8: 0x0  nop
    ctx->pc = 0x26dce8u;
    // NOP
    // 0x26dcec: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x26DCECu;
    {
        const bool branch_taken_0x26dcec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dcec) {
            ctx->pc = 0x26DD48u;
            return;
        }
    }
    ctx->pc = 0x26DCF4u;
    // 0x26dcf4: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dcf8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26dcfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dcfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd00: 0x0  nop
    ctx->pc = 0x26dd00u;
    // NOP
    // 0x26dd04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26dd04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dd08: 0x0  nop
    ctx->pc = 0x26dd08u;
    // NOP
    // 0x26dd0c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x26DD0Cu;
    {
        const bool branch_taken_0x26dd0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dd0c) {
            ctx->pc = 0x26DD34u;
            return;
        }
    }
    ctx->pc = 0x26DD14u;
    // 0x26dd14: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dd18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26dd1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dd1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd20: 0x0  nop
    ctx->pc = 0x26dd20u;
    // NOP
    // 0x26dd24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26dd24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26dd28: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
    // 0x26dd2c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26DD2Cu;
    {
        const bool branch_taken_0x26dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd2c) {
            ctx->pc = 0x26DD94u;
            return;
        }
    }
    ctx->pc = 0x26DD34u;
}
