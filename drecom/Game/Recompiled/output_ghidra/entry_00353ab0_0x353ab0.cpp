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

// Function: entry_00353ab0
// Address: 0x353ab0 - 0x353b24
void entry_00353ab0_0x353ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00353ab0_0x353ab0");
#endif

    ctx->pc = 0x353ab0u;

    // 0x353ab0: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x353ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353ab4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x353ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x353ab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353ab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353abc: 0x0  nop
    ctx->pc = 0x353abcu;
    // NOP
    // 0x353ac0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x353ac0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353ac4: 0x0  nop
    ctx->pc = 0x353ac4u;
    // NOP
    // 0x353ac8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x353AC8u;
    {
        const bool branch_taken_0x353ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x353ac8) {
            ctx->pc = 0x353B24u;
            return;
        }
    }
    ctx->pc = 0x353AD0u;
    // 0x353ad0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353ad4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353ad8: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x353ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353adc: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x353adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x353ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353ae4: 0x0  nop
    ctx->pc = 0x353ae4u;
    // NOP
    // 0x353ae8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x353ae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353aec: 0x0  nop
    ctx->pc = 0x353aecu;
    // NOP
    // 0x353af0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x353AF0u;
    {
        const bool branch_taken_0x353af0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x353af0) {
            ctx->pc = 0x353B24u;
            return;
        }
    }
    ctx->pc = 0x353AF8u;
    // 0x353af8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353afc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353b00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353b04: 0xa0640078  sb          $a0, 0x78($v1)
    ctx->pc = 0x353b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 4));
    // 0x353b08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353b0c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x353b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x353b10: 0x24703840  addiu       $s0, $v1, 0x3840
    ctx->pc = 0x353b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x353b14: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x353b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x353b18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353b1c: 0x0  nop
    ctx->pc = 0x353b1cu;
    // NOP
    // 0x353b20: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x353b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->pc = 0x353b24u;
}
