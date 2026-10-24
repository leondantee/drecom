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

// Function: entry_0035ea04
// Address: 0x35ea04 - 0x35ea5c
void entry_0035ea04_0x35ea04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ea04_0x35ea04");
#endif

    switch (ctx->pc) {
        case 0x35ea28u: goto label_35ea28;
        default: break;
    }

    ctx->pc = 0x35ea04u;

    // 0x35ea04: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35ea08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35ea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35ea0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35ea0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35ea10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea14: 0x2404042c  addiu       $a0, $zero, 0x42C
    ctx->pc = 0x35ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1068));
    // 0x35ea18: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x35ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x35ea1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ea1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ea20: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35EA20u;
    SET_GPR_U32(ctx, 31, 0x35EA28u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35EA20u, 0x35EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA28u;
label_35ea28:
    // 0x35ea28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea2c: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35ea30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ea34: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35EA34u;
    {
        const bool branch_taken_0x35ea34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ea34) {
            ctx->pc = 0x35EA5Cu;
            return;
        }
    }
    ctx->pc = 0x35EA3Cu;
    // 0x35ea3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea44: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35ea48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ea48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ea4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35ea4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ea50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35ea50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35ea54: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35EA54u;
    SET_GPR_U32(ctx, 31, 0x35EA5Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35EA54u, 0x35EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA5Cu;
}
