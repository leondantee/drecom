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

// Function: entry_00349674
// Address: 0x349674 - 0x349700
void entry_00349674_0x349674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349674_0x349674");
#endif

    switch (ctx->pc) {
        case 0x349688u: goto label_349688;
        case 0x349694u: goto label_349694;
        default: break;
    }

    ctx->pc = 0x349674u;

    // 0x349674: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x349674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349678: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x349678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x34967c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34967cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x349680: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x349680u;
    SET_GPR_U32(ctx, 31, 0x349688u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x349680u, 0x349688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349688u;
label_349688:
    // 0x349688: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x349688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34968c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34968Cu;
    SET_GPR_U32(ctx, 31, 0x349694u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34968Cu, 0x349694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349694u;
label_349694:
    // 0x349694: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349698: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x349698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34969c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x34969Cu;
    {
        const bool branch_taken_0x34969c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34969c) {
            ctx->pc = 0x349700u;
            return;
        }
    }
    ctx->pc = 0x3496A4u;
    // 0x3496a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3496a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3496ac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3496b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3496b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3496b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3496b8: 0x8fb10098  lw          $s1, 0x98($sp)
    ctx->pc = 0x3496b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496bc: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x3496bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3496c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3496c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496c4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3496c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3496c8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3496ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3496d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3496d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3496d8: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x3496d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3496dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3496e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3496e4: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x3496e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x3496e8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496ec: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3496ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3496f0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3496f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3496f4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3496f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3496f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3496f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3496fc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3496fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x349700u;
}
