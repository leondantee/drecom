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

// Function: e2d_id0e_type15
// Address: 0x2b0490 - 0x2b0628
void e2d_id0e_type15_0x2b0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id0e_type15_0x2b0490");
#endif

    ctx->pc = 0x2b0490u;

    // 0x2b0490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b0494: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b0494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b0498: 0x3c03430f  lui         $v1, 0x430F
    ctx->pc = 0x2b0498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17167 << 16));
    // 0x2b049c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b049cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b04a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b04a4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b04a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b04a8: 0x3c03433a  lui         $v1, 0x433A
    ctx->pc = 0x2b04a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17210 << 16));
    // 0x2b04ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b04acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b04b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b04b4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b04b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b04b8: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x2b04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x2b04bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b04bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b04c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b04c4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b04c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b04c8: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2b04c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2b04cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b04ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b04d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b04d4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b04d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b04d8: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2b04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2b04dc: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2b04dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2b04e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b04e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b04e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b04e8: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x2b04e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x2b04ec: 0x3c033f70  lui         $v1, 0x3F70
    ctx->pc = 0x2b04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16240 << 16));
    // 0x2b04f0: 0x3463a3d7  ori         $v1, $v1, 0xA3D7
    ctx->pc = 0x2b04f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41943);
    // 0x2b04f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b04f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b04f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b04fc: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2b04fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2b0500: 0x3c033f70  lui         $v1, 0x3F70
    ctx->pc = 0x2b0500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16240 << 16));
    // 0x2b0504: 0x3463a3d7  ori         $v1, $v1, 0xA3D7
    ctx->pc = 0x2b0504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41943);
    // 0x2b0508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b050c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0510: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x2b0510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x2b0514: 0x3c033f75  lui         $v1, 0x3F75
    ctx->pc = 0x2b0514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16245 << 16));
    // 0x2b0518: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b0518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b051c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b051cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0520: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0524: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b0524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b0528: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x2b0528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x2b052c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b052cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0530: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0534: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b0534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b0538: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x2b0538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
    // 0x2b053c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b053cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b0540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0544: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0548: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2b0548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2b054c: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x2b054cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x2b0550: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2b0550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2b0554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0558: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b055c: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2b055cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2b0560: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2b0560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2b0564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0568: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b056c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b056cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b0570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b0570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0574: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0578: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b0578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b057c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b057cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0580: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0584: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b0584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b0588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b0588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b058c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0590: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b0590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b0594: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2b0594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2b0598: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b0598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b059c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b059cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b05a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b05a4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b05a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b05a8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b05a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b05ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b05acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b05b0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b05b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b05b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b05b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b05b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b05b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b05bc: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b05bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b05c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b05c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b05c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b05c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b05c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b05cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b05d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b05d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b05d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b05d8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b05d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b05dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b05dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b05e0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b05e4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b05e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b05e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b05e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b05ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b05f0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b05f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b05f4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b05f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b05f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b05f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b05fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b05fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0600: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b0600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b0604: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b0604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b0608: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b0608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b060c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2b060cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b0610: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b0610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b0614: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0618: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b0618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b061c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b061cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b0620: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0628u;
}
