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

// Function: entry_0028bbd0
// Address: 0x28bbd0 - 0x28bc2c
void entry_0028bbd0_0x28bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bbd0_0x28bbd0");
#endif

    switch (ctx->pc) {
        case 0x28bc10u: goto label_28bc10;
        case 0x28bc24u: goto label_28bc24;
        default: break;
    }

    ctx->pc = 0x28bbd0u;

    // 0x28bbd0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bbd4: 0xac202058  sw          $zero, 0x2058($at)
    ctx->pc = 0x28bbd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622058u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622058u, _value); } while (0);
    // 0x28bbd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28bbd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bbdc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bbe0: 0xe4202050  swc1        $f0, 0x2050($at)
    ctx->pc = 0x28bbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622050u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622050u, _value); } while (0); }
    // 0x28bbe4: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28bbe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28bbec: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28bbf0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bbf4: 0xac202060  sw          $zero, 0x2060($at)
    ctx->pc = 0x28bbf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622060u, _value); } while (0);
    // 0x28bbf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28bbf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bbfc: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x28bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28bc00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28bc00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bc04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28bc04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bc08: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28BC08u;
    SET_GPR_U32(ctx, 31, 0x28BC10u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28BC08u, 0x28BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC10u;
label_28bc10:
    // 0x28bc10: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x28bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28bc14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28bc14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bc18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28bc18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bc1c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x28BC1Cu;
    SET_GPR_U32(ctx, 31, 0x28BC24u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x28BC1Cu, 0x28BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC24u;
label_28bc24:
    // 0x28bc24: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x28BC24u;
    {
        const bool branch_taken_0x28bc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bc24) {
            ctx->pc = 0x28BD60u;
            return;
        }
    }
    ctx->pc = 0x28BC2Cu;
}
