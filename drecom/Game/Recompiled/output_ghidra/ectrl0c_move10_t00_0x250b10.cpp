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

// Function: ectrl0c_move10_t00
// Address: 0x250b10 - 0x250cc4
void ectrl0c_move10_t00_0x250b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0c_move10_t00_0x250b10");
#endif

    switch (ctx->pc) {
        case 0x250b90u: goto label_250b90;
        case 0x250b9cu: goto label_250b9c;
        case 0x250c0cu: goto label_250c0c;
        case 0x250c30u: goto label_250c30;
        case 0x250c80u: goto label_250c80;
        case 0x250c8cu: goto label_250c8c;
        default: break;
    }

    ctx->pc = 0x250b10u;

    // 0x250b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250b14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x250b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x250b18: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x250b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x250b1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250b20: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x250b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x250b24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x250b24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250b28: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x250b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250b2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x250b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x250b30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x250b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250b34: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x250b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x250b38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x250b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x250b3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x250b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250b40: 0xc46000d8  lwc1        $f0, 0xD8($v1)
    ctx->pc = 0x250b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250b44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x250b44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x250b48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x250b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x250b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250b50: 0x0  nop
    ctx->pc = 0x250b50u;
    // NOP
    // 0x250b54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x250b54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x250b58: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x250b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x250b5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250b60: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250b64: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250b68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250b6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250b70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250b74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250b78: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250b7c: 0x24042802  addiu       $a0, $zero, 0x2802
    ctx->pc = 0x250b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10242));
    // 0x250b80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x250b80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x250b84: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x250b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250b88: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250B88u;
    SET_GPR_U32(ctx, 31, 0x250B90u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250B88u, 0x250B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B90u;
label_250b90:
    // 0x250b90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250b90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250b94: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250B94u;
    SET_GPR_U32(ctx, 31, 0x250B9Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250B94u, 0x250B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B9Cu;
label_250b9c:
    // 0x250b9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x250b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250ba0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x250ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x250ba4: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x250ba4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x250ba8: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x250BA8u;
    {
        const bool branch_taken_0x250ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x250ba8) {
            ctx->pc = 0x250C8Cu;
            goto label_250c8c;
        }
    }
    ctx->pc = 0x250BB0u;
    // 0x250bb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x250bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x250bb4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x250bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x250bb8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x250bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x250bbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x250bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250bc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x250bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x250bc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x250bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x250bc8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x250bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x250bcc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x250bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x250bd0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x250bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x250bd4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x250bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x250bd8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x250bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250bdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x250bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x250be0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x250be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x250be4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x250be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x250be8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x250be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x250bec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x250becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x250bf0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x250bf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x250bf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x250bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x250bf8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x250bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x250bfc: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x250BFCu;
    {
        const bool branch_taken_0x250bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x250bfc) {
            ctx->pc = 0x250C8Cu;
            goto label_250c8c;
        }
    }
    ctx->pc = 0x250C04u;
    // 0x250c04: 0xc067648  jal         func_19D920
    ctx->pc = 0x250C04u;
    SET_GPR_U32(ctx, 31, 0x250C0Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x250C04u, 0x250C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C0Cu;
label_250c0c:
    // 0x250c0c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x250c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x250c10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x250c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250c14: 0x0  nop
    ctx->pc = 0x250c14u;
    // NOP
    // 0x250c18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x250c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x250c1c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x250c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250c20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x250c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x250c24: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x250c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x250c28: 0xc067648  jal         func_19D920
    ctx->pc = 0x250C28u;
    SET_GPR_U32(ctx, 31, 0x250C30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x250C28u, 0x250C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C30u;
label_250c30:
    // 0x250c30: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x250c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x250c34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x250c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250c38: 0x0  nop
    ctx->pc = 0x250c38u;
    // NOP
    // 0x250c3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x250c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x250c40: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x250c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250c44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x250c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x250c48: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x250c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x250c4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250c50: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250c54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250c58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250c5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250c60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250c64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250c68: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250c6c: 0x24041900  addiu       $a0, $zero, 0x1900
    ctx->pc = 0x250c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    // 0x250c70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x250c70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x250c74: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x250c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250c78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250C78u;
    SET_GPR_U32(ctx, 31, 0x250C80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250C78u, 0x250C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C80u;
label_250c80:
    // 0x250c80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250c84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250C84u;
    SET_GPR_U32(ctx, 31, 0x250C8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250C84u, 0x250C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C8Cu;
label_250c8c:
    // 0x250c8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x250c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250c90: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x250c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x250c94: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x250c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x250c98: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x250C98u;
    {
        const bool branch_taken_0x250c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x250c98) {
            ctx->pc = 0x250CB4u;
            goto label_250cb4;
        }
    }
    ctx->pc = 0x250CA0u;
    // 0x250ca0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x250ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250ca4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x250ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250ca8: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x250ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x250cac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x250cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250cb0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x250cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_250cb4:
    // 0x250cb4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x250cb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250cb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x250CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250CC4u;
}
