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

// Function: entry_002cc724
// Address: 0x2cc724 - 0x2cc7c0
void entry_002cc724_0x2cc724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc724_0x2cc724");
#endif

    ctx->pc = 0x2cc724u;

    // 0x2cc724: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc728: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x2cc728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc72c: 0x3c043b0d  lui         $a0, 0x3B0D
    ctx->pc = 0x2cc72cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15117 << 16));
    // 0x2cc730: 0x3490fea2  ori         $s0, $a0, 0xFEA2
    ctx->pc = 0x2cc730u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65186);
    // 0x2cc734: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2cc734u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc738: 0x0  nop
    ctx->pc = 0x2cc738u;
    // NOP
    // 0x2cc73c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cc73cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc740: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x2cc740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x2cc744: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc748: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x2cc748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc74c: 0x3c023a5a  lui         $v0, 0x3A5A
    ctx->pc = 0x2cc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14938 << 16));
    // 0x2cc750: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x2cc750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x2cc754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc758: 0x0  nop
    ctx->pc = 0x2cc758u;
    // NOP
    // 0x2cc75c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cc75cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc760: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x2cc760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x2cc764: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc768: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x2cc768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc76c: 0x3c023b0d  lui         $v0, 0x3B0D
    ctx->pc = 0x2cc76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15117 << 16));
    // 0x2cc770: 0x3442fea2  ori         $v0, $v0, 0xFEA2
    ctx->pc = 0x2cc770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65186);
    // 0x2cc774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc778: 0x0  nop
    ctx->pc = 0x2cc778u;
    // NOP
    // 0x2cc77c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cc77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc780: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x2cc780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x2cc784: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc788: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x2cc788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc78c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc790: 0x0  nop
    ctx->pc = 0x2cc790u;
    // NOP
    // 0x2cc794: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cc794u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc798: 0x0  nop
    ctx->pc = 0x2cc798u;
    // NOP
    // 0x2cc79c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC79Cu;
    {
        const bool branch_taken_0x2cc79c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc79c) {
            ctx->pc = 0x2CC7C0u;
            return;
        }
    }
    ctx->pc = 0x2CC7A4u;
    // 0x2cc7a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cc7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc7a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc7ac: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cc7acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc7b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc7b4: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2cc7b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2cc7b8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2cc7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2cc7bc: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2cc7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2cc7c0u;
}
