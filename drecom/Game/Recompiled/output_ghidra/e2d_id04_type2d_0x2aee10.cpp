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

// Function: e2d_id04_type2d
// Address: 0x2aee10 - 0x2af094
void e2d_id04_type2d_0x2aee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type2d_0x2aee10");
#endif

    switch (ctx->pc) {
        case 0x2aee24u: goto label_2aee24;
        case 0x2aee54u: goto label_2aee54;
        case 0x2aee84u: goto label_2aee84;
        case 0x2aeeb4u: goto label_2aeeb4;
        case 0x2aef28u: goto label_2aef28;
        case 0x2af018u: goto label_2af018;
        case 0x2af048u: goto label_2af048;
        default: break;
    }

    ctx->pc = 0x2aee10u;

    // 0x2aee10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aee14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aee14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aee18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aee18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aee1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEE1Cu;
    SET_GPR_U32(ctx, 31, 0x2AEE24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEE1Cu, 0x2AEE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE24u;
label_2aee24:
    // 0x2aee24: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2aee24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2aee28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aee2c: 0x0  nop
    ctx->pc = 0x2aee2cu;
    // NOP
    // 0x2aee30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aee30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aee34: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aee34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aee38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aee38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aee3c: 0x0  nop
    ctx->pc = 0x2aee3cu;
    // NOP
    // 0x2aee40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aee40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aee44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aee48: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aee48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aee4c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEE4Cu;
    SET_GPR_U32(ctx, 31, 0x2AEE54u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEE4Cu, 0x2AEE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE54u;
label_2aee54:
    // 0x2aee54: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2aee54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2aee58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aee58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aee5c: 0x0  nop
    ctx->pc = 0x2aee5cu;
    // NOP
    // 0x2aee60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aee60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aee64: 0x3c0242c4  lui         $v0, 0x42C4
    ctx->pc = 0x2aee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17092 << 16));
    // 0x2aee68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aee68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aee6c: 0x0  nop
    ctx->pc = 0x2aee6cu;
    // NOP
    // 0x2aee70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aee70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aee74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aee78: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aee78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aee7c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEE7Cu;
    SET_GPR_U32(ctx, 31, 0x2AEE84u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEE7Cu, 0x2AEE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE84u;
label_2aee84:
    // 0x2aee84: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2aee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2aee88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aee88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aee8c: 0x0  nop
    ctx->pc = 0x2aee8cu;
    // NOP
    // 0x2aee90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aee90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aee94: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2aee94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2aee98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aee98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aee9c: 0x0  nop
    ctx->pc = 0x2aee9cu;
    // NOP
    // 0x2aeea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aeea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aeea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aeea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeea8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aeea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aeeac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEEACu;
    SET_GPR_U32(ctx, 31, 0x2AEEB4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEEACu, 0x2AEEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEEB4u;
label_2aeeb4:
    // 0x2aeeb4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2aeeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2aeeb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aeeb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aeebc: 0x0  nop
    ctx->pc = 0x2aeebcu;
    // NOP
    // 0x2aeec0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aeec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aeec4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2aeec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2aeec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aeec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aeecc: 0x0  nop
    ctx->pc = 0x2aeeccu;
    // NOP
    // 0x2aeed0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aeed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aeed4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aeed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeed8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aeed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aeedc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2aeedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2aeee0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2aeee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2aeee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aeee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aeee8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aeee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeeec: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2aeeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2aeef0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2aeef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2aeef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aeef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aeef8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aeef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeefc: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2aeefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2aef00: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2aef00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2aef04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aef04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aef08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aef0c: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2aef0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2aef10: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2aef10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2aef14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aef14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aef18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aef1c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2aef1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2aef20: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AEF20u;
    SET_GPR_U32(ctx, 31, 0x2AEF28u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AEF20u, 0x2AEF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF28u;
label_2aef28:
    // 0x2aef28: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2aef28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2aef2c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2aef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2aef30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aef30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aef34: 0x0  nop
    ctx->pc = 0x2aef34u;
    // NOP
    // 0x2aef38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aef38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aef3c: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x2aef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x2aef40: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2aef40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2aef44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aef44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aef48: 0x0  nop
    ctx->pc = 0x2aef48u;
    // NOP
    // 0x2aef4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aef4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aef50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aef54: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2aef54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2aef58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aef58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aef5c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2aef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2aef60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aef60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aef64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aef64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aef68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aef6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aef6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aef70: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2aef70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2aef74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aef74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aef78: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2aef78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2aef7c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aef7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aef80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aef80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aef84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aef88: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2aef88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2aef8c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2aef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2aef90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aef94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aef94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aef98: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2aef98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aef9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aef9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aefa0: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x2aefa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aefa4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aefa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aefa8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2aefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2aefac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aefacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aefb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aefb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aefb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aefb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aefb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aefbc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2aefbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2aefc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aefc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aefc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2aefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2aefc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aefc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aefcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aefccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aefd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aefd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aefd4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2aefd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2aefd8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2aefd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2aefdc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aefdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aefe0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aefe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aefe4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2aefe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aefe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aefe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aefec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aefecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aeff0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2aeff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2aeff4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2aeff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2aeff8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2aeff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aeffc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aeffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af000: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2af000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af004: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2af004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af008: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af00c: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2af00cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af010: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AF010u;
    SET_GPR_U32(ctx, 31, 0x2AF018u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AF010u, 0x2AF018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF018u;
label_2af018:
    // 0x2af018: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x2af018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
    // 0x2af01c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2af01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af020: 0x0  nop
    ctx->pc = 0x2af020u;
    // NOP
    // 0x2af024: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af028: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2af028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x2af02c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af030: 0x0  nop
    ctx->pc = 0x2af030u;
    // NOP
    // 0x2af034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af038: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af03c: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2af03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2af040: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AF040u;
    SET_GPR_U32(ctx, 31, 0x2AF048u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AF040u, 0x2AF048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF048u;
label_2af048:
    // 0x2af048: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2af048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2af04c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2af04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2af050: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2af050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af054: 0x0  nop
    ctx->pc = 0x2af054u;
    // NOP
    // 0x2af058: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af05c: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2af05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2af060: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2af060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2af064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af068: 0x0  nop
    ctx->pc = 0x2af068u;
    // NOP
    // 0x2af06c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af06cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af070: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af074: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2af074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2af078: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2af078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af07c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af080: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2af080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af084: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2af084u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af088: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2af088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2af08c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF094u;
}
