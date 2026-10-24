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

// Function: entry_00340f84
// Address: 0x340f84 - 0x3410c4
void entry_00340f84_0x340f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340f84_0x340f84");
#endif

    switch (ctx->pc) {
        case 0x340fa8u: goto label_340fa8;
        case 0x341030u: goto label_341030;
        case 0x34103cu: goto label_34103c;
        case 0x341070u: goto label_341070;
        case 0x34107cu: goto label_34107c;
        case 0x3410b0u: goto label_3410b0;
        case 0x3410bcu: goto label_3410bc;
        default: break;
    }

    ctx->pc = 0x340f84u;

    // 0x340f84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x340f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340f88: 0x0  nop
    ctx->pc = 0x340f88u;
    // NOP
    // 0x340f8c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x340f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x340f90: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340f94: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x340f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x340f98: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x340f98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x340f9c: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x340f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x340fa0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x340FA0u;
    SET_GPR_U32(ctx, 31, 0x340FA8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x340FA0u, 0x340FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340FA8u;
label_340fa8:
    // 0x340fa8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x340fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x340fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x340facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340fb0: 0x0  nop
    ctx->pc = 0x340fb0u;
    // NOP
    // 0x340fb4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x340fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x340fb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x340fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x340fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x340fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340fc0: 0x0  nop
    ctx->pc = 0x340fc0u;
    // NOP
    // 0x340fc4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x340fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x340fc8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340fcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x340fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x340fd0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x340fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x340fd4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x340fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x340fd8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x340FD8u;
    {
        const bool branch_taken_0x340fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340fd8) {
            ctx->pc = 0x3410C4u;
            return;
        }
    }
    ctx->pc = 0x340FE0u;
    // 0x340fe0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340fe4: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x340fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340fe8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x340fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x340fec: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340ff0: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x340ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340ff4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x340ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x340ff8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340ffc: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x340ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341000: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x341000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x341004: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x341004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x341008: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341008u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34100c: 0x0  nop
    ctx->pc = 0x34100cu;
    // NOP
    // 0x341010: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x341010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x341014: 0x2406050c  addiu       $a2, $zero, 0x50C
    ctx->pc = 0x341014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341018: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x341018u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34101c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34101cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341020: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x341020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x341024: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341024u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341028: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x341028u;
    SET_GPR_U32(ctx, 31, 0x341030u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x341028u, 0x341030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341030u;
label_341030:
    // 0x341030: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x341030u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341034: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x341034u;
    SET_GPR_U32(ctx, 31, 0x34103Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x341034u, 0x34103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34103Cu;
label_34103c:
    // 0x34103c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x34103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341040: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x341040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x341044: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341044u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341048: 0x0  nop
    ctx->pc = 0x341048u;
    // NOP
    // 0x34104c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34104cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341050: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x341050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x341054: 0x2406050c  addiu       $a2, $zero, 0x50C
    ctx->pc = 0x341054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341058: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x341058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34105c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34105cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341060: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x341060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x341064: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341064u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341068: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x341068u;
    SET_GPR_U32(ctx, 31, 0x341070u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x341068u, 0x341070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341070u;
label_341070:
    // 0x341070: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x341070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341074: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x341074u;
    SET_GPR_U32(ctx, 31, 0x34107Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x341074u, 0x34107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34107Cu;
label_34107c:
    // 0x34107c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x34107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341080: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x341080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x341084: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341084u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341088: 0x0  nop
    ctx->pc = 0x341088u;
    // NOP
    // 0x34108c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34108cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341090: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x341090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x341094: 0x2406050c  addiu       $a2, $zero, 0x50C
    ctx->pc = 0x341094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341098: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x341098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34109c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34109cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3410a0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3410a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3410a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3410a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3410a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3410A8u;
    SET_GPR_U32(ctx, 31, 0x3410B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3410A8u, 0x3410B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410B0u;
label_3410b0:
    // 0x3410b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3410b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3410b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3410B4u;
    SET_GPR_U32(ctx, 31, 0x3410BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3410B4u, 0x3410BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410BCu;
label_3410bc:
    // 0x3410bc: 0x100002c8  b           . + 4 + (0x2C8 << 2)
    ctx->pc = 0x3410BCu;
    {
        const bool branch_taken_0x3410bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3410bc) {
            ctx->pc = 0x341BE0u;
            return;
        }
    }
    ctx->pc = 0x3410C4u;
}
