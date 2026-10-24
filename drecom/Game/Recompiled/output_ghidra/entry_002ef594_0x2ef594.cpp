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

// Function: entry_002ef594
// Address: 0x2ef594 - 0x2ef6e4
void entry_002ef594_0x2ef594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef594_0x2ef594");
#endif

    ctx->pc = 0x2ef594u;

    // 0x2ef594: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ef594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ef598: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ef598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ef59c: 0x12030051  beq         $s0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2EF59Cu;
    {
        const bool branch_taken_0x2ef59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef59c) {
            ctx->pc = 0x2EF6E4u;
            return;
        }
    }
    ctx->pc = 0x2EF5A4u;
    // 0x2ef5a4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2ef5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ef5a8: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x2ef5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef5ac: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2ef5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2ef5b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef5b4: 0x0  nop
    ctx->pc = 0x2ef5b4u;
    // NOP
    // 0x2ef5b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ef5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ef5bc: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2ef5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2ef5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef5c4: 0x0  nop
    ctx->pc = 0x2ef5c4u;
    // NOP
    // 0x2ef5c8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ef5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ef5cc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ef5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ef5d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef5d4: 0x0  nop
    ctx->pc = 0x2ef5d4u;
    // NOP
    // 0x2ef5d8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ef5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ef5dc: 0x3c0341a8  lui         $v1, 0x41A8
    ctx->pc = 0x2ef5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16808 << 16));
    // 0x2ef5e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef5e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef5e4: 0x0  nop
    ctx->pc = 0x2ef5e4u;
    // NOP
    // 0x2ef5e8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ef5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ef5ec: 0x3c033f7c  lui         $v1, 0x3F7C
    ctx->pc = 0x2ef5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16252 << 16));
    // 0x2ef5f0: 0x346328f6  ori         $v1, $v1, 0x28F6
    ctx->pc = 0x2ef5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10486);
    // 0x2ef5f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef5f8: 0x0  nop
    ctx->pc = 0x2ef5f8u;
    // NOP
    // 0x2ef5fc: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2ef5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2ef600: 0x3c033f7c  lui         $v1, 0x3F7C
    ctx->pc = 0x2ef600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16252 << 16));
    // 0x2ef604: 0x346328f6  ori         $v1, $v1, 0x28F6
    ctx->pc = 0x2ef604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10486);
    // 0x2ef608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef60c: 0x0  nop
    ctx->pc = 0x2ef60cu;
    // NOP
    // 0x2ef610: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2ef610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2ef614: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x2ef614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x2ef618: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x2ef618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x2ef61c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef620: 0x0  nop
    ctx->pc = 0x2ef620u;
    // NOP
    // 0x2ef624: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2ef624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2ef628: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2ef628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2ef62c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ef62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ef630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef634: 0x0  nop
    ctx->pc = 0x2ef634u;
    // NOP
    // 0x2ef638: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x2ef638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x2ef63c: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2ef63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2ef640: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ef640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ef644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef648: 0x0  nop
    ctx->pc = 0x2ef648u;
    // NOP
    // 0x2ef64c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2ef64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2ef650: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2ef650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2ef654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef658: 0x0  nop
    ctx->pc = 0x2ef658u;
    // NOP
    // 0x2ef65c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ef65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ef660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ef660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef664: 0x0  nop
    ctx->pc = 0x2ef664u;
    // NOP
    // 0x2ef668: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ef668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ef66c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2ef66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2ef670: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef674: 0x0  nop
    ctx->pc = 0x2ef674u;
    // NOP
    // 0x2ef678: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ef678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ef67c: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2ef67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2ef680: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2ef680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2ef684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef688: 0x0  nop
    ctx->pc = 0x2ef688u;
    // NOP
    // 0x2ef68c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ef68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ef690: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2ef690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2ef694: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2ef694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2ef698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef69c: 0x0  nop
    ctx->pc = 0x2ef69cu;
    // NOP
    // 0x2ef6a0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ef6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ef6a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ef6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ef6a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef6a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef6ac: 0x0  nop
    ctx->pc = 0x2ef6acu;
    // NOP
    // 0x2ef6b0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ef6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ef6b4: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x2ef6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
    // 0x2ef6b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ef6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef6bc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ef6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef6c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef6c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef6c4: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x2ef6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x2ef6c8: 0x3c03bc23  lui         $v1, 0xBC23
    ctx->pc = 0x2ef6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
    // 0x2ef6cc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ef6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ef6d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef6d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef6d4: 0x0  nop
    ctx->pc = 0x2ef6d4u;
    // NOP
    // 0x2ef6d8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ef6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ef6dc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2ef6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ef6e0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2ef6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x2ef6e4u;
}
