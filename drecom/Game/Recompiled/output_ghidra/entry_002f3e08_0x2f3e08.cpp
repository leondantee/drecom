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

// Function: entry_002f3e08
// Address: 0x2f3e08 - 0x2f3fec
void entry_002f3e08_0x2f3e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f3e08_0x2f3e08");
#endif

    switch (ctx->pc) {
        case 0x2f3e8cu: goto label_2f3e8c;
        case 0x2f3eb0u: goto label_2f3eb0;
        case 0x2f3ed4u: goto label_2f3ed4;
        case 0x2f3ef8u: goto label_2f3ef8;
        default: break;
    }

    ctx->pc = 0x2f3e08u;

    // 0x2f3e08: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f3e0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3e10: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3e14: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3e18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3e1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3e20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3e24: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3e28: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3e2c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3e30: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3e34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3e3c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3e40: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3e44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3e48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3e4c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3e50: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f3e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3e54: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f3e58: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f3e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f3e5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3e60: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3e64: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f3e64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2f3e68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3e6c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f3e6cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f3e70: 0x0  nop
    ctx->pc = 0x2f3e70u;
    // NOP
    // 0x2f3e74: 0x0  nop
    ctx->pc = 0x2f3e74u;
    // NOP
    // 0x2f3e78: 0x1010  mfhi        $v0
    ctx->pc = 0x2f3e78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f3e7c: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F3E7Cu;
    {
        const bool branch_taken_0x2f3e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3e7c) {
            ctx->pc = 0x2F3FECu;
            return;
        }
    }
    ctx->pc = 0x2F3E84u;
    // 0x2f3e84: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3E84u;
    SET_GPR_U32(ctx, 31, 0x2F3E8Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3E84u, 0x2F3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E8Cu;
label_2f3e8c:
    // 0x2f3e8c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f3e90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3e94: 0x0  nop
    ctx->pc = 0x2f3e94u;
    // NOP
    // 0x2f3e98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3e98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3e9c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ea0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f3ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f3ea4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f3ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f3ea8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3EA8u;
    SET_GPR_U32(ctx, 31, 0x2F3EB0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3EA8u, 0x2F3EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3EB0u;
label_2f3eb0:
    // 0x2f3eb0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f3eb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3eb8: 0x0  nop
    ctx->pc = 0x2f3eb8u;
    // NOP
    // 0x2f3ebc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3ec0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ec4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f3ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f3ec8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2f3ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f3ecc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3ECCu;
    SET_GPR_U32(ctx, 31, 0x2F3ED4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3ECCu, 0x2F3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3ED4u;
label_2f3ed4:
    // 0x2f3ed4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f3ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3edc: 0x0  nop
    ctx->pc = 0x2f3edcu;
    // NOP
    // 0x2f3ee0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3ee4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f3ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f3eec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2f3eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f3ef0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3EF0u;
    SET_GPR_U32(ctx, 31, 0x2F3EF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3EF0u, 0x2F3EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3EF8u;
label_2f3ef8:
    // 0x2f3ef8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2f3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2f3efc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3f00: 0x0  nop
    ctx->pc = 0x2f3f00u;
    // NOP
    // 0x2f3f04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3f08: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2f3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2f3f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3f10: 0x0  nop
    ctx->pc = 0x2f3f10u;
    // NOP
    // 0x2f3f14: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2f3f14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3f18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f3f1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3f20: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f3f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3f28: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f3f28u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f3f2c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f3f30: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3f38: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3f3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3f40: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3f44: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3f48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3f50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3f54: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3f58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3f5c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3f60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3f64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3f6c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3f70: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3f74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3f78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3f7c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3f80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3f84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f3f88: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3f88u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3f8c: 0x0  nop
    ctx->pc = 0x2f3f8cu;
    // NOP
    // 0x2f3f90: 0x0  nop
    ctx->pc = 0x2f3f90u;
    // NOP
    // 0x2f3f94: 0x1810  mfhi        $v1
    ctx->pc = 0x2f3f94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f3f98: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f3f9c: 0x24428e90  addiu       $v0, $v0, -0x7170
    ctx->pc = 0x2f3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
    // 0x2f3fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3fa4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f3fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3fa8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f3fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3fac: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2f3facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x2f3fb0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f3fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f3fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3fb8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3fbc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2f3fbcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3fc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3fc4: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f3fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3fc8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f3fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3fcc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3fd0: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f3fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3fd4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2f3fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3fd8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f3fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3fdc: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f3fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3fe0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3fe0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3fe4: 0xc0bbe74  jal         func_2EF9D0
    ctx->pc = 0x2F3FE4u;
    SET_GPR_U32(ctx, 31, 0x2F3FECu);
    ctx->pc = 0x2EF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF9D0u, 0x2F3FE4u, 0x2F3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3FECu;
}
