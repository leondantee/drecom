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

// Function: entry_00205994
// Address: 0x205994 - 0x205a0c
void entry_00205994_0x205994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205994_0x205994");
#endif

    switch (ctx->pc) {
        case 0x2059b0u: goto label_2059b0;
        case 0x2059c0u: goto label_2059c0;
        case 0x2059ccu: goto label_2059cc;
        default: break;
    }

    ctx->pc = 0x205994u;

    // 0x205994: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205998: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x205998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20599c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2059a0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2059a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2059a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2059a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2059a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2059A8u;
    SET_GPR_U32(ctx, 31, 0x2059B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2059A8u, 0x2059B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059B0u;
label_2059b0:
    // 0x2059b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2059b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2059b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2059b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2059b8: 0xc080f60  jal         func_203D80
    ctx->pc = 0x2059B8u;
    SET_GPR_U32(ctx, 31, 0x2059C0u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2059B8u, 0x2059C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059C0u;
label_2059c0:
    // 0x2059c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2059c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2059c4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2059C4u;
    SET_GPR_U32(ctx, 31, 0x2059CCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2059C4u, 0x2059CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059CCu;
label_2059cc:
    // 0x2059cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2059ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2059d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2059d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2059d4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2059D4u;
    {
        const bool branch_taken_0x2059d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2059d4) {
            ctx->pc = 0x205A0Cu;
            return;
        }
    }
    ctx->pc = 0x2059DCu;
    // 0x2059dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2059dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2059e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2059e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2059e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2059e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2059e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2059e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2059ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2059ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2059f0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2059f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2059f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2059f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2059f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2059f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2059fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2059fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205a00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x205a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x205a04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205a08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x205a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x205a0cu;
}
