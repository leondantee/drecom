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

// Function: entry_00204000
// Address: 0x204000 - 0x204064
void entry_00204000_0x204000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204000_0x204000");
#endif

    switch (ctx->pc) {
        case 0x204010u: goto label_204010;
        case 0x204048u: goto label_204048;
        default: break;
    }

    ctx->pc = 0x204000u;

    // 0x204000: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204004: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x204004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x204008: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204008u;
    SET_GPR_U32(ctx, 31, 0x204010u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204008u, 0x204010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204010u;
label_204010:
    // 0x204010: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x204010u;
    {
        const bool branch_taken_0x204010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204010) {
            ctx->pc = 0x2040B8u;
            return;
        }
    }
    ctx->pc = 0x204018u;
    // 0x204018: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x204018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x20401c: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x20401cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x204020: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204020u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204024: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204028: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204028u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20402c: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x20402cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x204030: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204030u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204034: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204038: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x204038u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20403c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20403cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204040: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204040u;
    SET_GPR_U32(ctx, 31, 0x204048u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204040u, 0x204048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204048u;
label_204048:
    // 0x204048: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x204048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20404c: 0x84249270  lh          $a0, -0x6D90($at)
    ctx->pc = 0x20404cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x619270u));
    // 0x204050: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x204050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x204054: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x204054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x204058: 0xa4259270  sh          $a1, -0x6D90($at)
    ctx->pc = 0x204058u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
    // 0x20405c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20405Cu;
    {
        const bool branch_taken_0x20405c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20405c) {
            ctx->pc = 0x2040B8u;
            return;
        }
    }
    ctx->pc = 0x204064u;
}
