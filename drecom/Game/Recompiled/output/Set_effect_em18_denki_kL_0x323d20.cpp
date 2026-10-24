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

// Function: Set_effect_em18_denki_kL
// Address: 0x323d20 - 0x323eec
void Set_effect_em18_denki_kL_0x323d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em18_denki_kL_0x323d20");
#endif

    switch (ctx->pc) {
        case 0x323d5cu: goto label_323d5c;
        case 0x323d78u: goto label_323d78;
        case 0x323d94u: goto label_323d94;
        case 0x323e20u: goto label_323e20;
        case 0x323edcu: goto label_323edc;
        default: break;
    }

    ctx->pc = 0x323d20u;

    // 0x323d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x323d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x323d24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x323d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x323d28: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x323d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x323d2c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x323d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x323d30: 0x2442a090  addiu       $v0, $v0, -0x5F70
    ctx->pc = 0x323d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942864));
    // 0x323d34: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x323d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x323d38: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x323d38u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x39A090u));
    // 0x323d3c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x323d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x323d40: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x323d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x323d44: 0x2442a0a0  addiu       $v0, $v0, -0x5F60
    ctx->pc = 0x323d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942880));
    // 0x323d48: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x323d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x323d4c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x323d4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x39A0A0u));
    // 0x323d50: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x323d50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x323d54: 0xc067648  jal         func_19D920
    ctx->pc = 0x323D54u;
    SET_GPR_U32(ctx, 31, 0x323D5Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x323D54u, 0x323D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D5Cu;
label_323d5c:
    // 0x323d5c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x323d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x323d60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x323d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323d64: 0x0  nop
    ctx->pc = 0x323d64u;
    // NOP
    // 0x323d68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x323d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x323d6c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x323d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x323d70: 0xc067648  jal         func_19D920
    ctx->pc = 0x323D70u;
    SET_GPR_U32(ctx, 31, 0x323D78u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x323D70u, 0x323D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D78u;
label_323d78:
    // 0x323d78: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x323d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x323d7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x323d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323d80: 0x0  nop
    ctx->pc = 0x323d80u;
    // NOP
    // 0x323d84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x323d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x323d88: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x323d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x323d8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x323D8Cu;
    SET_GPR_U32(ctx, 31, 0x323D94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x323D8Cu, 0x323D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D94u;
label_323d94:
    // 0x323d94: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x323d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x323d98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x323d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323d9c: 0x0  nop
    ctx->pc = 0x323d9cu;
    // NOP
    // 0x323da0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x323da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x323da4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x323da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x323da8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x323da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323dac: 0x0  nop
    ctx->pc = 0x323dacu;
    // NOP
    // 0x323db0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x323db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x323db4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323db8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x323db8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x323dbc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x323dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x323dc0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x323dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323dc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x323dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323dc8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x323dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323dcc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x323dccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x323dd0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323dd4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x323dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x323dd8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x323dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x323ddc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x323ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323de0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x323de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323de4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x323de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x323de8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x323de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x323dec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x323decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x323df0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323df4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x323df4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x323df8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x323df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323dfc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x323dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x323e00: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x323e00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x323e04: 0x0  nop
    ctx->pc = 0x323e04u;
    // NOP
    // 0x323e08: 0x0  nop
    ctx->pc = 0x323e08u;
    // NOP
    // 0x323e0c: 0x1810  mfhi        $v1
    ctx->pc = 0x323e0cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x323e10: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x323E10u;
    {
        const bool branch_taken_0x323e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x323e10) {
            ctx->pc = 0x323EDCu;
            goto label_323edc;
        }
    }
    ctx->pc = 0x323E18u;
    // 0x323e18: 0xc067648  jal         func_19D920
    ctx->pc = 0x323E18u;
    SET_GPR_U32(ctx, 31, 0x323E20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x323E18u, 0x323E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E20u;
label_323e20:
    // 0x323e20: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x323e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x323e24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x323e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323e28: 0x0  nop
    ctx->pc = 0x323e28u;
    // NOP
    // 0x323e2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x323e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x323e30: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x323e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x323e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x323e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323e38: 0x0  nop
    ctx->pc = 0x323e38u;
    // NOP
    // 0x323e3c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x323e3cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x323e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323e44: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x323e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x323e48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323e4c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x323e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x323e50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x323e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x323e54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x323e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x323e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323e5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x323e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323e60: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x323e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x323e64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323e68: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x323e68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x323e6c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x323e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x323e70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x323e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x323e74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323e78: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x323e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x323e7c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x323e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x323e80: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x323e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x323e84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323e88: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x323e88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x323e8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x323e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323e90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x323e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x323e94: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x323e94u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x323e98: 0x0  nop
    ctx->pc = 0x323e98u;
    // NOP
    // 0x323e9c: 0x0  nop
    ctx->pc = 0x323e9cu;
    // NOP
    // 0x323ea0: 0x1010  mfhi        $v0
    ctx->pc = 0x323ea0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x323ea4: 0x24450019  addiu       $a1, $v0, 0x19
    ctx->pc = 0x323ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x323ea8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x323ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x323eac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x323eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x323eb0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x323eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x323eb4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x323eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x323eb8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x323eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x323ebc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x323ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x323ec0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x323ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x323ec4: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x323ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x323ec8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x323ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x323ecc: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x323eccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x323ed0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x323ed0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x323ed4: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x323ED4u;
    SET_GPR_U32(ctx, 31, 0x323EDCu);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x323ED4u, 0x323EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323EDCu;
label_323edc:
    // 0x323edc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x323edcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323ee0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x323ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x323ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x323EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323EECu;
}
