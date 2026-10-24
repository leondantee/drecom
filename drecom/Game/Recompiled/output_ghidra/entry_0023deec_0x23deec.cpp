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

// Function: entry_0023deec
// Address: 0x23deec - 0x23df80
void entry_0023deec_0x23deec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023deec_0x23deec");
#endif

    switch (ctx->pc) {
        case 0x23df3cu: goto label_23df3c;
        case 0x23df4cu: goto label_23df4c;
        case 0x23df5cu: goto label_23df5c;
        default: break;
    }

    ctx->pc = 0x23deecu;

    // 0x23deec: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x23deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23def0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23def0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23def4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23def4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23def8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23defc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23defcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23df00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23df00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23df04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23df08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23df0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23df0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23df10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23df10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23df14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23df18: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23df18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23df1c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23df20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23df24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23df24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23df28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23df28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23df2c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23df2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23df30: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23df30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23df34: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23DF34u;
    SET_GPR_U32(ctx, 31, 0x23DF3Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23DF34u, 0x23DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF3Cu;
label_23df3c:
    // 0x23df3c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23df40: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x23df40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x23df44: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23DF44u;
    SET_GPR_U32(ctx, 31, 0x23DF4Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23DF44u, 0x23DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF4Cu;
label_23df4c:
    // 0x23df4c: 0x3c0402c8  lui         $a0, 0x2C8
    ctx->pc = 0x23df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)712 << 16));
    // 0x23df50: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x23df50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x23df54: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23DF54u;
    SET_GPR_U32(ctx, 31, 0x23DF5Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23DF54u, 0x23DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF5Cu;
label_23df5c:
    // 0x23df5c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23df60: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23df60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23df64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23df64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23df68: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23df6c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23df70: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23df74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23df74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23df78: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23DF78u;
    SET_GPR_U32(ctx, 31, 0x23DF80u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23DF78u, 0x23DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF80u;
}
