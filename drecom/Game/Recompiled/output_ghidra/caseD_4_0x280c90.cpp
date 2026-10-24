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

// Function: caseD_4
// Address: 0x280c90 - 0x280e40
void caseD_4_0x280c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x280c90");
#endif

    switch (ctx->pc) {
        case 0x280d00u: goto label_280d00;
        case 0x280d24u: goto label_280d24;
        case 0x280d4cu: goto label_280d4c;
        case 0x280d80u: goto label_280d80;
        case 0x280d8cu: goto label_280d8c;
        case 0x280dacu: goto label_280dac;
        case 0x280dd0u: goto label_280dd0;
        case 0x280df8u: goto label_280df8;
        case 0x280e2cu: goto label_280e2c;
        case 0x280e3cu: goto label_280e3c;
        default: break;
    }

    ctx->pc = 0x280c90u;

    // 0x280c90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280c94: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280c94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280c98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280c9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280ca0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280ca4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280ca8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x280ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x280cac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280cb0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280cb4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280cb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280cbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280cc0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x280cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280cc4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x280cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x280cc8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x280cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x280ccc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280cd0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280cd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280cd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280cd8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x280cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x280cdc: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x280CDCu;
    {
        const bool branch_taken_0x280cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280cdc) {
            ctx->pc = 0x280E40u;
            return;
        }
    }
    ctx->pc = 0x280CE4u;
    // 0x280ce4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280ce8: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x280ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x280cec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280cecu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392090u));
    // 0x280cf0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x280cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280cf4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280cf8: 0xc067648  jal         func_19D920
    ctx->pc = 0x280CF8u;
    SET_GPR_U32(ctx, 31, 0x280D00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280CF8u, 0x280D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D00u;
label_280d00:
    // 0x280d00: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280d04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280d08: 0x0  nop
    ctx->pc = 0x280d08u;
    // NOP
    // 0x280d0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280d10: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280d18: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280d1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x280D1Cu;
    SET_GPR_U32(ctx, 31, 0x280D24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280D1Cu, 0x280D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D24u;
label_280d24:
    // 0x280d24: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x280d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x280d28: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280d2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280d30: 0x0  nop
    ctx->pc = 0x280d30u;
    // NOP
    // 0x280d34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280d38: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280d40: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280d44: 0xc067648  jal         func_19D920
    ctx->pc = 0x280D44u;
    SET_GPR_U32(ctx, 31, 0x280D4Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280D44u, 0x280D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D4Cu;
label_280d4c:
    // 0x280d4c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x280d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x280d50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280d54: 0x0  nop
    ctx->pc = 0x280d54u;
    // NOP
    // 0x280d58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280d58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280d5c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280d64: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280d68: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x280d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x280d6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280d6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280d70: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280d74: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280d74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280d78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280D78u;
    SET_GPR_U32(ctx, 31, 0x280D80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280D78u, 0x280D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D80u;
label_280d80:
    // 0x280d80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280d80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280d84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280D84u;
    SET_GPR_U32(ctx, 31, 0x280D8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280D84u, 0x280D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D8Cu;
label_280d8c:
    // 0x280d8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280d8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280d90: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x280d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x280d94: 0x24632090  addiu       $v1, $v1, 0x2090
    ctx->pc = 0x280d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8336));
    // 0x280d98: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x280d98u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x392090u));
    // 0x280d9c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x280d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280da0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x280da0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x280da4: 0xc067648  jal         func_19D920
    ctx->pc = 0x280DA4u;
    SET_GPR_U32(ctx, 31, 0x280DACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280DA4u, 0x280DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280DACu;
label_280dac:
    // 0x280dac: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x280dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x280db0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x280db0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280db4: 0x0  nop
    ctx->pc = 0x280db4u;
    // NOP
    // 0x280db8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280db8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280dbc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280dc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280dc4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280dc8: 0xc067648  jal         func_19D920
    ctx->pc = 0x280DC8u;
    SET_GPR_U32(ctx, 31, 0x280DD0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280DC8u, 0x280DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280DD0u;
label_280dd0:
    // 0x280dd0: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x280dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x280dd4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x280dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x280dd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280ddc: 0x0  nop
    ctx->pc = 0x280ddcu;
    // NOP
    // 0x280de0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280de4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280de8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280dec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280df0: 0xc067648  jal         func_19D920
    ctx->pc = 0x280DF0u;
    SET_GPR_U32(ctx, 31, 0x280DF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280DF0u, 0x280DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280DF8u;
label_280df8:
    // 0x280df8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x280df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x280dfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280e00: 0x0  nop
    ctx->pc = 0x280e00u;
    // NOP
    // 0x280e04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280e04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280e08: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280e0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280e10: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280e14: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x280e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x280e18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280e18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280e1c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280e20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280e20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280e24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280E24u;
    SET_GPR_U32(ctx, 31, 0x280E2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280E24u, 0x280E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E2Cu;
label_280e2c:
    // 0x280e2c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x280e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280e30: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x280e30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x280e34: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280E34u;
    SET_GPR_U32(ctx, 31, 0x280E3Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280E34u, 0x280E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E3Cu;
label_280e3c:
    // 0x280e3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x280e3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x280e40u;
}
