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

// Function: entry_00324e54
// Address: 0x324e54 - 0x32502c
void entry_00324e54_0x324e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324e54_0x324e54");
#endif

    switch (ctx->pc) {
        case 0x324ed4u: goto label_324ed4;
        case 0x324ef8u: goto label_324ef8;
        case 0x324f1cu: goto label_324f1c;
        case 0x324f40u: goto label_324f40;
        default: break;
    }

    ctx->pc = 0x324e54u;

    // 0x324e54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324e58: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324e58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324e5c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324e60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324e64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324e68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324e6c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x324e70: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324e74: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324e74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324e78: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324e7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324e84: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324e88: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324e8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x324e90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324e94: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x324e94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324e98: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x324e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324e9c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x324e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x324ea0: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x324ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324ea8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x324ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324eac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x324eacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x324eb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324eb4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x324eb4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x324eb8: 0x0  nop
    ctx->pc = 0x324eb8u;
    // NOP
    // 0x324ebc: 0x0  nop
    ctx->pc = 0x324ebcu;
    // NOP
    // 0x324ec0: 0x1010  mfhi        $v0
    ctx->pc = 0x324ec0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x324ec4: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x324EC4u;
    {
        const bool branch_taken_0x324ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324ec4) {
            ctx->pc = 0x32502Cu;
            return;
        }
    }
    ctx->pc = 0x324ECCu;
    // 0x324ecc: 0xc067648  jal         func_19D920
    ctx->pc = 0x324ECCu;
    SET_GPR_U32(ctx, 31, 0x324ED4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324ECCu, 0x324ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324ED4u;
label_324ed4:
    // 0x324ed4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324edc: 0x0  nop
    ctx->pc = 0x324edcu;
    // NOP
    // 0x324ee0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324ee4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324eec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x324eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x324ef0: 0xc067648  jal         func_19D920
    ctx->pc = 0x324EF0u;
    SET_GPR_U32(ctx, 31, 0x324EF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324EF0u, 0x324EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324EF8u;
label_324ef8:
    // 0x324ef8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324efc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f00: 0x0  nop
    ctx->pc = 0x324f00u;
    // NOP
    // 0x324f04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324f08: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324f0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324f10: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x324f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x324f14: 0xc067648  jal         func_19D920
    ctx->pc = 0x324F14u;
    SET_GPR_U32(ctx, 31, 0x324F1Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324F14u, 0x324F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F1Cu;
label_324f1c:
    // 0x324f1c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324f20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f24: 0x0  nop
    ctx->pc = 0x324f24u;
    // NOP
    // 0x324f28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324f2c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324f30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324f34: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x324f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x324f38: 0xc067648  jal         func_19D920
    ctx->pc = 0x324F38u;
    SET_GPR_U32(ctx, 31, 0x324F40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324F38u, 0x324F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F40u;
label_324f40:
    // 0x324f40: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x324f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x324f44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f48: 0x0  nop
    ctx->pc = 0x324f48u;
    // NOP
    // 0x324f4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324f4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324f50: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x324f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x324f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324f58: 0x0  nop
    ctx->pc = 0x324f58u;
    // NOP
    // 0x324f5c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x324f5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324f60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324f64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f68: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324f6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324f70: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x324f70u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x324f74: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x324f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x324f78: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x324f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x324f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324f80: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x324f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x324f84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324f88: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324f88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324f8c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324f90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324f98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324f9c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x324fa0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324fa4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324fa8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324fac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324fb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324fb4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324fb8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324fbc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x324fc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324fc4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x324fc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324fc8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x324fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324fcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x324fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x324fd0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x324fd0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x324fd4: 0x0  nop
    ctx->pc = 0x324fd4u;
    // NOP
    // 0x324fd8: 0x0  nop
    ctx->pc = 0x324fd8u;
    // NOP
    // 0x324fdc: 0x1810  mfhi        $v1
    ctx->pc = 0x324fdcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x324fe0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x324fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x324fe4: 0x2442a190  addiu       $v0, $v0, -0x5E70
    ctx->pc = 0x324fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943120));
    // 0x324fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324fec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x324fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324ff0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x324ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324ff4: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x324ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x324ff8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x324ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x324ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325000: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x325000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325004: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x325004u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325008: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x325008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32500c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x32500cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x325010: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x325010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x325014: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x325014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x325018: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x325018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32501c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x32501cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x325020: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x325020u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x325024: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x325024u;
    SET_GPR_U32(ctx, 31, 0x32502Cu);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x325024u, 0x32502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32502Cu;
}
