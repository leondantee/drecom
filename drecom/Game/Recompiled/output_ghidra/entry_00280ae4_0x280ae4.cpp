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

// Function: entry_00280ae4
// Address: 0x280ae4 - 0x280c90
void entry_00280ae4_0x280ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00280ae4_0x280ae4");
#endif

    switch (ctx->pc) {
        case 0x280b54u: goto label_280b54;
        case 0x280b78u: goto label_280b78;
        case 0x280ba0u: goto label_280ba0;
        case 0x280bd4u: goto label_280bd4;
        case 0x280be0u: goto label_280be0;
        case 0x280bfcu: goto label_280bfc;
        case 0x280c20u: goto label_280c20;
        case 0x280c48u: goto label_280c48;
        case 0x280c7cu: goto label_280c7c;
        case 0x280c88u: goto label_280c88;
        default: break;
    }

    ctx->pc = 0x280ae4u;

    // 0x280ae4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280ae8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280aec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280af0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280af4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280af8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280afc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x280afcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x280b00: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280b04: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280b04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280b08: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280b0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280b10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280b14: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x280b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280b18: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x280b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x280b1c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x280b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x280b20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280b24: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280b24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280b28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280b2c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x280b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x280b30: 0x14600101  bnez        $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x280B30u;
    {
        const bool branch_taken_0x280b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280b30) {
            ctx->pc = 0x280F38u;
            return;
        }
    }
    ctx->pc = 0x280B38u;
    // 0x280b38: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280b3c: 0x24422070  addiu       $v0, $v0, 0x2070
    ctx->pc = 0x280b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8304));
    // 0x280b40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280b40u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392070u));
    // 0x280b44: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x280b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280b48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280b48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280b4c: 0xc067648  jal         func_19D920
    ctx->pc = 0x280B4Cu;
    SET_GPR_U32(ctx, 31, 0x280B54u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280B4Cu, 0x280B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B54u;
label_280b54:
    // 0x280b54: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280b58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280b5c: 0x0  nop
    ctx->pc = 0x280b5cu;
    // NOP
    // 0x280b60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280b60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280b64: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280b68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280b6c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280b70: 0xc067648  jal         func_19D920
    ctx->pc = 0x280B70u;
    SET_GPR_U32(ctx, 31, 0x280B78u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280B70u, 0x280B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B78u;
label_280b78:
    // 0x280b78: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x280b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280b7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280b80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280b84: 0x0  nop
    ctx->pc = 0x280b84u;
    // NOP
    // 0x280b88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280b8c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280b90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280b94: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280b98: 0xc067648  jal         func_19D920
    ctx->pc = 0x280B98u;
    SET_GPR_U32(ctx, 31, 0x280BA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280B98u, 0x280BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BA0u;
label_280ba0:
    // 0x280ba0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280ba4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280ba8: 0x0  nop
    ctx->pc = 0x280ba8u;
    // NOP
    // 0x280bac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280bacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280bb0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280bb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280bb8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280bbc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x280bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x280bc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280bc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280bc4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280bc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280bc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280bcc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280BCCu;
    SET_GPR_U32(ctx, 31, 0x280BD4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280BCCu, 0x280BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BD4u;
label_280bd4:
    // 0x280bd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280bd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280bd8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280BD8u;
    SET_GPR_U32(ctx, 31, 0x280BE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280BD8u, 0x280BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BE0u;
label_280be0:
    // 0x280be0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280be4: 0x24422070  addiu       $v0, $v0, 0x2070
    ctx->pc = 0x280be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8304));
    // 0x280be8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280be8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392070u));
    // 0x280bec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x280becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280bf0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280bf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x280BF4u;
    SET_GPR_U32(ctx, 31, 0x280BFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280BF4u, 0x280BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BFCu;
label_280bfc:
    // 0x280bfc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280c00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280c04: 0x0  nop
    ctx->pc = 0x280c04u;
    // NOP
    // 0x280c08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280c0c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280c10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280c14: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280c18: 0xc067648  jal         func_19D920
    ctx->pc = 0x280C18u;
    SET_GPR_U32(ctx, 31, 0x280C20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280C18u, 0x280C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C20u;
label_280c20:
    // 0x280c20: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x280c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280c24: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280c28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280c2c: 0x0  nop
    ctx->pc = 0x280c2cu;
    // NOP
    // 0x280c30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280c30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280c34: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280c38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280c3c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280c40: 0xc067648  jal         func_19D920
    ctx->pc = 0x280C40u;
    SET_GPR_U32(ctx, 31, 0x280C48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280C40u, 0x280C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C48u;
label_280c48:
    // 0x280c48: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280c4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280c50: 0x0  nop
    ctx->pc = 0x280c50u;
    // NOP
    // 0x280c54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280c58: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280c5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280c60: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280c64: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x280c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x280c68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280c68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280c6c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280c70: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280c70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280c74: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280C74u;
    SET_GPR_U32(ctx, 31, 0x280C7Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280C74u, 0x280C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C7Cu;
label_280c7c:
    // 0x280c7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280c7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280c80: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280C80u;
    SET_GPR_U32(ctx, 31, 0x280C88u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280C80u, 0x280C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C88u;
label_280c88:
    // 0x280c88: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x280C88u;
    {
        const bool branch_taken_0x280c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280c88) {
            ctx->pc = 0x280F38u;
            return;
        }
    }
    ctx->pc = 0x280C90u;
}
