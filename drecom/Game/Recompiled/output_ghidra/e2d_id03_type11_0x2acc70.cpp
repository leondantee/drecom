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

// Function: e2d_id03_type11
// Address: 0x2acc70 - 0x2ace94
void e2d_id03_type11_0x2acc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type11_0x2acc70");
#endif

    switch (ctx->pc) {
        case 0x2acd10u: goto label_2acd10;
        default: break;
    }

    ctx->pc = 0x2acc70u;

    // 0x2acc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2acc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2acc74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2acc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2acc78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2acc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2acc7c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2acc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2acc80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acc80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acc84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acc88: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2acc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2acc8c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2acc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2acc90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acc94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acc98: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2acc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2acc9c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2acc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2acca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acca4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acca8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2acca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2accac: 0x3c0242c4  lui         $v0, 0x42C4
    ctx->pc = 0x2accacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17092 << 16));
    // 0x2accb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2accb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2accb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2accb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2accb8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2accb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2accbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2accbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2accc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2accc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2accc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2accc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2accc8: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2accc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2acccc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2accccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2accd0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2accd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2accd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2accd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2accd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2accd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2accdc: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2accdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2acce0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2acce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2acce4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2acce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2acce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2accec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2accecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2accf0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2accf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2accf4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2accf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2accf8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2accf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2accfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2accfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acd00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acd04: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2acd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2acd08: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ACD08u;
    SET_GPR_U32(ctx, 31, 0x2ACD10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ACD08u, 0x2ACD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD10u;
label_2acd10:
    // 0x2acd10: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x2acd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x2acd14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2acd14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acd18: 0x0  nop
    ctx->pc = 0x2acd18u;
    // NOP
    // 0x2acd1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2acd1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2acd20: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2acd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2acd24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2acd24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acd28: 0x0  nop
    ctx->pc = 0x2acd28u;
    // NOP
    // 0x2acd2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2acd2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2acd30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acd34: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2acd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2acd38: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2acd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2acd3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acd40: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2acd40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2acd44: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acd48: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acd48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acd4c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acd4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acd50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acd54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acd58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2acd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acd5c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2acd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2acd60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acd64: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acd64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acd68: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acd6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acd70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acd74: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2acd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2acd78: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2acd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2acd7c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2acd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2acd80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acd84: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2acd84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2acd88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2acd88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acd8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2acd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2acd90: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2acd90u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2acd94: 0x0  nop
    ctx->pc = 0x2acd94u;
    // NOP
    // 0x2acd98: 0x0  nop
    ctx->pc = 0x2acd98u;
    // NOP
    // 0x2acd9c: 0x1810  mfhi        $v1
    ctx->pc = 0x2acd9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2acda0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2acda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acda4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acda8: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2acda8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2acdac: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2acdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2acdb0: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2acdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2acdb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2acdb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acdb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acdbc: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2acdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2acdc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acdc4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acdc8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acdc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acdcc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acdd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acdd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2acdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acdd8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2acdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2acddc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acde0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acde0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acde4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acde8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acdec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acdf0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2acdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2acdf4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2acdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2acdf8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2acdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2acdfc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ace00: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ace00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ace04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ace04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ace08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ace08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ace0c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ace0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ace10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ace10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ace14: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ace14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ace18: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ace18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ace1c: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ace1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ace20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ace20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ace24: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ace24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ace28: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ace28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ace2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ace2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ace30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ace30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ace34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ace34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ace38: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ace38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ace3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ace3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ace40: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ace40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ace44: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ace44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ace48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ace48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ace4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ace4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ace50: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ace50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ace54: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ace54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ace58: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ace58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ace5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ace5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ace60: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ace60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ace64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ace64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ace68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ace68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ace6c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ace6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ace70: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ace70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ace74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ace74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ace78: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ace78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ace7c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ace7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ace80: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ace80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ace84: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ace84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ace88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ace88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ace8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACE94u;
}
