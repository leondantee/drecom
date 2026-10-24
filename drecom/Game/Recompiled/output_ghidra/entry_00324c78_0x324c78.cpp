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

// Function: entry_00324c78
// Address: 0x324c78 - 0x324e54
void entry_00324c78_0x324c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324c78_0x324c78");
#endif

    switch (ctx->pc) {
        case 0x324cfcu: goto label_324cfc;
        case 0x324d20u: goto label_324d20;
        case 0x324d44u: goto label_324d44;
        case 0x324d68u: goto label_324d68;
        default: break;
    }

    ctx->pc = 0x324c78u;

    // 0x324c78: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x324c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x324c7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324c80: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324c84: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324c88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324c90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324c94: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x324c98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324c9c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324ca0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324ca4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324cac: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324cb0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324cb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x324cb8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324cbc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x324cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324cc0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x324cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324cc4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x324cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x324cc8: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x324cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324ccc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324cd0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x324cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324cd4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x324cd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x324cd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324cdc: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x324cdcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x324ce0: 0x0  nop
    ctx->pc = 0x324ce0u;
    // NOP
    // 0x324ce4: 0x0  nop
    ctx->pc = 0x324ce4u;
    // NOP
    // 0x324ce8: 0x1010  mfhi        $v0
    ctx->pc = 0x324ce8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x324cec: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x324CECu;
    {
        const bool branch_taken_0x324cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324cec) {
            ctx->pc = 0x324E54u;
            return;
        }
    }
    ctx->pc = 0x324CF4u;
    // 0x324cf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x324CF4u;
    SET_GPR_U32(ctx, 31, 0x324CFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324CF4u, 0x324CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CFCu;
label_324cfc:
    // 0x324cfc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324d00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324d04: 0x0  nop
    ctx->pc = 0x324d04u;
    // NOP
    // 0x324d08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324d0c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324d14: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x324d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x324d18: 0xc067648  jal         func_19D920
    ctx->pc = 0x324D18u;
    SET_GPR_U32(ctx, 31, 0x324D20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324D18u, 0x324D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D20u;
label_324d20:
    // 0x324d20: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324d24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324d28: 0x0  nop
    ctx->pc = 0x324d28u;
    // NOP
    // 0x324d2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324d30: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324d38: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x324d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x324d3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x324D3Cu;
    SET_GPR_U32(ctx, 31, 0x324D44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324D3Cu, 0x324D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D44u;
label_324d44:
    // 0x324d44: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324d48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324d4c: 0x0  nop
    ctx->pc = 0x324d4cu;
    // NOP
    // 0x324d50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324d50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324d54: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324d5c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x324d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x324d60: 0xc067648  jal         func_19D920
    ctx->pc = 0x324D60u;
    SET_GPR_U32(ctx, 31, 0x324D68u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324D60u, 0x324D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D68u;
label_324d68:
    // 0x324d68: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x324d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x324d6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324d70: 0x0  nop
    ctx->pc = 0x324d70u;
    // NOP
    // 0x324d74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324d78: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x324d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x324d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324d80: 0x0  nop
    ctx->pc = 0x324d80u;
    // NOP
    // 0x324d84: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x324d84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324d88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324d8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324d90: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324d98: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x324d98u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x324d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324da0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x324da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x324da4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324da8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324da8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324dac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324db0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324dbc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x324dc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324dc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324dc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324dcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324dd4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324dd8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324ddc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x324de0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324de4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x324de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324de8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x324de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324dec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x324decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x324df0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x324df0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x324df4: 0x0  nop
    ctx->pc = 0x324df4u;
    // NOP
    // 0x324df8: 0x0  nop
    ctx->pc = 0x324df8u;
    // NOP
    // 0x324dfc: 0x1810  mfhi        $v1
    ctx->pc = 0x324dfcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x324e00: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x324e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x324e04: 0x2442a190  addiu       $v0, $v0, -0x5E70
    ctx->pc = 0x324e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943120));
    // 0x324e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324e0c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x324e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324e10: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x324e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324e14: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x324e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x324e18: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x324e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x324e1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324e20: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324e24: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x324e24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324e28: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x324e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x324e2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x324e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x324e30: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x324e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324e34: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x324e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324e38: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x324e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324e3c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x324e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x324e40: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x324e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324e44: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x324e44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324e48: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x324e48u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324e4c: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x324E4Cu;
    SET_GPR_U32(ctx, 31, 0x324E54u);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x324E4Cu, 0x324E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E54u;
}
