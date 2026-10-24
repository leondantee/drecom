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

// Function: e2d_id03_type0f
// Address: 0x2ac810 - 0x2aca34
void e2d_id03_type0f_0x2ac810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type0f_0x2ac810");
#endif

    switch (ctx->pc) {
        case 0x2ac8b0u: goto label_2ac8b0;
        default: break;
    }

    ctx->pc = 0x2ac810u;

    // 0x2ac810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac814: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ac814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ac818: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ac818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ac81c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2ac81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2ac820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac824: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac828: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ac828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ac82c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2ac82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2ac830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac838: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ac838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ac83c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2ac83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2ac840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac844: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac848: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ac848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ac84c: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x2ac84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x2ac850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac854: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac858: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ac858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ac85c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac864: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac868: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2ac868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ac86c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ac86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ac870: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ac870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ac874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac878: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac87c: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ac87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ac880: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ac880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ac884: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ac884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ac888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac88c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac890: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2ac890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2ac894: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2ac894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2ac898: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ac898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ac89c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac8a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac8a4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ac8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ac8a8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AC8A8u;
    SET_GPR_U32(ctx, 31, 0x2AC8B0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AC8A8u, 0x2AC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8B0u;
label_2ac8b0:
    // 0x2ac8b0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2ac8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2ac8b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac8b8: 0x0  nop
    ctx->pc = 0x2ac8b8u;
    // NOP
    // 0x2ac8bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ac8bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac8c0: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x2ac8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x2ac8c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac8c8: 0x0  nop
    ctx->pc = 0x2ac8c8u;
    // NOP
    // 0x2ac8cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac8d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac8d4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ac8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ac8d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac8dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac8e0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2ac8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2ac8e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac8e8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac8ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac8f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac8f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac8f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac8fc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac900: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac904: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac908: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac90c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac910: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac914: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac918: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac918u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac91c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac920: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac924: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac928: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ac928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac92c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2ac92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ac930: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ac930u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ac934: 0x0  nop
    ctx->pc = 0x2ac934u;
    // NOP
    // 0x2ac938: 0x0  nop
    ctx->pc = 0x2ac938u;
    // NOP
    // 0x2ac93c: 0x1810  mfhi        $v1
    ctx->pc = 0x2ac93cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ac940: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ac940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac944: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac948: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ac948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac94c: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2ac94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2ac950: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2ac950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2ac954: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac958: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac95c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ac95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ac960: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac964: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac968: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac96c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac974: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac978: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac97c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac980: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac984: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac988: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac98c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac990: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac994: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac994u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac998: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac99c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac9a0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac9a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac9a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac9a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ac9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ac9ac: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac9b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ac9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac9b4: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ac9b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ac9b8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ac9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ac9bc: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ac9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac9c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac9c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac9c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac9cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac9d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac9d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac9d8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac9dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac9e0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac9e4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac9e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac9e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac9ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac9f0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac9f4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac9f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac9fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aca00: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2aca00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aca04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aca04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aca08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2aca08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2aca0c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2aca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2aca10: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2aca10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aca14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2aca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aca18: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2aca18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2aca1c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2aca1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2aca20: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2aca20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aca24: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aca24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aca28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aca28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aca2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACA34u;
}
