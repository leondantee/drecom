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

// Function: entry_00326804
// Address: 0x326804 - 0x326988
void entry_00326804_0x326804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326804_0x326804");
#endif

    ctx->pc = 0x326804u;

    // 0x326804: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x326804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326808: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32680c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x32680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326810: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326814: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326818: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x326818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32681c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x32681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326820: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326824: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326828: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x326828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x32682c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32682cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326830: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326838: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x32683c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326844: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326848: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32684c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326850: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326854: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326858: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32685c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x32685cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326860: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326864: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326868: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x32686c: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x32686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326870: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326874: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326878: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32687c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x32687cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x326880: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326884: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326888: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32688c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326890: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326894: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32689c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x32689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3268a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3268a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3268a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3268a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3268a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3268a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3268ac: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x3268acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x3268b0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x3268b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3268b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3268b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3268b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3268b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3268bc: 0x0  nop
    ctx->pc = 0x3268bcu;
    // NOP
    // 0x3268c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3268c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3268c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3268c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3268c8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3268c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3268cc: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x3268ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3268d0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3268d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3268d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3268d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3268d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3268d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3268dc: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x3268dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x3268e0: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x3268e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3268e4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x3268e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3268e8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x3268e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3268ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3268ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3268f0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3268f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3268f4: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x3268f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3268f8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3268f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3268fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3268fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326904: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326908: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32690c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32690cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326910: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326914: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326918: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32691c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326920: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326924: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326928: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x32692c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x32692cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326930: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326938: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x32693c: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x32693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326940: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326944: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326948: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32694c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x32694cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x326950: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326954: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326958: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32695c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326960: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326964: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32696c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x32696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326970: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326974: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32697c: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x32697cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326980: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x326980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x326984: 0x0  nop
    ctx->pc = 0x326984u;
    // NOP
    ctx->pc = 0x326988u;
}
