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

// Function: entry_0023aa9c
// Address: 0x23aa9c - 0x23ab30
void entry_0023aa9c_0x23aa9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023aa9c_0x23aa9c");
#endif

    switch (ctx->pc) {
        case 0x23aaecu: goto label_23aaec;
        case 0x23aafcu: goto label_23aafc;
        case 0x23ab0cu: goto label_23ab0c;
        default: break;
    }

    ctx->pc = 0x23aa9cu;

    // 0x23aa9c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x23aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23aaa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23aaa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23aaa4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23aaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23aaa8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23aaac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23aaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23aab0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23aab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23aab4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23aab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23aab8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23aab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23aabc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23aabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23aac0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23aac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23aac4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23aac8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23aac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23aacc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23aad0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23aad4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x23aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23aad8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23aad8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23aadc: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23aadcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23aae0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23aae0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23aae4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23AAE4u;
    SET_GPR_U32(ctx, 31, 0x23AAECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23AAE4u, 0x23AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AAECu;
label_23aaec:
    // 0x23aaec: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23aaf0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x23aaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23aaf4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23AAF4u;
    SET_GPR_U32(ctx, 31, 0x23AAFCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23AAF4u, 0x23AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AAFCu;
label_23aafc:
    // 0x23aafc: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x23aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x23ab00: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x23ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x23ab04: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23AB04u;
    SET_GPR_U32(ctx, 31, 0x23AB0Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23AB04u, 0x23AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB0Cu;
label_23ab0c:
    // 0x23ab0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab10: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23ab14: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23ab14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23ab18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ab18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ab1c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23ab20: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23ab24: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23ab24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23ab28: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23AB28u;
    SET_GPR_U32(ctx, 31, 0x23AB30u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23AB28u, 0x23AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB30u;
}
