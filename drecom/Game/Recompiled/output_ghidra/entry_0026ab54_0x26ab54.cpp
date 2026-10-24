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

// Function: entry_0026ab54
// Address: 0x26ab54 - 0x26abc0
void entry_0026ab54_0x26ab54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ab54_0x26ab54");
#endif

    ctx->pc = 0x26ab54u;

    // 0x26ab54: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ab58: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x26ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ab5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26ab5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ab60: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x26ab60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x26ab64: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x26ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ab68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ab68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ab6c: 0x0  nop
    ctx->pc = 0x26ab6cu;
    // NOP
    // 0x26ab70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ab70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ab74: 0x0  nop
    ctx->pc = 0x26ab74u;
    // NOP
    // 0x26ab78: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x26AB78u;
    {
        const bool branch_taken_0x26ab78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ab78) {
            ctx->pc = 0x26ABC0u;
            return;
        }
    }
    ctx->pc = 0x26AB80u;
    // 0x26ab80: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x26ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ab84: 0x3c023faf  lui         $v0, 0x3FAF
    ctx->pc = 0x26ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16303 << 16));
    // 0x26ab88: 0x3442ede0  ori         $v0, $v0, 0xEDE0
    ctx->pc = 0x26ab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60896);
    // 0x26ab8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ab8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ab90: 0x0  nop
    ctx->pc = 0x26ab90u;
    // NOP
    // 0x26ab94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ab94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ab98: 0x0  nop
    ctx->pc = 0x26ab98u;
    // NOP
    // 0x26ab9c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x26AB9Cu;
    {
        const bool branch_taken_0x26ab9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ab9c) {
            ctx->pc = 0x26ABF8u;
            return;
        }
    }
    ctx->pc = 0x26ABA4u;
    // 0x26aba4: 0x3c023faf  lui         $v0, 0x3FAF
    ctx->pc = 0x26aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16303 << 16));
    // 0x26aba8: 0x3442ede0  ori         $v0, $v0, 0xEDE0
    ctx->pc = 0x26aba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60896);
    // 0x26abac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26abacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26abb0: 0x0  nop
    ctx->pc = 0x26abb0u;
    // NOP
    // 0x26abb4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x26abb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x26abb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26ABB8u;
    {
        const bool branch_taken_0x26abb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26abb8) {
            ctx->pc = 0x26ABF8u;
            return;
        }
    }
    ctx->pc = 0x26ABC0u;
}
