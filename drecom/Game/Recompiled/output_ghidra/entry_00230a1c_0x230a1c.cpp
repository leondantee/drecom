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

// Function: entry_00230a1c
// Address: 0x230a1c - 0x230a9c
void entry_00230a1c_0x230a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230a1c_0x230a1c");
#endif

    ctx->pc = 0x230a1cu;

    // 0x230a1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a20: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x230a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x230a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x230a28: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x230a28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x230a2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a30: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x230a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x230a34: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x230a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x230a38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x230a38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x230a3c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x230a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x230a40: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x230A40u;
    {
        const bool branch_taken_0x230a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230a40) {
            ctx->pc = 0x230B10u;
            return;
        }
    }
    ctx->pc = 0x230A48u;
    // 0x230a48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230a50: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x230a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230a54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230a5c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x230a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230a60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x230a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x230a64: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x230a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x230a68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230a70: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230a74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230a78: 0x0  nop
    ctx->pc = 0x230a78u;
    // NOP
    // 0x230a7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230a80: 0x0  nop
    ctx->pc = 0x230a80u;
    // NOP
    // 0x230a84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x230A84u;
    {
        const bool branch_taken_0x230a84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230a84) {
            ctx->pc = 0x230A9Cu;
            return;
        }
    }
    ctx->pc = 0x230A8Cu;
    // 0x230a8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230a90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230a98: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x230a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x230a9cu;
}
