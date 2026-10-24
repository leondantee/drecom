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

// Function: entry_0034c08c
// Address: 0x34c08c - 0x34c130
void entry_0034c08c_0x34c08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c08c_0x34c08c");
#endif

    switch (ctx->pc) {
        case 0x34c09cu: goto label_34c09c;
        case 0x34c0b0u: goto label_34c0b0;
        case 0x34c0c4u: goto label_34c0c4;
        case 0x34c0d8u: goto label_34c0d8;
        case 0x34c118u: goto label_34c118;
        default: break;
    }

    ctx->pc = 0x34c08cu;

    // 0x34c08c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c090: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c090u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c094: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34C094u;
    SET_GPR_U32(ctx, 31, 0x34C09Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34C094u, 0x34C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C09Cu;
label_34c09c:
    // 0x34c09c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c09cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c0a0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0a4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34c0a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34c0a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34C0A8u;
    SET_GPR_U32(ctx, 31, 0x34C0B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34C0A8u, 0x34C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C0B0u;
label_34c0b0:
    // 0x34c0b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x34c0b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c0b4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c0b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c0bc: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34C0BCu;
    SET_GPR_U32(ctx, 31, 0x34C0C4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34C0BCu, 0x34C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C0C4u;
label_34c0c4:
    // 0x34c0c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c0c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c0c8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0cc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34c0ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34c0d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34C0D0u;
    SET_GPR_U32(ctx, 31, 0x34C0D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34C0D0u, 0x34C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C0D8u;
label_34c0d8:
    // 0x34c0d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c0d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c0dc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34c0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34c0e4: 0x1060037a  beqz        $v1, . + 4 + (0x37A << 2)
    ctx->pc = 0x34C0E4u;
    {
        const bool branch_taken_0x34c0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c0e4) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34C0ECu;
    // 0x34c0ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c0f0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0f4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34c0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34c0f8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0fc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c100: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34c100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34c104: 0x2406042b  addiu       $a2, $zero, 0x42B
    ctx->pc = 0x34c104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x34c108: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34c108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c10c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34c10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34c110: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34C110u;
    SET_GPR_U32(ctx, 31, 0x34C118u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34C110u, 0x34C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C118u;
label_34c118:
    // 0x34c118: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c118u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c11c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34c120: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c124: 0xa4c3127a  sh          $v1, 0x127A($a2)
    ctx->pc = 0x34c124u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x34c128: 0x10000369  b           . + 4 + (0x369 << 2)
    ctx->pc = 0x34C128u;
    {
        const bool branch_taken_0x34c128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c128) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34C130u;
}
