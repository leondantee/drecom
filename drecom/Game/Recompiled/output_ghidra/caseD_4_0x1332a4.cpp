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
// Address: 0x1332a4 - 0x133324
void caseD_4_0x1332a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1332a4");
#endif

    switch (ctx->pc) {
        case 0x1332c4u: goto label_1332c4;
        case 0x1332d0u: goto label_1332d0;
        case 0x133314u: goto label_133314;
        default: break;
    }

    ctx->pc = 0x1332a4u;

    // 0x1332a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1332a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1332a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1332a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1332ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1332acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1332b0: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1332b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1332b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1332b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1332b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1332b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1332bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1332BCu;
    SET_GPR_U32(ctx, 31, 0x1332C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1332BCu, 0x1332C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332C4u;
label_1332c4:
    // 0x1332c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1332c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1332c8: 0xc04d07c  jal         func_1341F0
    ctx->pc = 0x1332C8u;
    SET_GPR_U32(ctx, 31, 0x1332D0u);
    ctx->pc = 0x1341F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341F0u, 0x1332C8u, 0x1332D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332D0u;
label_1332d0:
    // 0x1332d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1332d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1332d4: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x1332d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x1332d8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1332d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1332dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1332dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1332e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1332e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1332e4: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x1332e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x1332e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1332e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1332ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1332ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1332f0: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1332f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1332f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1332f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1332f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1332f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1332fc: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1332fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x133300: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133304: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x133304u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133308: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13330c: 0xc04d994  jal         func_136650
    ctx->pc = 0x13330Cu;
    SET_GPR_U32(ctx, 31, 0x133314u);
    ctx->pc = 0x136650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136650u, 0x13330Cu, 0x133314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133314u;
label_133314:
    // 0x133314: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133318: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13331c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133320: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x133324u;
}
