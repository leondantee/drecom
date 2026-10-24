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

// Function: entry_001f2790
// Address: 0x1f2790 - 0x1f284c
void entry_001f2790_0x1f2790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2790_0x1f2790");
#endif

    ctx->pc = 0x1f2790u;

    // 0x1f2790: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2794: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f2794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f2798: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f2798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f279c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f279cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f27a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f27a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f27a4: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x1f27a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f27a8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1f27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x1f27ac: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1f27acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1f27b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f27b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f27b4: 0x0  nop
    ctx->pc = 0x1f27b4u;
    // NOP
    // 0x1f27b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f27b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f27bc: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x1f27bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x1f27c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f27c4: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x1f27c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f27c8: 0x3c033b75  lui         $v1, 0x3B75
    ctx->pc = 0x1f27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15221 << 16));
    // 0x1f27cc: 0x3463c290  ori         $v1, $v1, 0xC290
    ctx->pc = 0x1f27ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49808);
    // 0x1f27d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f27d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f27d4: 0x0  nop
    ctx->pc = 0x1f27d4u;
    // NOP
    // 0x1f27d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f27d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f27dc: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x1f27dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x1f27e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f27e4: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x1f27e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f27e8: 0x3c033b75  lui         $v1, 0x3B75
    ctx->pc = 0x1f27e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15221 << 16));
    // 0x1f27ec: 0x3463c290  ori         $v1, $v1, 0xC290
    ctx->pc = 0x1f27ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49808);
    // 0x1f27f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f27f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f27f4: 0x0  nop
    ctx->pc = 0x1f27f4u;
    // NOP
    // 0x1f27f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f27f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f27fc: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x1f27fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x1f2800: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f2800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2804: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1f2804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1f2808: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f2808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f280c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1f280cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2810: 0x148000ce  bnez        $a0, . + 4 + (0xCE << 2)
    ctx->pc = 0x1F2810u;
    {
        const bool branch_taken_0x1f2810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2810) {
            ctx->pc = 0x1F2B4Cu;
            return;
        }
    }
    ctx->pc = 0x1F2818u;
    // 0x1f2818: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f2818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f281c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2820: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f2820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f2824: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2828: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x1f2828u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f282c: 0x3c033d81  lui         $v1, 0x3D81
    ctx->pc = 0x1f282cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15745 << 16));
    // 0x1f2830: 0x3463fabc  ori         $v1, $v1, 0xFABC
    ctx->pc = 0x1f2830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64188);
    // 0x1f2834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2838: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f283c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f283cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2840: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f2840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f2844: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1F2844u;
    {
        const bool branch_taken_0x1f2844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2844) {
            ctx->pc = 0x1F2B4Cu;
            return;
        }
    }
    ctx->pc = 0x1F284Cu;
}
