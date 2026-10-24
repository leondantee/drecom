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

// Function: entry_00292dd4
// Address: 0x292dd4 - 0x292e40
void entry_00292dd4_0x292dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292dd4_0x292dd4");
#endif

    switch (ctx->pc) {
        case 0x292dfcu: goto label_292dfc;
        case 0x292e14u: goto label_292e14;
        case 0x292e2cu: goto label_292e2c;
        default: break;
    }

    ctx->pc = 0x292dd4u;

    // 0x292dd4: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x292dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x292dd8: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x292dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x292ddc: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x292ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x292de0: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x292de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x292de4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x292de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292de8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x292de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x292dec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292df0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292df0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292df4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x292DF4u;
    SET_GPR_U32(ctx, 31, 0x292DFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x292DF4u, 0x292DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292DFCu;
label_292dfc:
    // 0x292dfc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e00: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e04: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e08: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x292e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x292e0c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292E0Cu;
    SET_GPR_U32(ctx, 31, 0x292E14u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292E0Cu, 0x292E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E14u;
label_292e14:
    // 0x292e14: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e18: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e1c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e20: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x292e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x292e24: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292E24u;
    SET_GPR_U32(ctx, 31, 0x292E2Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292E24u, 0x292E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E2Cu;
label_292e2c:
    // 0x292e2c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x292e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292e30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292e30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292e34: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292e34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292e38: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x292E38u;
    SET_GPR_U32(ctx, 31, 0x292E40u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x292E38u, 0x292E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E40u;
}
