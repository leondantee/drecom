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

// Function: entry_002e4b98
// Address: 0x2e4b98 - 0x2e4c08
void entry_002e4b98_0x2e4b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4b98_0x2e4b98");
#endif

    switch (ctx->pc) {
        case 0x2e4bc8u: goto label_2e4bc8;
        case 0x2e4bd4u: goto label_2e4bd4;
        case 0x2e4bf0u: goto label_2e4bf0;
        case 0x2e4c04u: goto label_2e4c04;
        default: break;
    }

    ctx->pc = 0x2e4b98u;

    // 0x2e4b98: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e4b9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e4b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4ba0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4ba4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e4ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e4ba8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e4bac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e4bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e4bb0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2e4bb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e4bb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e4bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e4bb8: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x2e4bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e4bbc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e4bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4bc0: 0xc086488  jal         func_219220
    ctx->pc = 0x2E4BC0u;
    SET_GPR_U32(ctx, 31, 0x2E4BC8u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2E4BC0u, 0x2E4BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BC8u;
label_2e4bc8:
    // 0x2e4bc8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e4bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4bcc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E4BCCu;
    SET_GPR_U32(ctx, 31, 0x2E4BD4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E4BCCu, 0x2E4BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BD4u;
label_2e4bd4:
    // 0x2e4bd4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2e4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e4bd8: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x2e4bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2e4bdc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e4bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4be0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2e4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2e4be4: 0x24478e38  addiu       $a3, $v0, -0x71C8
    ctx->pc = 0x2e4be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938168));
    // 0x2e4be8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2E4BE8u;
    SET_GPR_U32(ctx, 31, 0x2E4BF0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2E4BE8u, 0x2E4BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BF0u;
label_2e4bf0:
    // 0x2e4bf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4BF0u;
    {
        const bool branch_taken_0x2e4bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4bf0) {
            ctx->pc = 0x2E4C08u;
            return;
        }
    }
    ctx->pc = 0x2E4BF8u;
    // 0x2e4bf8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2e4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e4bfc: 0xc0b8db8  jal         func_2E36E0
    ctx->pc = 0x2E4BFCu;
    SET_GPR_U32(ctx, 31, 0x2E4C04u);
    ctx->pc = 0x2E36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E36E0u, 0x2E4BFCu, 0x2E4C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C04u;
label_2e4c04:
    // 0x2e4c04: 0x0  nop
    ctx->pc = 0x2e4c04u;
    // NOP
    ctx->pc = 0x2e4c08u;
}
