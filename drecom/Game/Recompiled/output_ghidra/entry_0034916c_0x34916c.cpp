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

// Function: entry_0034916c
// Address: 0x34916c - 0x3491d4
void entry_0034916c_0x34916c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034916c_0x34916c");
#endif

    switch (ctx->pc) {
        case 0x34917cu: goto label_34917c;
        case 0x349188u: goto label_349188;
        case 0x3491c4u: goto label_3491c4;
        default: break;
    }

    ctx->pc = 0x34916cu;

    // 0x34916c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34916cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349170: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349170u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x349174: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x349174u;
    SET_GPR_U32(ctx, 31, 0x34917Cu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x349174u, 0x34917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34917Cu;
label_34917c:
    // 0x34917c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34917cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349180: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x349180u;
    SET_GPR_U32(ctx, 31, 0x349188u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x349180u, 0x349188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349188u;
label_349188:
    // 0x349188: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34918c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34918cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x349190: 0x1060015b  beqz        $v1, . + 4 + (0x15B << 2)
    ctx->pc = 0x349190u;
    {
        const bool branch_taken_0x349190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349190) {
            ctx->pc = 0x349700u;
            return;
        }
    }
    ctx->pc = 0x349198u;
    // 0x349198: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x349198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34919c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491a0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3491a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3491a4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3491a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491a8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3491a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3491acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3491b0: 0x24063c04  addiu       $a2, $zero, 0x3C04
    ctx->pc = 0x3491b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15364));
    // 0x3491b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3491b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3491b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3491b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3491bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3491BCu;
    SET_GPR_U32(ctx, 31, 0x3491C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3491BCu, 0x3491C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491C4u;
label_3491c4:
    // 0x3491c4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3491c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491c8: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x3491c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x3491cc: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x3491CCu;
    {
        const bool branch_taken_0x3491cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3491cc) {
            ctx->pc = 0x349700u;
            return;
        }
    }
    ctx->pc = 0x3491D4u;
}
