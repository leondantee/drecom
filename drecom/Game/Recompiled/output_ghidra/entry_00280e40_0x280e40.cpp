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

// Function: entry_00280e40
// Address: 0x280e40 - 0x280f24
void entry_00280e40_0x280e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00280e40_0x280e40");
#endif

    switch (ctx->pc) {
        case 0x280eb0u: goto label_280eb0;
        case 0x280ed4u: goto label_280ed4;
        case 0x280ef8u: goto label_280ef8;
        default: break;
    }

    ctx->pc = 0x280e40u;

    // 0x280e40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280e44: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280e44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280e48: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x280e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280e4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x280e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x280e50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x280e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x280e54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280e58: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x280e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x280e5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280e60: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280e60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280e64: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x280e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280e68: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x280e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280e6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x280e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x280e70: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x280e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280e74: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x280e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x280e78: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x280e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x280e7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280e80: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280e84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280e88: 0x3064007f  andi        $a0, $v1, 0x7F
    ctx->pc = 0x280e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x280e8c: 0x1480002a  bnez        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x280E8Cu;
    {
        const bool branch_taken_0x280e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x280e8c) {
            ctx->pc = 0x280F38u;
            return;
        }
    }
    ctx->pc = 0x280E94u;
    // 0x280e94: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x280e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x280e98: 0x24c220a0  addiu       $v0, $a2, 0x20A0
    ctx->pc = 0x280e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8352));
    // 0x280e9c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x280e9cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3920A0u));
    // 0x280ea0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x280ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280ea4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x280ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x280ea8: 0xc067648  jal         func_19D920
    ctx->pc = 0x280EA8u;
    SET_GPR_U32(ctx, 31, 0x280EB0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280EA8u, 0x280EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EB0u;
label_280eb0:
    // 0x280eb0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280eb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280eb8: 0x0  nop
    ctx->pc = 0x280eb8u;
    // NOP
    // 0x280ebc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280ec0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280ec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280ec8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280ecc: 0xc067648  jal         func_19D920
    ctx->pc = 0x280ECCu;
    SET_GPR_U32(ctx, 31, 0x280ED4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280ECCu, 0x280ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280ED4u;
label_280ed4:
    // 0x280ed4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x280ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x280ed8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280edc: 0x0  nop
    ctx->pc = 0x280edcu;
    // NOP
    // 0x280ee0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280ee4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280ee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280eec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280ef0: 0xc067648  jal         func_19D920
    ctx->pc = 0x280EF0u;
    SET_GPR_U32(ctx, 31, 0x280EF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280EF0u, 0x280EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EF8u;
label_280ef8:
    // 0x280ef8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280efc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280f00: 0x0  nop
    ctx->pc = 0x280f00u;
    // NOP
    // 0x280f04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280f08: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280f0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280f10: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280f14: 0x24040103  addiu       $a0, $zero, 0x103
    ctx->pc = 0x280f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x280f18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280f18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280f1c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280f20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280f20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x280f24u;
}
