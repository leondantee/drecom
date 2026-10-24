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

// Function: entry_0026ac1c
// Address: 0x26ac1c - 0x26ac78
void entry_0026ac1c_0x26ac1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ac1c_0x26ac1c");
#endif

    ctx->pc = 0x26ac1cu;

    // 0x26ac1c: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ac20: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26ac24: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26ac28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ac28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ac2c: 0x0  nop
    ctx->pc = 0x26ac2cu;
    // NOP
    // 0x26ac30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ac30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ac34: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ac34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26ac38: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ac3c: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x26ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x26ac40: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26ac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26ac44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ac44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ac48: 0x0  nop
    ctx->pc = 0x26ac48u;
    // NOP
    // 0x26ac4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ac4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ac50: 0x0  nop
    ctx->pc = 0x26ac50u;
    // NOP
    // 0x26ac54: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x26AC54u;
    {
        const bool branch_taken_0x26ac54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ac54) {
            ctx->pc = 0x26AD70u;
            return;
        }
    }
    ctx->pc = 0x26AC5Cu;
    // 0x26ac5c: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x26ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x26ac60: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26ac64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ac64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ac68: 0x0  nop
    ctx->pc = 0x26ac68u;
    // NOP
    // 0x26ac6c: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ac6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26ac70: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26AC70u;
    {
        const bool branch_taken_0x26ac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ac70) {
            ctx->pc = 0x26AD70u;
            return;
        }
    }
    ctx->pc = 0x26AC78u;
}
