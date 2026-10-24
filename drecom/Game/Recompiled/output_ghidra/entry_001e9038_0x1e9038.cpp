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

// Function: entry_001e9038
// Address: 0x1e9038 - 0x1e9128
void entry_001e9038_0x1e9038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9038_0x1e9038");
#endif

    switch (ctx->pc) {
        case 0x1e9098u: goto label_1e9098;
        case 0x1e90a4u: goto label_1e90a4;
        case 0x1e90d8u: goto label_1e90d8;
        case 0x1e90e8u: goto label_1e90e8;
        default: break;
    }

    ctx->pc = 0x1e9038u;

    // 0x1e9038: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e903c: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x1e903cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x1e9040: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e9040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e9044: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1E9044u;
    {
        const bool branch_taken_0x1e9044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9044) {
            ctx->pc = 0x1E9128u;
            return;
        }
    }
    ctx->pc = 0x1E904Cu;
    // 0x1e904c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9050: 0xc4801200  lwc1        $f0, 0x1200($a0)
    ctx->pc = 0x1e9050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9054: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e9054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e9058: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e905c: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x1e905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9060: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e9060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e9064: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9068: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x1e9068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e906c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e9070: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e9070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e9074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9078: 0x0  nop
    ctx->pc = 0x1e9078u;
    // NOP
    // 0x1e907c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e907cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e9080: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e9080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e9084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e9084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9088: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e9088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e908c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e908cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9090: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E9090u;
    SET_GPR_U32(ctx, 31, 0x1E9098u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E9090u, 0x1E9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9098u;
label_1e9098:
    // 0x1e9098: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e9098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e909c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E909Cu;
    SET_GPR_U32(ctx, 31, 0x1E90A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E909Cu, 0x1E90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90A4u;
label_1e90a4:
    // 0x1e90a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e90a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e90a8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1e90a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e90ac: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1e90acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1e90b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e90b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e90b4: 0x0  nop
    ctx->pc = 0x1e90b4u;
    // NOP
    // 0x1e90b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e90b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e90bc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e90bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e90c0: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e90c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e90c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e90c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e90c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e90cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e90ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e90d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E90D0u;
    SET_GPR_U32(ctx, 31, 0x1E90D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E90D0u, 0x1E90D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90D8u;
label_1e90d8:
    // 0x1e90d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e90d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e90dc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1e90dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e90e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E90E0u;
    SET_GPR_U32(ctx, 31, 0x1E90E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E90E0u, 0x1E90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90E8u;
label_1e90e8:
    // 0x1e90e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e90e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e90ec: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e90f0: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1e90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1e90f4: 0x24720120  addiu       $s2, $v1, 0x120
    ctx->pc = 0x1e90f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1e90f8: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x1e90f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1e90fc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e9100: 0x3293c  dsll32      $a1, $v1, 4
    ctx->pc = 0x1e9100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1e9104: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x1e9104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x1e9108: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x1e9108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x1e910c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1e910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e9110: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e9110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e9114: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e9114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e9118: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1e9118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1e911c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e911cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e9120: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1e9120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1e9124: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1e9124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1e9128u;
}
