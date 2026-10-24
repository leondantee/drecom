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

// Function: entry_00318684
// Address: 0x318684 - 0x31875c
void entry_00318684_0x318684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318684_0x318684");
#endif

    ctx->pc = 0x318684u;

    // 0x318684: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318688: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x318688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31868c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x31868cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x318690: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318698: 0x0  nop
    ctx->pc = 0x318698u;
    // NOP
    // 0x31869c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31869cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3186a0: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x3186a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x3186a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3186a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3186a8: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x3186a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3186ac: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3186acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x3186b0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3186b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3186b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3186b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3186b8: 0x0  nop
    ctx->pc = 0x3186b8u;
    // NOP
    // 0x3186bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3186bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3186c0: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x3186c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x3186c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3186c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3186c8: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x3186c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3186cc: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3186ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x3186d0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3186d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3186d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3186d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3186d8: 0x0  nop
    ctx->pc = 0x3186d8u;
    // NOP
    // 0x3186dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3186dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3186e0: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x3186e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x3186e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3186e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3186e8: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x3186e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3186ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3186ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3186f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3186f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3186f4: 0x0  nop
    ctx->pc = 0x3186f4u;
    // NOP
    // 0x3186f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3186f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3186fc: 0x0  nop
    ctx->pc = 0x3186fcu;
    // NOP
    // 0x318700: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x318700u;
    {
        const bool branch_taken_0x318700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318700) {
            ctx->pc = 0x31875Cu;
            return;
        }
    }
    ctx->pc = 0x318708u;
    // 0x318708: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31870c: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x31870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318710: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318718: 0x0  nop
    ctx->pc = 0x318718u;
    // NOP
    // 0x31871c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31871cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318720: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x318720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x318724: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318728: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x318728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31872c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31872cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318734: 0x0  nop
    ctx->pc = 0x318734u;
    // NOP
    // 0x318738: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31873c: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x31873cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x318740: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318744: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x318744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318748: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31874c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31874cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318750: 0x0  nop
    ctx->pc = 0x318750u;
    // NOP
    // 0x318754: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318758: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x318758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    ctx->pc = 0x31875cu;
}
