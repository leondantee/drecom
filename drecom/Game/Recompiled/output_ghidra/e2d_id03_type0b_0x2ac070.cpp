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

// Function: e2d_id03_type0b
// Address: 0x2ac070 - 0x2ac238
void e2d_id03_type0b_0x2ac070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type0b_0x2ac070");
#endif

    switch (ctx->pc) {
        case 0x2ac110u: goto label_2ac110;
        default: break;
    }

    ctx->pc = 0x2ac070u;

    // 0x2ac070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac074: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ac074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ac078: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ac078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ac07c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2ac07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2ac080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac084: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac088: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ac088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ac08c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2ac08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2ac090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac094: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac098: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ac098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ac09c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2ac09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2ac0a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac0a8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ac0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ac0ac: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ac0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ac0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac0b8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ac0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ac0bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac0c8: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2ac0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ac0cc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ac0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ac0d0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ac0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ac0d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac0dc: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ac0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ac0e0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ac0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ac0e4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ac0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ac0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac0f0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2ac0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2ac0f4: 0x3c023f6b  lui         $v0, 0x3F6B
    ctx->pc = 0x2ac0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16235 << 16));
    // 0x2ac0f8: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2ac0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2ac0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac100: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac104: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ac104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ac108: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AC108u;
    SET_GPR_U32(ctx, 31, 0x2AC110u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AC108u, 0x2AC110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC110u;
label_2ac110:
    // 0x2ac110: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2ac110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2ac114: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac118: 0x0  nop
    ctx->pc = 0x2ac118u;
    // NOP
    // 0x2ac11c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ac11cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac120: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x2ac120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
    // 0x2ac124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac128: 0x0  nop
    ctx->pc = 0x2ac128u;
    // NOP
    // 0x2ac12c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac12cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac130: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac134: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ac134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ac138: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac13c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac140: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2ac140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2ac144: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ac144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ac148: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac14c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ac14cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac150: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2ac150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2ac154: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2ac154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2ac158: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac15c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac160: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ac160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ac164: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac168: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac16c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac170: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac174: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac178: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac17c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac17cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac180: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac184: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac188: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac18c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac194: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac198: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac198u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac19c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac1a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac1a4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac1a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac1a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac1ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ac1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ac1b0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac1b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ac1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac1b8: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ac1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ac1bc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ac1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ac1c0: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ac1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac1c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac1c8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac1cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac1ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac1d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac1d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac1d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac1dc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac1e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac1e4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac1e8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac1e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac1ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac1f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac1f4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac1f8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac1fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac200: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac204: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac204u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac208: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac20c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ac20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ac210: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ac210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ac214: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac218: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ac218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac21c: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ac21cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ac220: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ac220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ac224: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ac224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac228: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ac228u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac22c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ac22cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ac230: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC238u;
}
