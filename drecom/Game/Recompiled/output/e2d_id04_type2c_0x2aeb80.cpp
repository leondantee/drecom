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

// Function: e2d_id04_type2c
// Address: 0x2aeb80 - 0x2aee04
void e2d_id04_type2c_0x2aeb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type2c_0x2aeb80");
#endif

    switch (ctx->pc) {
        case 0x2aeb94u: goto label_2aeb94;
        case 0x2aebc4u: goto label_2aebc4;
        case 0x2aebf4u: goto label_2aebf4;
        case 0x2aec24u: goto label_2aec24;
        case 0x2aec98u: goto label_2aec98;
        case 0x2aed88u: goto label_2aed88;
        case 0x2aedb8u: goto label_2aedb8;
        default: break;
    }

    ctx->pc = 0x2aeb80u;

    // 0x2aeb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aeb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aeb84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aeb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aeb88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aeb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aeb8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEB8Cu;
    SET_GPR_U32(ctx, 31, 0x2AEB94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEB8Cu, 0x2AEB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB94u;
label_2aeb94:
    // 0x2aeb94: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2aeb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2aeb98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aeb98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aeb9c: 0x0  nop
    ctx->pc = 0x2aeb9cu;
    // NOP
    // 0x2aeba0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aeba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aeba4: 0x3c0242ec  lui         $v0, 0x42EC
    ctx->pc = 0x2aeba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17132 << 16));
    // 0x2aeba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aeba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aebac: 0x0  nop
    ctx->pc = 0x2aebacu;
    // NOP
    // 0x2aebb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aebb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aebb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aebb8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aebb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aebbc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEBBCu;
    SET_GPR_U32(ctx, 31, 0x2AEBC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEBBCu, 0x2AEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBC4u;
label_2aebc4:
    // 0x2aebc4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2aebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2aebc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aebc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aebcc: 0x0  nop
    ctx->pc = 0x2aebccu;
    // NOP
    // 0x2aebd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aebd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aebd4: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2aebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2aebd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aebd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aebdc: 0x0  nop
    ctx->pc = 0x2aebdcu;
    // NOP
    // 0x2aebe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aebe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aebe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aebe8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aebe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aebec: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEBECu;
    SET_GPR_U32(ctx, 31, 0x2AEBF4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEBECu, 0x2AEBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBF4u;
label_2aebf4:
    // 0x2aebf4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2aebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2aebf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aebf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aebfc: 0x0  nop
    ctx->pc = 0x2aebfcu;
    // NOP
    // 0x2aec00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aec00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aec04: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2aec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2aec08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aec08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aec0c: 0x0  nop
    ctx->pc = 0x2aec0cu;
    // NOP
    // 0x2aec10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aec10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aec14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aec18: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aec18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aec1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEC1Cu;
    SET_GPR_U32(ctx, 31, 0x2AEC24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEC1Cu, 0x2AEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC24u;
label_2aec24:
    // 0x2aec24: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2aec24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2aec28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aec28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aec2c: 0x0  nop
    ctx->pc = 0x2aec2cu;
    // NOP
    // 0x2aec30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aec30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aec34: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2aec34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2aec38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aec38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aec3c: 0x0  nop
    ctx->pc = 0x2aec3cu;
    // NOP
    // 0x2aec40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aec40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aec44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aec48: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aec48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aec4c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2aec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2aec50: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2aec50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2aec54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aec54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aec58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aec5c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2aec5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2aec60: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2aec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2aec64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aec64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aec68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aec6c: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2aec6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2aec70: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2aec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2aec74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aec74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aec78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aec7c: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2aec7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2aec80: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2aec80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2aec84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aec84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aec88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aec8c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2aec8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2aec90: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEC90u;
    SET_GPR_U32(ctx, 31, 0x2AEC98u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEC90u, 0x2AEC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC98u;
label_2aec98:
    // 0x2aec98: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2aec98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2aec9c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2aec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2aeca0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aeca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aeca4: 0x0  nop
    ctx->pc = 0x2aeca4u;
    // NOP
    // 0x2aeca8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aeca8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aecac: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x2aecacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x2aecb0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2aecb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2aecb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aecb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aecb8: 0x0  nop
    ctx->pc = 0x2aecb8u;
    // NOP
    // 0x2aecbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aecbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aecc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aecc4: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2aecc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2aecc8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aecc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aeccc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2aecccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2aecd0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aecd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aecd4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aecd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aecdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aecdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aece0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2aece0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2aece4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aece4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aece8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2aece8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2aecec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aececu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aecf0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aecf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aecf8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2aecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2aecfc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2aecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2aed00: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aed00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aed04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aed04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aed08: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2aed08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aed0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aed0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aed10: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x2aed10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aed14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aed14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aed18: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2aed18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2aed1c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aed1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aed20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aed20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aed24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aed28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aed2c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2aed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2aed30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aed30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aed34: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2aed34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2aed38: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aed3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aed40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aed44: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2aed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2aed48: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2aed48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2aed4c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aed50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aed50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aed54: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2aed54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aed58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aed58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aed5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aed60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2aed60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2aed64: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2aed64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2aed68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2aed68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aed6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aed70: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2aed70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aed74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2aed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aed78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aed7c: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2aed7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aed80: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AED80u;
    SET_GPR_U32(ctx, 31, 0x2AED88u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AED80u, 0x2AED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED88u;
label_2aed88:
    // 0x2aed88: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x2aed88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
    // 0x2aed8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aed8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aed90: 0x0  nop
    ctx->pc = 0x2aed90u;
    // NOP
    // 0x2aed94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aed94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aed98: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2aed98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x2aed9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aed9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aeda0: 0x0  nop
    ctx->pc = 0x2aeda0u;
    // NOP
    // 0x2aeda4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aeda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aeda8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aedac: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2aedacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2aedb0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEDB0u;
    SET_GPR_U32(ctx, 31, 0x2AEDB8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEDB0u, 0x2AEDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDB8u;
label_2aedb8:
    // 0x2aedb8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2aedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2aedbc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2aedbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2aedc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aedc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aedc4: 0x0  nop
    ctx->pc = 0x2aedc4u;
    // NOP
    // 0x2aedc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aedc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aedcc: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2aedccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2aedd0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2aedd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2aedd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aedd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aedd8: 0x0  nop
    ctx->pc = 0x2aedd8u;
    // NOP
    // 0x2aeddc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aeddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aede0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aede4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2aede4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2aede8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aedec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aedecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aedf0: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2aedf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aedf4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aedf4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aedf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aedf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aedfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEE04u;
}
