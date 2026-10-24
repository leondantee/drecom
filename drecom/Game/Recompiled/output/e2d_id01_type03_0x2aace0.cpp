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

// Function: e2d_id01_type03
// Address: 0x2aace0 - 0x2aae74
void e2d_id01_type03_0x2aace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id01_type03_0x2aace0");
#endif

    switch (ctx->pc) {
        case 0x2aad40u: goto label_2aad40;
        default: break;
    }

    ctx->pc = 0x2aace0u;

    // 0x2aace0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aace4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aace8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aace8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aacec: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aacecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aacf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aacf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aacf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aacf8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aacf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aacfc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aacfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aad00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aad00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aad04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aad08: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aad08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aad0c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aad10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aad10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aad14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aad18: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aad18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aad1c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aad20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aad20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aad24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aad28: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aad28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aad2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2aad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aad30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aad34: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2aad34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aad38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AAD38u;
    SET_GPR_U32(ctx, 31, 0x2AAD40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AAD38u, 0x2AAD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD40u;
label_2aad40:
    // 0x2aad40: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2aad40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2aad44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aad44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aad48: 0x0  nop
    ctx->pc = 0x2aad48u;
    // NOP
    // 0x2aad4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aad4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aad50: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2aad50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2aad54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aad54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aad58: 0x0  nop
    ctx->pc = 0x2aad58u;
    // NOP
    // 0x2aad5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aad5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aad60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aad64: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aad68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aad68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aad6c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aad70: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aad70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aad74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aad74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aad78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aad78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aad7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aad7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aad80: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2aad80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2aad84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aad84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aad88: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aad88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aad8c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aad8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aad90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aad90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aad94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aad94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aad98: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2aad98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2aad9c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2aad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2aada0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2aada0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2aada4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aada4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aada8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2aada8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aadac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aadacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aadb0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2aadb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2aadb4: 0x246400fa  addiu       $a0, $v1, 0xFA
    ctx->pc = 0x2aadb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
    // 0x2aadb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aadb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aadbc: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2aadbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2aadc0: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x2aadc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x2aadc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aadc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aadc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aadcc: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2aadccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2aadd0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2aadd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2aadd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aadd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aadd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aadd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aaddc: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2aaddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2aade0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2aade0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2aade4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aade4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aade8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aadec: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2aadecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2aadf0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2aadf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2aadf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aadf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aadf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aadf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aadfc: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2aadfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2aae00: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2aae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aae04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aae08: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2aae08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aae0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aae0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aae10: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aae10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aae14: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aae14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aae18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aae18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aae1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aae20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aae20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aae24: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2aae24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2aae28: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aae28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aae2c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aae30: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aae30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aae34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aae34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aae38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aae38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aae3c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2aae3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2aae40: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2aae40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2aae44: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2aae44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2aae48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aae48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aae4c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2aae4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aae50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aae50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aae54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2aae54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2aae58: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2aae58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aae5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aae60: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2aae60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aae64: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aae64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aae68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aae6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAE74u;
}
