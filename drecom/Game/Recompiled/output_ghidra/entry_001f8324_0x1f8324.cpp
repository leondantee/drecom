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

// Function: entry_001f8324
// Address: 0x1f8324 - 0x1f83c4
void entry_001f8324_0x1f8324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8324_0x1f8324");
#endif

    ctx->pc = 0x1f8324u;

    // 0x1f8324: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8328: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f8328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f832c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f8330: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f8330u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f8334: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8338: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f8338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f833c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f8340: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f8340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f8344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f8344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8348: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f8348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f834c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f834cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f8350: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f8350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1f8354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8358: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f8358u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f835c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f835cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8360: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f8360u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f8364: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1f8364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f8368: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F8368u;
    {
        const bool branch_taken_0x1f8368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8368) {
            ctx->pc = 0x1F8438u;
            return;
        }
    }
    ctx->pc = 0x1F8370u;
    // 0x1f8370: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8374: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8378: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1f8378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f837c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8380: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8384: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f8384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8388: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f8388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f838c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f838cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f8390: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8394: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8398: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f8398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f839c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f839cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f83a0: 0x0  nop
    ctx->pc = 0x1f83a0u;
    // NOP
    // 0x1f83a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f83a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f83a8: 0x0  nop
    ctx->pc = 0x1f83a8u;
    // NOP
    // 0x1f83ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F83ACu;
    {
        const bool branch_taken_0x1f83ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f83ac) {
            ctx->pc = 0x1F83C4u;
            return;
        }
    }
    ctx->pc = 0x1F83B4u;
    // 0x1f83b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f83b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f83b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f83bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f83c0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f83c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x1f83c4u;
}
