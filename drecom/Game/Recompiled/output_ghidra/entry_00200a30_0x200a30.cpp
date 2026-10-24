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

// Function: entry_00200a30
// Address: 0x200a30 - 0x200b90
void entry_00200a30_0x200a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200a30_0x200a30");
#endif

    switch (ctx->pc) {
        case 0x200a6cu: goto label_200a6c;
        case 0x200a74u: goto label_200a74;
        case 0x200aacu: goto label_200aac;
        case 0x200ad0u: goto label_200ad0;
        case 0x200b08u: goto label_200b08;
        case 0x200b10u: goto label_200b10;
        case 0x200b5cu: goto label_200b5c;
        case 0x200b64u: goto label_200b64;
        default: break;
    }

    ctx->pc = 0x200a30u;

    // 0x200a30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200a34: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x200a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x200a38: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x200a38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x200a3c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x200a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x200a40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x200a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x200a44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200a48: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x200a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200a4c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x200a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200a50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200a58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x200a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200a5c: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x200a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x200a60: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x200a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x200a64: 0xc040c80  jal         func_103200
    ctx->pc = 0x200A64u;
    SET_GPR_U32(ctx, 31, 0x200A6Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x200A6Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200A6Cu) { return; }
    ctx->pc = 0x200A6Cu;
label_200a6c:
    // 0x200a6c: 0xc067648  jal         func_19D920
    ctx->pc = 0x200A6Cu;
    SET_GPR_U32(ctx, 31, 0x200A74u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200A6Cu, 0x200A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A74u;
label_200a74:
    // 0x200a74: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x200a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x200a78: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x200a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x200a7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x200a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200a80: 0x0  nop
    ctx->pc = 0x200a80u;
    // NOP
    // 0x200a84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x200a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200a88: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x200a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x200a8c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x200a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x200a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200a94: 0x0  nop
    ctx->pc = 0x200a94u;
    // NOP
    // 0x200a98: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x200a98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200a9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x200a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200aa0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x200aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200aa4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x200AA4u;
    SET_GPR_U32(ctx, 31, 0x200AACu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x200AACu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200AACu) { return; }
    ctx->pc = 0x200AACu;
label_200aac:
    // 0x200aac: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200ab0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200ab4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x200ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200ab8: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x200ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200abc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200ac0: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x200ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200ac4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x200ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200ac8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x200AC8u;
    SET_GPR_U32(ctx, 31, 0x200AD0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x200AD0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200AD0u) { return; }
    ctx->pc = 0x200AD0u;
label_200ad0:
    // 0x200ad0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x200ad0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x200ad4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200ad8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200adc: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x200adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200ae0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200ae4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200ae8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x200ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200aec: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200aecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200af0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200af4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x200af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200af8: 0x24e40480  addiu       $a0, $a3, 0x480
    ctx->pc = 0x200af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1152));
    // 0x200afc: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x200afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x200b00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x200B00u;
    SET_GPR_U32(ctx, 31, 0x200B08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x200B00u, 0x200B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B08u;
label_200b08:
    // 0x200b08: 0xc067648  jal         func_19D920
    ctx->pc = 0x200B08u;
    SET_GPR_U32(ctx, 31, 0x200B10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200B08u, 0x200B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B10u;
label_200b10:
    // 0x200b10: 0x3c033e2e  lui         $v1, 0x3E2E
    ctx->pc = 0x200b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15918 << 16));
    // 0x200b14: 0x3465147b  ori         $a1, $v1, 0x147B
    ctx->pc = 0x200b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x200b18: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x200b18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200b1c: 0x0  nop
    ctx->pc = 0x200b1cu;
    // NOP
    // 0x200b20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x200b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200b24: 0x3c023f63  lui         $v0, 0x3F63
    ctx->pc = 0x200b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16227 << 16));
    // 0x200b28: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x200b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x200b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200b30: 0x0  nop
    ctx->pc = 0x200b30u;
    // NOP
    // 0x200b34: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x200b34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200b38: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200b3c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x200b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200b40: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x200b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x200b44: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x200b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200b48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200b4c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x200b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x200b50: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x200b50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x200b54: 0xc040c8c  jal         func_103230
    ctx->pc = 0x200B54u;
    SET_GPR_U32(ctx, 31, 0x200B5Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x200B5Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200B5Cu) { return; }
    ctx->pc = 0x200B5Cu;
label_200b5c:
    // 0x200b5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x200B5Cu;
    SET_GPR_U32(ctx, 31, 0x200B64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200B5Cu, 0x200B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B64u;
label_200b64:
    // 0x200b64: 0x3c043f99  lui         $a0, 0x3F99
    ctx->pc = 0x200b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16281 << 16));
    // 0x200b68: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x200b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x200b6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x200b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200b70: 0x0  nop
    ctx->pc = 0x200b70u;
    // NOP
    // 0x200b74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x200b74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x200b78: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x200b78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200b7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200b80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x200b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200b84: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x200b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x200b88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x200b8c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x200b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->pc = 0x200b90u;
}
