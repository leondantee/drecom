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

// Function: caseD_4
// Address: 0x1cd4c8 - 0x1cd540
void caseD_4_0x1cd4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1cd4c8");
#endif

    switch (ctx->pc) {
        case 0x1cd4e8u: goto label_1cd4e8;
        case 0x1cd530u: goto label_1cd530;
        default: break;
    }

    ctx->pc = 0x1cd4c8u;

    // 0x1cd4c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4d0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cd4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cd4d4: 0x24060587  addiu       $a2, $zero, 0x587
    ctx->pc = 0x1cd4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1415));
    // 0x1cd4d8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cd4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd4dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cd4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cd4e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CD4E0u;
    SET_GPR_U32(ctx, 31, 0x1CD4E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CD4E0u, 0x1CD4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4E8u;
label_1cd4e8:
    // 0x1cd4e8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1cd4e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd4ec: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cd4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd4f0: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1cd4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1cd4f4: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x1cd4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x1cd4f8: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1cd4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1cd4fc: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x1cd4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1cd500: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1cd500u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1cd504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd508: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd50c: 0xac831b68  sw          $v1, 0x1B68($a0)
    ctx->pc = 0x1cd50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 3));
    // 0x1cd510: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd514: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1cd514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
    // 0x1cd518: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd51c: 0x906613a5  lbu         $a2, 0x13A5($v1)
    ctx->pc = 0x1cd51cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5029)));
    // 0x1cd520: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1cd520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1cd524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd528: 0xc0c5064  jal         func_314190
    ctx->pc = 0x1CD528u;
    SET_GPR_U32(ctx, 31, 0x1CD530u);
    ctx->pc = 0x314190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314190u, 0x1CD528u, 0x1CD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD530u;
label_1cd530:
    // 0x1cd530: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd534: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x1cd534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cd538: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1cd538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cd53c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cd53cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1cd540u;
}
