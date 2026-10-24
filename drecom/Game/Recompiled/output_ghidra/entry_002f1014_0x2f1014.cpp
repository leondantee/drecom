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

// Function: entry_002f1014
// Address: 0x2f1014 - 0x2f111c
void entry_002f1014_0x2f1014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1014_0x2f1014");
#endif

    switch (ctx->pc) {
        case 0x2f106cu: goto label_2f106c;
        case 0x2f1108u: goto label_2f1108;
        default: break;
    }

    ctx->pc = 0x2f1014u;

    // 0x2f1014: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1018: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2f1018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f101c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2f101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2f1020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1024: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f1024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1028: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f1028u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f102c: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x2f102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
    // 0x2f1030: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1034: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f1034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1038: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2f1038u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f103c: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x2f103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x2f1040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1044: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f1044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1048: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f1048u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f104c: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x2f104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
    // 0x2f1050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1054: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f1054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1058: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2f1058u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f105c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1060: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f1060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1064: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x2F1064u;
    SET_GPR_U32(ctx, 31, 0x2F106Cu);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x2F1064u, 0x2F106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F106Cu;
label_2f106c:
    // 0x2f106c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f106cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f1070: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f1070u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1074: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f1074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f1078: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f1078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f107c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f107cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1080: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f1080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f1084: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f1084u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1088: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f1088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f108c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f108cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f1090: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f1090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f1094: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f1094u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1098: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f1098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f109c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f10a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f10a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f10a4: 0x0  nop
    ctx->pc = 0x2f10a4u;
    // NOP
    // 0x2f10a8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f10a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f10ac: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f10acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f10b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f10b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f10b4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f10b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f10b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f10b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f10bc: 0x0  nop
    ctx->pc = 0x2f10bcu;
    // NOP
    // 0x2f10c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f10c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f10c4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f10c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f10c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f10cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f10ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f10d0: 0x0  nop
    ctx->pc = 0x2f10d0u;
    // NOP
    // 0x2f10d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f10d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f10d8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2f10d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2f10dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f10e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f10e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f10e4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2f10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2f10e8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f10e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f10ec: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f10ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f10f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f10f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f10f4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f10f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f10f8: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2f10f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f10fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f10fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1100: 0xc086488  jal         func_219220
    ctx->pc = 0x2F1100u;
    SET_GPR_U32(ctx, 31, 0x2F1108u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F1100u, 0x2F1108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1108u;
label_2f1108:
    // 0x2f1108: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f1108u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f110c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f1110: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f1114: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F111Cu;
}
