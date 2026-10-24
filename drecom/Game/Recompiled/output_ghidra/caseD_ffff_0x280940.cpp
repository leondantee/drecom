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

// Function: caseD_ffff
// Address: 0x280940 - 0x280ae4
void caseD_ffff_0x280940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_ffff_0x280940");
#endif

    switch (ctx->pc) {
        case 0x2809b0u: goto label_2809b0;
        case 0x2809d4u: goto label_2809d4;
        case 0x2809fcu: goto label_2809fc;
        case 0x280a30u: goto label_280a30;
        case 0x280a3cu: goto label_280a3c;
        case 0x280a58u: goto label_280a58;
        case 0x280a7cu: goto label_280a7c;
        case 0x280aa4u: goto label_280aa4;
        case 0x280ad8u: goto label_280ad8;
        default: break;
    }

    ctx->pc = 0x280940u;

    // 0x280940: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280944: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280944u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280948: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28094c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28094cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280954: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280958: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x280958u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x28095c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28095cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280960: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280960u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280964: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280968: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28096c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280970: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x280970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280974: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x280974u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x280978: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x280978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28097c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28097cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280980: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280984: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280988: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x280988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x28098c: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x28098Cu;
    {
        const bool branch_taken_0x28098c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28098c) {
            ctx->pc = 0x280AE4u;
            return;
        }
    }
    ctx->pc = 0x280994u;
    // 0x280994: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280998: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x280998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x28099c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28099cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392080u));
    // 0x2809a0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2809a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2809a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2809a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2809a8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2809A8u;
    SET_GPR_U32(ctx, 31, 0x2809B0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2809A8u, 0x2809B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809B0u;
label_2809b0:
    // 0x2809b0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2809b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2809b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2809b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2809b8: 0x0  nop
    ctx->pc = 0x2809b8u;
    // NOP
    // 0x2809bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2809bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2809c0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2809c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2809c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2809c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2809c8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2809c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2809cc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2809CCu;
    SET_GPR_U32(ctx, 31, 0x2809D4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2809CCu, 0x2809D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809D4u;
label_2809d4:
    // 0x2809d4: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x2809d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x2809d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2809d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2809dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2809dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2809e0: 0x0  nop
    ctx->pc = 0x2809e0u;
    // NOP
    // 0x2809e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2809e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2809e8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2809e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2809ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2809ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2809f0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2809f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2809f4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2809F4u;
    SET_GPR_U32(ctx, 31, 0x2809FCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2809F4u, 0x2809FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809FCu;
label_2809fc:
    // 0x2809fc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2809fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280a00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280a04: 0x0  nop
    ctx->pc = 0x280a04u;
    // NOP
    // 0x280a08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280a0c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280a14: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280a18: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x280a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x280a1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280a1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280a20: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280a24: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280a24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280a28: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280A28u;
    SET_GPR_U32(ctx, 31, 0x280A30u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280A28u, 0x280A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A30u;
label_280a30:
    // 0x280a30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280a30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280a34: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280A34u;
    SET_GPR_U32(ctx, 31, 0x280A3Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280A34u, 0x280A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A3Cu;
label_280a3c:
    // 0x280a3c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280a40: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x280a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x280a44: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280a44u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392080u));
    // 0x280a48: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x280a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280a4c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280a50: 0xc067648  jal         func_19D920
    ctx->pc = 0x280A50u;
    SET_GPR_U32(ctx, 31, 0x280A58u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280A50u, 0x280A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A58u;
label_280a58:
    // 0x280a58: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280a5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280a60: 0x0  nop
    ctx->pc = 0x280a60u;
    // NOP
    // 0x280a64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280a64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280a68: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280a70: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280a74: 0xc067648  jal         func_19D920
    ctx->pc = 0x280A74u;
    SET_GPR_U32(ctx, 31, 0x280A7Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280A74u, 0x280A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A7Cu;
label_280a7c:
    // 0x280a7c: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x280a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280a80: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280a84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280a88: 0x0  nop
    ctx->pc = 0x280a88u;
    // NOP
    // 0x280a8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280a90: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280a98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280a9c: 0xc067648  jal         func_19D920
    ctx->pc = 0x280A9Cu;
    SET_GPR_U32(ctx, 31, 0x280AA4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280A9Cu, 0x280AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AA4u;
label_280aa4:
    // 0x280aa4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280aa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280aac: 0x0  nop
    ctx->pc = 0x280aacu;
    // NOP
    // 0x280ab0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280ab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280ab4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280ab8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280abc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280ac0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x280ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x280ac4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280ac4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280ac8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280acc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280accu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280ad0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280AD0u;
    SET_GPR_U32(ctx, 31, 0x280AD8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280AD0u, 0x280AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AD8u;
label_280ad8:
    // 0x280ad8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280ad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280adc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280ADCu;
    SET_GPR_U32(ctx, 31, 0x280AE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280ADCu, 0x280AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AE4u;
}
