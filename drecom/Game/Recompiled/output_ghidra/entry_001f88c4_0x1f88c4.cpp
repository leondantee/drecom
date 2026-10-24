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

// Function: entry_001f88c4
// Address: 0x1f88c4 - 0x1f8964
void entry_001f88c4_0x1f88c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f88c4_0x1f88c4");
#endif

    ctx->pc = 0x1f88c4u;

    // 0x1f88c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f88c8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f88c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f88cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f88d0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f88d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f88d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f88d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f88dc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f88e0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f88e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f88e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f88e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f88e8: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f88e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f88ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f88ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f88f0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f88f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1f88f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f88f8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f88f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f88fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f88fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8900: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f8900u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f8904: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1f8904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f8908: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F8908u;
    {
        const bool branch_taken_0x1f8908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8908) {
            ctx->pc = 0x1F89D8u;
            return;
        }
    }
    ctx->pc = 0x1F8910u;
    // 0x1f8910: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8914: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8918: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1f8918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f891c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f891cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8920: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8924: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f8924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8928: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f8928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f892c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f892cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f8930: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8934: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8938: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f8938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f893c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f893cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8940: 0x0  nop
    ctx->pc = 0x1f8940u;
    // NOP
    // 0x1f8944: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8948: 0x0  nop
    ctx->pc = 0x1f8948u;
    // NOP
    // 0x1f894c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F894Cu;
    {
        const bool branch_taken_0x1f894c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f894c) {
            ctx->pc = 0x1F8964u;
            return;
        }
    }
    ctx->pc = 0x1F8954u;
    // 0x1f8954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8958: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f895c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8960: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f8960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x1f8964u;
}
