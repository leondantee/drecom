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

// Function: entry_0020e194
// Address: 0x20e194 - 0x20e21c
void entry_0020e194_0x20e194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e194_0x20e194");
#endif

    switch (ctx->pc) {
        case 0x20e1a4u: goto label_20e1a4;
        case 0x20e1b0u: goto label_20e1b0;
        case 0x20e1c0u: goto label_20e1c0;
        case 0x20e1ccu: goto label_20e1cc;
        default: break;
    }

    ctx->pc = 0x20e194u;

    // 0x20e194: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e198: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20e198u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20e19c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20E19Cu;
    SET_GPR_U32(ctx, 31, 0x20E1A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20E19Cu, 0x20E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1A4u;
label_20e1a4:
    // 0x20e1a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20E1A8u;
    SET_GPR_U32(ctx, 31, 0x20E1B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20E1A8u, 0x20E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1B0u;
label_20e1b0:
    // 0x20e1b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e1b8: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20E1B8u;
    SET_GPR_U32(ctx, 31, 0x20E1C0u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20E1B8u, 0x20E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1C0u;
label_20e1c0:
    // 0x20e1c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1c4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20E1C4u;
    SET_GPR_U32(ctx, 31, 0x20E1CCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20E1C4u, 0x20E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1CCu;
label_20e1cc:
    // 0x20e1cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1d0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20e1d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20e1d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e1d8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20e1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20e1dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20e1e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20e1e4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20E1E4u;
    {
        const bool branch_taken_0x20e1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e1e4) {
            ctx->pc = 0x20E21Cu;
            return;
        }
    }
    ctx->pc = 0x20E1ECu;
    // 0x20e1ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e1f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20e1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e1f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e1fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e200: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20e200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e204: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e208: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20e208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e20c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e210: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20e210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e214: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e218: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20e218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20e21cu;
}
