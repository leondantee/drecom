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

// Function: entry_0014f5c0
// Address: 0x14f5c0 - 0x14f6cc
void entry_0014f5c0_0x14f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f5c0_0x14f5c0");
#endif

    switch (ctx->pc) {
        case 0x14f650u: goto label_14f650;
        default: break;
    }

    ctx->pc = 0x14f5c0u;

    // 0x14f5c0: 0x3c02c244  lui         $v0, 0xC244
    ctx->pc = 0x14f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49732 << 16));
    // 0x14f5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f5c8: 0x0  nop
    ctx->pc = 0x14f5c8u;
    // NOP
    // 0x14f5cc: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x14f5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x14f5d0: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x14f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x14f5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f5d8: 0x0  nop
    ctx->pc = 0x14f5d8u;
    // NOP
    // 0x14f5dc: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x14f5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x14f5e0: 0x3c02c282  lui         $v0, 0xC282
    ctx->pc = 0x14f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49794 << 16));
    // 0x14f5e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f5e8: 0x0  nop
    ctx->pc = 0x14f5e8u;
    // NOP
    // 0x14f5ec: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x14f5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x14f5f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f5f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f5f8: 0x0  nop
    ctx->pc = 0x14f5f8u;
    // NOP
    // 0x14f5fc: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x14f5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x14f600: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x14f600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x14f604: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x14f604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x14f608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f60c: 0x0  nop
    ctx->pc = 0x14f60cu;
    // NOP
    // 0x14f610: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x14f610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x14f614: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14f618: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f620: 0x0  nop
    ctx->pc = 0x14f620u;
    // NOP
    // 0x14f624: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x14f624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x14f628: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x14f628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
    // 0x14f62c: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x14f62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x14f630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f634: 0x0  nop
    ctx->pc = 0x14f634u;
    // NOP
    // 0x14f638: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x14f638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x14f63c: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x14f640: 0x24550190  addiu       $s5, $v0, 0x190
    ctx->pc = 0x14f640u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x14f644: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14f644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14f648: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x14F648u;
    SET_GPR_U32(ctx, 31, 0x14F650u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x14F650u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14F650u) { return; }
    ctx->pc = 0x14F650u;
label_14f650:
    // 0x14f650: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x14f654: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x14f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f658: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x14f658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x14f65c: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x14f660: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x14f660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f664: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x14f664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x14f668: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x14f66c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x14f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f670: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x14f670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x14f674: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f67c: 0x0  nop
    ctx->pc = 0x14f67cu;
    // NOP
    // 0x14f680: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x14f680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x14f684: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14f684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x14f688: 0x946202d0  lhu         $v0, 0x2D0($v1)
    ctx->pc = 0x14f688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x14f68c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x14f68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x14f690: 0xa46202d0  sh          $v0, 0x2D0($v1)
    ctx->pc = 0x14f690u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 720), (uint16_t)GPR_U32(ctx, 2));
    // 0x14f694: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x14f694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x14f698: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x14f698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x14f69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f6a0: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x14f6a4: 0xe44002b8  swc1        $f0, 0x2B8($v0)
    ctx->pc = 0x14f6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 696), bits); }
    // 0x14f6a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f6b0: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x14f6b4: 0xe44002bc  swc1        $f0, 0x2BC($v0)
    ctx->pc = 0x14f6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 700), bits); }
    // 0x14f6b8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x14f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x14f6bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x14f6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x14f6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f6c4: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x14f6c8: 0xe44002c0  swc1        $f0, 0x2C0($v0)
    ctx->pc = 0x14f6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 704), bits); }
    ctx->pc = 0x14f6ccu;
}
