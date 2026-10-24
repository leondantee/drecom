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

// Function: entry_0022a410
// Address: 0x22a410 - 0x22a4b8
void entry_0022a410_0x22a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a410_0x22a410");
#endif

    ctx->pc = 0x22a410u;

    // 0x22a410: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22a410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22a414: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x22a414u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x22a418: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x22a418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x22a41c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x22a41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x22a420: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22a420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22a424: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x22A424u;
    {
        const bool branch_taken_0x22a424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a424) {
            ctx->pc = 0x22A4B8u;
            return;
        }
    }
    ctx->pc = 0x22A42Cu;
    // 0x22a42c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a430: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x22a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a434: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x22a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x22a438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a43c: 0x0  nop
    ctx->pc = 0x22a43cu;
    // NOP
    // 0x22a440: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22a440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a444: 0x0  nop
    ctx->pc = 0x22a444u;
    // NOP
    // 0x22a448: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x22A448u;
    {
        const bool branch_taken_0x22a448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a448) {
            ctx->pc = 0x22A4B8u;
            return;
        }
    }
    ctx->pc = 0x22A450u;
    // 0x22a450: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22a450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x22a454: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22a454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22a458: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22a45c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22a45cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a460: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22a460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22a464: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a468: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22a468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a46c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a46cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a470: 0x0  nop
    ctx->pc = 0x22a470u;
    // NOP
    // 0x22a474: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x22A474u;
    {
        const bool branch_taken_0x22a474 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a474) {
            ctx->pc = 0x22A4B8u;
            return;
        }
    }
    ctx->pc = 0x22A47Cu;
    // 0x22a47c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a480: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x22a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a484: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22a488: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22a488u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a48c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22a48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a490: 0x0  nop
    ctx->pc = 0x22a490u;
    // NOP
    // 0x22a494: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22A494u;
    {
        const bool branch_taken_0x22a494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a494) {
            ctx->pc = 0x22A4B8u;
            return;
        }
    }
    ctx->pc = 0x22A49Cu;
    // 0x22a49c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a4a0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x22a4a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x22a4a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A4A4u;
    {
        const bool branch_taken_0x22a4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a4a4) {
            ctx->pc = 0x22A4B8u;
            return;
        }
    }
    ctx->pc = 0x22A4ACu;
    // 0x22a4ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22a4b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a4b4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22a4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x22a4b8u;
}
