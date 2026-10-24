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

// Function: caseD_1
// Address: 0x23fa28 - 0x23fac0
void caseD_1_0x23fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x23fa28");
#endif

    switch (ctx->pc) {
        case 0x23fa38u: goto label_23fa38;
        case 0x23fa44u: goto label_23fa44;
        case 0x23fa80u: goto label_23fa80;
        case 0x23faa4u: goto label_23faa4;
        case 0x23fab8u: goto label_23fab8;
        default: break;
    }

    ctx->pc = 0x23fa28u;

    // 0x23fa28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fa2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23fa30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23FA30u;
    SET_GPR_U32(ctx, 31, 0x23FA38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23FA30u, 0x23FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA38u;
label_23fa38:
    // 0x23fa38: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fa3c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23FA3Cu;
    SET_GPR_U32(ctx, 31, 0x23FA44u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23FA3Cu, 0x23FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA44u;
label_23fa44:
    // 0x23fa44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fa48: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23fa48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23fa4c: 0x106000d1  beqz        $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x23FA4Cu;
    {
        const bool branch_taken_0x23fa4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fa4c) {
            ctx->pc = 0x23FD94u;
            return;
        }
    }
    ctx->pc = 0x23FA54u;
    // 0x23fa54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23fa58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fa5c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23fa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23fa60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fa64: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fa68: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23fa68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23fa6c: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x23fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x23fa70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23fa70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fa74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23fa74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23fa78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23FA78u;
    SET_GPR_U32(ctx, 31, 0x23FA80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23FA78u, 0x23FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA80u;
label_23fa80:
    // 0x23fa80: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23fa84: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23fa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23fa88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23fa88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23fa8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fa90: 0x24040526  addiu       $a0, $zero, 0x526
    ctx->pc = 0x23fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1318));
    // 0x23fa94: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23fa98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23fa98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23fa9c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23FA9Cu;
    SET_GPR_U32(ctx, 31, 0x23FAA4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23FA9Cu, 0x23FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAA4u;
label_23faa4:
    // 0x23faa4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23faa8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x23faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23faac: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x23faacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fab0: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x23FAB0u;
    SET_GPR_U32(ctx, 31, 0x23FAB8u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x23FAB0u, 0x23FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAB8u;
label_23fab8:
    // 0x23fab8: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x23FAB8u;
    {
        const bool branch_taken_0x23fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fab8) {
            ctx->pc = 0x23FD94u;
            return;
        }
    }
    ctx->pc = 0x23FAC0u;
}
