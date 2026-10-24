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

// Function: entry_0026bbf8
// Address: 0x26bbf8 - 0x26bc48
void entry_0026bbf8_0x26bbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026bbf8_0x26bbf8");
#endif

    ctx->pc = 0x26bbf8u;

    // 0x26bbf8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26bbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bbfc: 0xc4e11b58  lwc1        $f1, 0x1B58($a3)
    ctx->pc = 0x26bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bc00: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x26bc00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x26bc04: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x26bc04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bc08: 0x0  nop
    ctx->pc = 0x26bc08u;
    // NOP
    // 0x26bc0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26bc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26bc10: 0xe4e01b58  swc1        $f0, 0x1B58($a3)
    ctx->pc = 0x26bc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 7000), bits); }
    // 0x26bc14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bc18: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x26bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bc1c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x26bc20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26bc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bc24: 0x0  nop
    ctx->pc = 0x26bc24u;
    // NOP
    // 0x26bc28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26bc28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bc2c: 0x0  nop
    ctx->pc = 0x26bc2cu;
    // NOP
    // 0x26bc30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26BC30u;
    {
        const bool branch_taken_0x26bc30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bc30) {
            ctx->pc = 0x26BC48u;
            return;
        }
    }
    ctx->pc = 0x26BC38u;
    // 0x26bc38: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x26bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x26bc3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x26bc3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bc40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bc44: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    ctx->pc = 0x26bc48u;
}
