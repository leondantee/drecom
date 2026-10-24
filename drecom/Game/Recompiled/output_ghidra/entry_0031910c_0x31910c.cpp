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

// Function: entry_0031910c
// Address: 0x31910c - 0x3191c0
void entry_0031910c_0x31910c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031910c_0x31910c");
#endif

    ctx->pc = 0x31910cu;

    // 0x31910c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319110: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x319110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319114: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x319114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x319118: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x319118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x31911c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31911cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319120: 0x0  nop
    ctx->pc = 0x319120u;
    // NOP
    // 0x319124: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319128: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x319128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x31912c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31912cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319130: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x319130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319134: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x319134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x319138: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x319138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x31913c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31913cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319140: 0x0  nop
    ctx->pc = 0x319140u;
    // NOP
    // 0x319144: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319148: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x319148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x31914c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31914cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319150: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x319150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319154: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x319154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x319158: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x319158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x31915c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31915cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319160: 0x0  nop
    ctx->pc = 0x319160u;
    // NOP
    // 0x319164: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319168: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x319168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x31916c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319170: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x319170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319174: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x319174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x319178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31917c: 0x0  nop
    ctx->pc = 0x31917cu;
    // NOP
    // 0x319180: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x319180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319184: 0x0  nop
    ctx->pc = 0x319184u;
    // NOP
    // 0x319188: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x319188u;
    {
        const bool branch_taken_0x319188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319188) {
            ctx->pc = 0x3191C0u;
            return;
        }
    }
    ctx->pc = 0x319190u;
    // 0x319190: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x319190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x319194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319198: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x319198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31919c: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31919cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x3191a0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x3191a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x3191a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3191a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3191a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3191a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3191ac: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3191acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x3191b0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x3191b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x3191b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3191b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3191b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3191b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3191bc: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3191bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    ctx->pc = 0x3191c0u;
}
