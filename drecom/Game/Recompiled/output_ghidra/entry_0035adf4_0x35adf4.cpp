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

// Function: entry_0035adf4
// Address: 0x35adf4 - 0x35ae68
void entry_0035adf4_0x35adf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035adf4_0x35adf4");
#endif

    switch (ctx->pc) {
        case 0x35ae10u: goto label_35ae10;
        case 0x35ae34u: goto label_35ae34;
        default: break;
    }

    ctx->pc = 0x35adf4u;

    // 0x35adf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35adf8: 0x244700e0  addiu       $a3, $v0, 0xE0
    ctx->pc = 0x35adf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x35adfc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x35adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x35ae00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35ae00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ae04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ae04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ae08: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x35AE08u;
    SET_GPR_U32(ctx, 31, 0x35AE10u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x35AE08u, 0x35AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE10u;
label_35ae10:
    // 0x35ae10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae14: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35ae18: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35ae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35ae1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35ae1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35ae20: 0x2404042e  addiu       $a0, $zero, 0x42E
    ctx->pc = 0x35ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
    // 0x35ae24: 0x24650110  addiu       $a1, $v1, 0x110
    ctx->pc = 0x35ae24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x35ae28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ae28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ae2c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35AE2Cu;
    SET_GPR_U32(ctx, 31, 0x35AE34u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35AE2Cu, 0x35AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE34u;
label_35ae34:
    // 0x35ae34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae38: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35ae3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ae40: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35AE40u;
    {
        const bool branch_taken_0x35ae40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ae40) {
            ctx->pc = 0x35AE68u;
            return;
        }
    }
    ctx->pc = 0x35AE48u;
    // 0x35ae48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae50: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35ae50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35ae54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ae54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ae58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35ae58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ae5c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35ae5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35ae60: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35AE60u;
    SET_GPR_U32(ctx, 31, 0x35AE68u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35AE60u, 0x35AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE68u;
}
