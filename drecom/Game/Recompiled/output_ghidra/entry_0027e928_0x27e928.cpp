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

// Function: entry_0027e928
// Address: 0x27e928 - 0x27ea98
void entry_0027e928_0x27e928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e928_0x27e928");
#endif

    switch (ctx->pc) {
        case 0x27e970u: goto label_27e970;
        case 0x27e97cu: goto label_27e97c;
        case 0x27e9a0u: goto label_27e9a0;
        case 0x27e9c4u: goto label_27e9c4;
        case 0x27e9e8u: goto label_27e9e8;
        case 0x27ea1cu: goto label_27ea1c;
        case 0x27ea28u: goto label_27ea28;
        case 0x27ea84u: goto label_27ea84;
        case 0x27ea90u: goto label_27ea90;
        default: break;
    }

    ctx->pc = 0x27e928u;

    // 0x27e928: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27e928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27e92c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e930: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27e934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e938: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27e938u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e93c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e940: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27e940u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27e944: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x27e944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x27e948: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x27e948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x27e94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e950: 0x0  nop
    ctx->pc = 0x27e950u;
    // NOP
    // 0x27e954: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27e954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27e958: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x27e958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x27e95c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e95cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e960: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27e960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e964: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27e964u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e968: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27E968u;
    SET_GPR_U32(ctx, 31, 0x27E970u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27E968u, 0x27E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E970u;
label_27e970:
    // 0x27e970: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27e970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27e974: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27E974u;
    SET_GPR_U32(ctx, 31, 0x27E97Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27E974u, 0x27E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E97Cu;
label_27e97c:
    // 0x27e97c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27e980: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e984: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27e988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e98c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27e98cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e990: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e994: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27e994u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27e998: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27E998u;
    SET_GPR_U32(ctx, 31, 0x27E9A0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27E998u, 0x27E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9A0u;
label_27e9a0:
    // 0x27e9a0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e9a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e9a8: 0x0  nop
    ctx->pc = 0x27e9a8u;
    // NOP
    // 0x27e9ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27e9acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e9b0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e9b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27e9b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27e9b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27e9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27e9bc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27E9BCu;
    SET_GPR_U32(ctx, 31, 0x27E9C4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27E9BCu, 0x27E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9C4u;
label_27e9c4:
    // 0x27e9c4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e9c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e9cc: 0x0  nop
    ctx->pc = 0x27e9ccu;
    // NOP
    // 0x27e9d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27e9d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e9d4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e9d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27e9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27e9dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27e9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27e9e0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27E9E0u;
    SET_GPR_U32(ctx, 31, 0x27E9E8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27E9E0u, 0x27E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9E8u;
label_27e9e8:
    // 0x27e9e8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e9ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e9f0: 0x0  nop
    ctx->pc = 0x27e9f0u;
    // NOP
    // 0x27e9f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27e9f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e9f8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27e9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e9fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27e9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27ea00: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27ea00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27ea04: 0x24047900  addiu       $a0, $zero, 0x7900
    ctx->pc = 0x27ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x27ea08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27ea08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ea0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27ea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ea10: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ea10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ea14: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27EA14u;
    SET_GPR_U32(ctx, 31, 0x27EA1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27EA14u, 0x27EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA1Cu;
label_27ea1c:
    // 0x27ea1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27ea1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27ea20: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27EA20u;
    SET_GPR_U32(ctx, 31, 0x27EA28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27EA20u, 0x27EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA28u;
label_27ea28:
    // 0x27ea28: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27ea2c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27ea30: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27ea34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ea38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27ea38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ea3c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ea40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27ea40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27ea44: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ea48: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x27ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x27ea4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ea4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ea50: 0x0  nop
    ctx->pc = 0x27ea50u;
    // NOP
    // 0x27ea54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27ea54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ea58: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27ea58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27ea5c: 0x3c0240b0  lui         $v0, 0x40B0
    ctx->pc = 0x27ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16560 << 16));
    // 0x27ea60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ea60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ea64: 0x0  nop
    ctx->pc = 0x27ea64u;
    // NOP
    // 0x27ea68: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27ea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27ea6c: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x27ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27ea70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27ea70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ea74: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27ea74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ea78: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ea78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ea7c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27EA7Cu;
    SET_GPR_U32(ctx, 31, 0x27EA84u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27EA7Cu, 0x27EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA84u;
label_27ea84:
    // 0x27ea84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27ea84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27ea88: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27EA88u;
    SET_GPR_U32(ctx, 31, 0x27EA90u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27EA88u, 0x27EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA90u;
label_27ea90:
    // 0x27ea90: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x27EA90u;
    {
        const bool branch_taken_0x27ea90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea90) {
            ctx->pc = 0x27EC10u;
            return;
        }
    }
    ctx->pc = 0x27EA98u;
}
