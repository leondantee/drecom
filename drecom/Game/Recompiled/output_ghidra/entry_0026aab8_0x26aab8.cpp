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

// Function: entry_0026aab8
// Address: 0x26aab8 - 0x26ab24
void entry_0026aab8_0x26aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026aab8_0x26aab8");
#endif

    ctx->pc = 0x26aab8u;

    // 0x26aab8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x26aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x26aabc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x26aabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x26aac0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26aac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26aac4: 0xc6001b50  lwc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aac8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26aac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26aacc: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26aad0: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aad4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26aad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aad8: 0x0  nop
    ctx->pc = 0x26aad8u;
    // NOP
    // 0x26aadc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26aadcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26aae0: 0x0  nop
    ctx->pc = 0x26aae0u;
    // NOP
    // 0x26aae4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x26AAE4u;
    {
        const bool branch_taken_0x26aae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26aae4) {
            ctx->pc = 0x26AB24u;
            return;
        }
    }
    ctx->pc = 0x26AAECu;
    // 0x26aaec: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aaf0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26aaf4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26aaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26aaf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aaf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aafc: 0x0  nop
    ctx->pc = 0x26aafcu;
    // NOP
    // 0x26ab00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ab00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ab04: 0x0  nop
    ctx->pc = 0x26ab04u;
    // NOP
    // 0x26ab08: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x26AB08u;
    {
        const bool branch_taken_0x26ab08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ab08) {
            ctx->pc = 0x26AB54u;
            return;
        }
    }
    ctx->pc = 0x26AB10u;
    // 0x26ab10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ab10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ab14: 0x0  nop
    ctx->pc = 0x26ab14u;
    // NOP
    // 0x26ab18: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26ab18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26ab1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26AB1Cu;
    {
        const bool branch_taken_0x26ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab1c) {
            ctx->pc = 0x26AB54u;
            return;
        }
    }
    ctx->pc = 0x26AB24u;
}
