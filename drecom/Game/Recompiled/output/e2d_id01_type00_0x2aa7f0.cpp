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

// Function: e2d_id01_type00
// Address: 0x2aa7f0 - 0x2aa990
void e2d_id01_type00_0x2aa7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id01_type00_0x2aa7f0");
#endif

    switch (ctx->pc) {
        case 0x2aa850u: goto label_2aa850;
        default: break;
    }

    ctx->pc = 0x2aa7f0u;

    // 0x2aa7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa7f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aa7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aa7f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aa7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aa7fc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aa7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aa800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa804: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa808: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aa808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aa80c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aa80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aa810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa814: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa818: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aa818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aa81c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aa81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aa820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa824: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa828: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aa828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aa82c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa838: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aa838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aa83c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2aa83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa840: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa844: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2aa844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa848: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AA848u;
    SET_GPR_U32(ctx, 31, 0x2AA850u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AA848u, 0x2AA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA850u;
label_2aa850:
    // 0x2aa850: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2aa850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2aa854: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aa854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa858: 0x0  nop
    ctx->pc = 0x2aa858u;
    // NOP
    // 0x2aa85c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa85cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa860: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2aa860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2aa864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa868: 0x0  nop
    ctx->pc = 0x2aa868u;
    // NOP
    // 0x2aa86c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa870: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa874: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aa874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aa878: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aa878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aa87c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aa87cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aa880: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aa880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aa884: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aa884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aa888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aa88c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aa88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aa890: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2aa890u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2aa894: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aa894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aa898: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aa898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aa89c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aa89cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aa8a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aa8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa8a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aa8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aa8a8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2aa8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2aa8ac: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2aa8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2aa8b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2aa8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2aa8b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aa8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aa8b8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2aa8b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aa8bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aa8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aa8c0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2aa8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2aa8c4: 0x24640258  addiu       $a0, $v1, 0x258
    ctx->pc = 0x2aa8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 600));
    // 0x2aa8c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa8cc: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2aa8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2aa8d0: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x2aa8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x2aa8d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa8d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa8dc: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2aa8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2aa8e0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2aa8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2aa8e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa8e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa8ec: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2aa8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2aa8f0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2aa8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2aa8f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa8f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa8fc: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2aa8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2aa900: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2aa900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2aa904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa908: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa90c: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2aa90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2aa910: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aa910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa914: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa918: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2aa918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa91c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2aa91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aa920: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa924: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2aa924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa928: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aa928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aa92c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aa92cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aa930: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aa930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aa934: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aa934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aa938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aa93c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aa93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aa940: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2aa940u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2aa944: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aa944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aa948: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aa948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aa94c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aa94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aa950: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aa950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa954: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aa954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aa958: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2aa958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2aa95c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2aa95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2aa960: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2aa960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2aa964: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aa964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aa968: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2aa968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aa96c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aa96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aa970: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2aa970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2aa974: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2aa974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aa978: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa97c: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2aa97cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa980: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aa980u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa984: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa988: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA990u;
}
