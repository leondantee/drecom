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

// Function: entry_0022105c
// Address: 0x22105c - 0x221150
void entry_0022105c_0x22105c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022105c_0x22105c");
#endif

    switch (ctx->pc) {
        case 0x2210bcu: goto label_2210bc;
        case 0x2210c8u: goto label_2210c8;
        case 0x221100u: goto label_221100;
        case 0x221110u: goto label_221110;
        default: break;
    }

    ctx->pc = 0x22105cu;

    // 0x22105c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22105cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221060: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x221060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x221064: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x221064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x221068: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x221068u;
    {
        const bool branch_taken_0x221068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x221068) {
            ctx->pc = 0x221150u;
            return;
        }
    }
    ctx->pc = 0x221070u;
    // 0x221070: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221074: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x221074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221078: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x221078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x22107c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221080: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x221080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221084: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x221084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x221088: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x22108c: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x22108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221090: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x221090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x221094: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x221094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x221098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22109c: 0x0  nop
    ctx->pc = 0x22109cu;
    // NOP
    // 0x2210a0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2210a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2210a4: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x2210a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x2210a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2210a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2210ac: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2210acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2210b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2210b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2210b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2210B4u;
    SET_GPR_U32(ctx, 31, 0x2210BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2210B4u, 0x2210BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210BCu;
label_2210bc:
    // 0x2210bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2210bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2210c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2210C0u;
    SET_GPR_U32(ctx, 31, 0x2210C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2210C0u, 0x2210C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210C8u;
label_2210c8:
    // 0x2210c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2210c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2210cc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2210ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2210d0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2210d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2210d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2210d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2210d8: 0x0  nop
    ctx->pc = 0x2210d8u;
    // NOP
    // 0x2210dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2210dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2210e0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2210e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2210e4: 0x2407170e  addiu       $a3, $zero, 0x170E
    ctx->pc = 0x2210e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x2210e8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2210e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2210ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2210ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2210f0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2210f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2210f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2210f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2210f8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2210F8u;
    SET_GPR_U32(ctx, 31, 0x221100u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2210F8u, 0x221100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221100u;
label_221100:
    // 0x221100: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x221100u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221104: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x221104u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x221108: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x221108u;
    SET_GPR_U32(ctx, 31, 0x221110u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x221108u, 0x221110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221110u;
label_221110:
    // 0x221110: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x221110u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221114: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221118: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x221118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x22111c: 0x24720120  addiu       $s2, $v1, 0x120
    ctx->pc = 0x22111cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x221120: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x221120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x221124: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x221124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x221128: 0x4313c  dsll32      $a2, $a0, 4
    ctx->pc = 0x221128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 4));
    // 0x22112c: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x22112cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
    // 0x221130: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x221130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x221134: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x221134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x221138: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x221138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x22113c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22113cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x221140: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x221140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x221144: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x221144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x221148: 0x34860002  ori         $a2, $a0, 0x2
    ctx->pc = 0x221148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x22114c: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x22114cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    ctx->pc = 0x221150u;
}
