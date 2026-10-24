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

// Function: entry_002e3ba8
// Address: 0x2e3ba8 - 0x2e3c38
void entry_002e3ba8_0x2e3ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3ba8_0x2e3ba8");
#endif

    switch (ctx->pc) {
        case 0x2e3bc0u: goto label_2e3bc0;
        case 0x2e3bd8u: goto label_2e3bd8;
        case 0x2e3bf4u: goto label_2e3bf4;
        case 0x2e3c10u: goto label_2e3c10;
        case 0x2e3c2cu: goto label_2e3c2c;
        default: break;
    }

    ctx->pc = 0x2e3ba8u;

    // 0x2e3ba8: 0x1a00ffd1  blez        $s0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2E3BA8u;
    {
        const bool branch_taken_0x2e3ba8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2e3ba8) {
            ctx->pc = 0x2E3AF0u;
            return;
        }
    }
    ctx->pc = 0x2E3BB0u;
    // 0x2e3bb0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3bb4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x2e3bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e3bb8: 0xc096290  jal         func_258A40
    ctx->pc = 0x2E3BB8u;
    SET_GPR_U32(ctx, 31, 0x2E3BC0u);
    ctx->pc = 0x258A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A40u, 0x2E3BB8u, 0x2E3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BC0u;
label_2e3bc0:
    // 0x2e3bc0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3bc4: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x2e3bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2e3bc8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3bc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3bcc: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2e3bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2e3bd0: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2E3BD0u;
    SET_GPR_U32(ctx, 31, 0x2E3BD8u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2E3BD0u, 0x2E3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BD8u;
label_2e3bd8:
    // 0x2e3bd8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2e3bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e3bdc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e3bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e3be0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2e3be0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e3be4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3be8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2e3be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2e3bec: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2E3BECu;
    SET_GPR_U32(ctx, 31, 0x2E3BF4u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2E3BECu, 0x2E3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BF4u;
label_2e3bf4:
    // 0x2e3bf4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3bf8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2e3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2e3bfc: 0x24510990  addiu       $s1, $v0, 0x990
    ctx->pc = 0x2e3bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x2e3c00: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3c00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3c04: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2e3c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2e3c08: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2E3C08u;
    SET_GPR_U32(ctx, 31, 0x2E3C10u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2E3C08u, 0x2E3C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C10u;
label_2e3c10:
    // 0x2e3c10: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2e3c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e3c14: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e3c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e3c18: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2e3c18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e3c1c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3c20: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2e3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2e3c24: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2E3C24u;
    SET_GPR_U32(ctx, 31, 0x2E3C2Cu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2E3C24u, 0x2E3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C2Cu;
label_2e3c2c:
    // 0x2e3c2c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2e3c2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3c30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E3C30u;
    {
        const bool branch_taken_0x2e3c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3c30) {
            ctx->pc = 0x2E3C80u;
            return;
        }
    }
    ctx->pc = 0x2E3C38u;
}
