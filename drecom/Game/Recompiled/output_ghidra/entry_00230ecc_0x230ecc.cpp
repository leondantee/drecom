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

// Function: entry_00230ecc
// Address: 0x230ecc - 0x230f4c
void entry_00230ecc_0x230ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230ecc_0x230ecc");
#endif

    ctx->pc = 0x230eccu;

    // 0x230ecc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ed0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x230ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x230ed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x230ed8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x230ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x230edc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ee0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x230ee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x230ee4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x230ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x230ee8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x230ee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x230eec: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x230eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x230ef0: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x230EF0u;
    {
        const bool branch_taken_0x230ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230ef0) {
            ctx->pc = 0x230FC0u;
            return;
        }
    }
    ctx->pc = 0x230EF8u;
    // 0x230ef8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230efc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f00: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x230f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230f04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f0c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x230f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230f10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x230f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x230f14: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x230f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x230f18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f20: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f28: 0x0  nop
    ctx->pc = 0x230f28u;
    // NOP
    // 0x230f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230f30: 0x0  nop
    ctx->pc = 0x230f30u;
    // NOP
    // 0x230f34: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x230F34u;
    {
        const bool branch_taken_0x230f34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230f34) {
            ctx->pc = 0x230F4Cu;
            return;
        }
    }
    ctx->pc = 0x230F3Cu;
    // 0x230f3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f48: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x230f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x230f4cu;
}
