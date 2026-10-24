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

// Function: entry_00142df8
// Address: 0x142df8 - 0x142e6c
void entry_00142df8_0x142df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142df8_0x142df8");
#endif

    switch (ctx->pc) {
        case 0x142e00u: goto label_142e00;
        case 0x142e10u: goto label_142e10;
        case 0x142e2cu: goto label_142e2c;
        case 0x142e44u: goto label_142e44;
        default: break;
    }

    ctx->pc = 0x142df8u;

    // 0x142df8: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x142DF8u;
    SET_GPR_U32(ctx, 31, 0x142E00u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x142DF8u, 0x142E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E00u;
label_142e00:
    // 0x142e00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x142E00u;
    {
        const bool branch_taken_0x142e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142e00) {
            ctx->pc = 0x142DE8u;
            return;
        }
    }
    ctx->pc = 0x142E08u;
    // 0x142e08: 0xc076530  jal         func_1D94C0
    ctx->pc = 0x142E08u;
    SET_GPR_U32(ctx, 31, 0x142E10u);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x142E08u, 0x142E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E10u;
label_142e10:
    // 0x142e10: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x142e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x142e14: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x142e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x142e18: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x142e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x142e1c: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x142e1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142e20: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x142e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x142e24: 0xc05e990  jal         func_17A640
    ctx->pc = 0x142E24u;
    SET_GPR_U32(ctx, 31, 0x142E2Cu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x142E24u, 0x142E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E2Cu;
label_142e2c:
    // 0x142e2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142e30: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x142e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x142e34: 0x24063b00  addiu       $a2, $zero, 0x3B00
    ctx->pc = 0x142e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x142e38: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x142e38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x142e3c: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x142E3Cu;
    SET_GPR_U32(ctx, 31, 0x142E44u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x142E3Cu, 0x142E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E44u;
label_142e44:
    // 0x142e44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x142e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x142e48: 0xae420248  sw          $v0, 0x248($s2)
    ctx->pc = 0x142e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 584), GPR_U32(ctx, 2));
    // 0x142e4c: 0x27c3000f  addiu       $v1, $fp, 0xF
    ctx->pc = 0x142e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 15));
    // 0x142e50: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x142e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x142e54: 0x62f024  and         $fp, $v1, $v0
    ctx->pc = 0x142e54u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142e58: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x142e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x142e5c: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x142e5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x142e60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x142e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142e64: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x142E64u;
    SET_GPR_U32(ctx, 31, 0x142E6Cu);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x142E64u, 0x142E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E6Cu;
}
