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

// Function: e2d_id03_type0a
// Address: 0x2abe90 - 0x2ac064
void e2d_id03_type0a_0x2abe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type0a_0x2abe90");
#endif

    switch (ctx->pc) {
        case 0x2abf30u: goto label_2abf30;
        default: break;
    }

    ctx->pc = 0x2abe90u;

    // 0x2abe90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2abe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2abe94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2abe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2abe98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2abe98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2abe9c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2abe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2abea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abea8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2abea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2abeac: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2abeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2abeb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abeb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abeb8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2abeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2abebc: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2abebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2abec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abec4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abec8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2abec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2abecc: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2abeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2abed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abed4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abed8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2abed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2abedc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2abedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2abee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abee8: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2abee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2abeec: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2abeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2abef0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2abef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2abef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abef8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abefc: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2abefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2abf00: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2abf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2abf04: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2abf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2abf08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abf08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abf10: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2abf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2abf14: 0x3c023f63  lui         $v0, 0x3F63
    ctx->pc = 0x2abf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16227 << 16));
    // 0x2abf18: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2abf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2abf1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abf1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2abf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abf24: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2abf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2abf28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ABF28u;
    SET_GPR_U32(ctx, 31, 0x2ABF30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ABF28u, 0x2ABF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABF30u;
label_2abf30:
    // 0x2abf30: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2abf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2abf34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2abf34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abf38: 0x0  nop
    ctx->pc = 0x2abf38u;
    // NOP
    // 0x2abf3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2abf3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2abf40: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2abf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2abf44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abf44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf48: 0x0  nop
    ctx->pc = 0x2abf48u;
    // NOP
    // 0x2abf4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2abf4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2abf50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abf54: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2abf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2abf58: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2abf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2abf5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abf60: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2abf60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2abf64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2abf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2abf68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abf6c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2abf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2abf70: 0x3c03bdb8  lui         $v1, 0xBDB8
    ctx->pc = 0x2abf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48568 << 16));
    // 0x2abf74: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2abf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2abf78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abf78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abf80: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2abf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2abf84: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2abf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2abf88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abf8c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2abf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2abf90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abf94: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abf94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abf98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abf98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abf9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abfa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abfa4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abfa8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2abfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2abfac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abfb0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abfb4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abfb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abfb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abfbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abfc0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2abfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2abfc4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2abfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2abfc8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2abfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2abfcc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abfd0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2abfd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2abfd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abfd8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2abfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2abfdc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2abfdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abfe0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2abfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abfe4: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2abfe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2abfe8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2abfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2abfec: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2abfecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abff0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abff4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abff4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abff8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abffc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac000: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac004: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac008: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac008u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac00c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac010: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac010u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac014: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac018: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac01c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac020: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac024: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac024u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac028: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac02c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac030: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac034: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac038: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ac038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ac03c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ac03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ac040: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac044: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ac044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac048: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ac048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ac04c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ac04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ac050: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ac050u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac054: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ac054u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac058: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ac058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ac05c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC064u;
}
