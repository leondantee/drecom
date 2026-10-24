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

// Function: e2d_id03_type12
// Address: 0x2acea0 - 0x2ad010
void e2d_id03_type12_0x2acea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type12_0x2acea0");
#endif

    switch (ctx->pc) {
        case 0x2acf4cu: goto label_2acf4c;
        default: break;
    }

    ctx->pc = 0x2acea0u;

    // 0x2acea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2acea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2acea4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2acea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2acea8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2acea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aceac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2aceacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aceb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aceb4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2aceb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aceb8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2aceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2acebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acec0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acec4: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2acec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2acec8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2acec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2acecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aceccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aced0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aced4: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aced8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2aced8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2acedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acee0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acee4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2acee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2acee8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2acee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aceec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aceecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acef0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acef4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2acef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2acef8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2acef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2acefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acf00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acf04: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2acf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2acf08: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2acf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2acf0c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2acf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2acf10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acf14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acf18: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2acf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2acf1c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2acf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2acf20: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2acf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2acf24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acf24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acf28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acf2c: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2acf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2acf30: 0x3c023f63  lui         $v0, 0x3F63
    ctx->pc = 0x2acf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16227 << 16));
    // 0x2acf34: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2acf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2acf38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acf3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acf40: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2acf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2acf44: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ACF44u;
    SET_GPR_U32(ctx, 31, 0x2ACF4Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ACF44u, 0x2ACF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF4Cu;
label_2acf4c:
    // 0x2acf4c: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2acf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2acf50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2acf50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acf54: 0x0  nop
    ctx->pc = 0x2acf54u;
    // NOP
    // 0x2acf58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2acf58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2acf5c: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x2acf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x2acf60: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2acf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2acf64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2acf64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acf68: 0x0  nop
    ctx->pc = 0x2acf68u;
    // NOP
    // 0x2acf6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2acf6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2acf70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acf74: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2acf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2acf78: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2acf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2acf7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acf80: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2acf80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2acf84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acf88: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acf88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acf8c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acf8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acf90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acf94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acf98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2acf98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acf9c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2acf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2acfa0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acfa4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acfa8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acfa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acfac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acfb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acfb4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2acfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2acfb8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2acfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2acfbc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2acfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2acfc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acfc4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2acfc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2acfc8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2acfc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acfcc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2acfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2acfd0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2acfd0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2acfd4: 0x0  nop
    ctx->pc = 0x2acfd4u;
    // NOP
    // 0x2acfd8: 0x0  nop
    ctx->pc = 0x2acfd8u;
    // NOP
    // 0x2acfdc: 0x1810  mfhi        $v1
    ctx->pc = 0x2acfdcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2acfe0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2acfe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acfe4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acfe8: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2acfe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2acfec: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x2acfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x2acff0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2acff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2acff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2acff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acff8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acffc: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2acffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ad000: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ad000u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad004: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ad004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad008: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD010u;
}
