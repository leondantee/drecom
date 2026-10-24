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

// Function: Set_effect_em18_denki_kR
// Address: 0x323b50 - 0x323d1c
void Set_effect_em18_denki_kR_0x323b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em18_denki_kR_0x323b50");
#endif

    switch (ctx->pc) {
        case 0x323b8cu: goto label_323b8c;
        case 0x323ba8u: goto label_323ba8;
        case 0x323bc4u: goto label_323bc4;
        case 0x323c50u: goto label_323c50;
        case 0x323d0cu: goto label_323d0c;
        default: break;
    }

    ctx->pc = 0x323b50u;

    // 0x323b50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x323b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x323b54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x323b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x323b58: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x323b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x323b5c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x323b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x323b60: 0x2442a070  addiu       $v0, $v0, -0x5F90
    ctx->pc = 0x323b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942832));
    // 0x323b64: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x323b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x323b68: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x323b68u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x39A070u));
    // 0x323b6c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x323b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x323b70: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x323b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x323b74: 0x2442a080  addiu       $v0, $v0, -0x5F80
    ctx->pc = 0x323b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x323b78: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x323b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x323b7c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x323b7cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x39A080u));
    // 0x323b80: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x323b80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x323b84: 0xc067648  jal         func_19D920
    ctx->pc = 0x323B84u;
    SET_GPR_U32(ctx, 31, 0x323B8Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x323B84u, 0x323B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B8Cu;
label_323b8c:
    // 0x323b8c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x323b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x323b90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x323b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323b94: 0x0  nop
    ctx->pc = 0x323b94u;
    // NOP
    // 0x323b98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x323b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x323b9c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x323b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x323ba0: 0xc067648  jal         func_19D920
    ctx->pc = 0x323BA0u;
    SET_GPR_U32(ctx, 31, 0x323BA8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x323BA0u, 0x323BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BA8u;
label_323ba8:
    // 0x323ba8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x323ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x323bac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x323bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323bb0: 0x0  nop
    ctx->pc = 0x323bb0u;
    // NOP
    // 0x323bb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x323bb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x323bb8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x323bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x323bbc: 0xc067648  jal         func_19D920
    ctx->pc = 0x323BBCu;
    SET_GPR_U32(ctx, 31, 0x323BC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x323BBCu, 0x323BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BC4u;
label_323bc4:
    // 0x323bc4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x323bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x323bc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x323bc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323bcc: 0x0  nop
    ctx->pc = 0x323bccu;
    // NOP
    // 0x323bd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x323bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x323bd4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x323bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x323bd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x323bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323bdc: 0x0  nop
    ctx->pc = 0x323bdcu;
    // NOP
    // 0x323be0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x323be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x323be4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323be8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x323be8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x323bec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x323becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x323bf0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x323bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323bf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x323bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323bf8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x323bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323bfc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x323bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x323c00: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323c04: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x323c04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x323c08: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x323c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x323c0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x323c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323c10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x323c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323c14: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x323c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x323c18: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x323c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x323c1c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x323c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x323c20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323c24: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x323c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x323c28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x323c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323c2c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x323c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x323c30: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x323c30u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x323c34: 0x0  nop
    ctx->pc = 0x323c34u;
    // NOP
    // 0x323c38: 0x0  nop
    ctx->pc = 0x323c38u;
    // NOP
    // 0x323c3c: 0x1810  mfhi        $v1
    ctx->pc = 0x323c3cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x323c40: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x323C40u;
    {
        const bool branch_taken_0x323c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x323c40) {
            ctx->pc = 0x323D0Cu;
            goto label_323d0c;
        }
    }
    ctx->pc = 0x323C48u;
    // 0x323c48: 0xc067648  jal         func_19D920
    ctx->pc = 0x323C48u;
    SET_GPR_U32(ctx, 31, 0x323C50u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x323C48u, 0x323C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C50u;
label_323c50:
    // 0x323c50: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x323c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x323c54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x323c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323c58: 0x0  nop
    ctx->pc = 0x323c58u;
    // NOP
    // 0x323c5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x323c5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x323c60: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x323c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x323c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x323c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323c68: 0x0  nop
    ctx->pc = 0x323c68u;
    // NOP
    // 0x323c6c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x323c6cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x323c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323c74: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x323c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x323c78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323c7c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x323c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x323c80: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x323c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x323c84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x323c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x323c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323c8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x323c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323c90: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x323c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x323c94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323c98: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x323c98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x323c9c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x323c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x323ca0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x323ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x323ca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323ca8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x323ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x323cac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x323cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x323cb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x323cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x323cb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323cb8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x323cb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x323cbc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x323cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323cc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x323cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x323cc4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x323cc4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x323cc8: 0x0  nop
    ctx->pc = 0x323cc8u;
    // NOP
    // 0x323ccc: 0x0  nop
    ctx->pc = 0x323cccu;
    // NOP
    // 0x323cd0: 0x1010  mfhi        $v0
    ctx->pc = 0x323cd0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x323cd4: 0x24450015  addiu       $a1, $v0, 0x15
    ctx->pc = 0x323cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21));
    // 0x323cd8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x323cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x323cdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x323cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x323ce0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x323ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x323ce4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x323ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x323ce8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x323ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x323cec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x323cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x323cf0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x323cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x323cf4: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x323cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x323cf8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x323cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x323cfc: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x323cfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x323d00: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x323d00u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x323d04: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x323D04u;
    SET_GPR_U32(ctx, 31, 0x323D0Cu);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x323D04u, 0x323D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D0Cu;
label_323d0c:
    // 0x323d0c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x323d0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323d10: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x323d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x323d14: 0x3e00008  jr          $ra
    ctx->pc = 0x323D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323D1Cu;
}
