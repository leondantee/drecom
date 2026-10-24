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

// Function: entry_0028b8e8
// Address: 0x28b8e8 - 0x28b98c
void entry_0028b8e8_0x28b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b8e8_0x28b8e8");
#endif

    switch (ctx->pc) {
        case 0x28b908u: goto label_28b908;
        case 0x28b934u: goto label_28b934;
        case 0x28b95cu: goto label_28b95c;
        case 0x28b980u: goto label_28b980;
        default: break;
    }

    ctx->pc = 0x28b8e8u;

    // 0x28b8e8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8ec: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x28b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x28b8f0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b8f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b8f4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28b8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b8f8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x28b8f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b8fc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b900: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B900u;
    SET_GPR_U32(ctx, 31, 0x28B908u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B900u, 0x28B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B908u;
label_28b908:
    // 0x28b908: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x28b908u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b90c: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x28b90cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b910: 0x240b006a  addiu       $t3, $zero, 0x6A
    ctx->pc = 0x28b910u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x28b914: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x28b914u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28b918: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28b918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b91c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28b91cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b920: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28b920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b924: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x28b924u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b928: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x28b928u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28b92c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B92Cu;
    SET_GPR_U32(ctx, 31, 0x28B934u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B92Cu, 0x28B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B934u;
label_28b934:
    // 0x28b934: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x28b934u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b938: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28b938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b93c: 0x240a006b  addiu       $t2, $zero, 0x6B
    ctx->pc = 0x28b93cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x28b940: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x28b940u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x28b944: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x28b944u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b948: 0x71802e28  paddub      $a1, $t4, $zero
    ctx->pc = 0x28b948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x28b94c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b950: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x28b950u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b954: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B954u;
    SET_GPR_U32(ctx, 31, 0x28B95Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B954u, 0x28B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B95Cu;
label_28b95c:
    // 0x28b95c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b95cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b960: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b964: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x28b964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x28b968: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b968u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b96c: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x28b96cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b970: 0x71602e28  paddub      $a1, $t3, $zero
    ctx->pc = 0x28b970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28b974: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b978: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B978u;
    SET_GPR_U32(ctx, 31, 0x28B980u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B978u, 0x28B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B980u;
label_28b980:
    // 0x28b980: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x28b980u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b984: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b988: 0xac202038  sw          $zero, 0x2038($at)
    ctx->pc = 0x28b988u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622038u, _value); } while (0);
    ctx->pc = 0x28b98cu;
}
