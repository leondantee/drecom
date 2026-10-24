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

// Function: entry_0020d93c
// Address: 0x20d93c - 0x20d9b8
void entry_0020d93c_0x20d93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d93c_0x20d93c");
#endif

    switch (ctx->pc) {
        case 0x20d94cu: goto label_20d94c;
        case 0x20d958u: goto label_20d958;
        case 0x20d968u: goto label_20d968;
        case 0x20d974u: goto label_20d974;
        case 0x20d998u: goto label_20d998;
        default: break;
    }

    ctx->pc = 0x20d93cu;

    // 0x20d93c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d940: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d940u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d944: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20D944u;
    SET_GPR_U32(ctx, 31, 0x20D94Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20D944u, 0x20D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D94Cu;
label_20d94c:
    // 0x20d94c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d950: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20D950u;
    SET_GPR_U32(ctx, 31, 0x20D958u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20D950u, 0x20D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D958u;
label_20d958:
    // 0x20d958: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d95c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d960: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20D960u;
    SET_GPR_U32(ctx, 31, 0x20D968u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20D960u, 0x20D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D968u;
label_20d968:
    // 0x20d968: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d96c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20D96Cu;
    SET_GPR_U32(ctx, 31, 0x20D974u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20D96Cu, 0x20D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D974u;
label_20d974:
    // 0x20d974: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d978: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20d978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20d97c: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x20D97Cu;
    {
        const bool branch_taken_0x20d97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d97c) {
            ctx->pc = 0x20DC38u;
            return;
        }
    }
    ctx->pc = 0x20D984u;
    // 0x20d984: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d988: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20d988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20d98c: 0x2445a120  addiu       $a1, $v0, -0x5EE0
    ctx->pc = 0x20d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943008));
    // 0x20d990: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x20D990u;
    SET_GPR_U32(ctx, 31, 0x20D998u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x20D990u, 0x20D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D998u;
label_20d998:
    // 0x20d998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D998u;
    {
        const bool branch_taken_0x20d998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d998) {
            ctx->pc = 0x20D9B8u;
            return;
        }
    }
    ctx->pc = 0x20D9A0u;
    // 0x20d9a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9a4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20d9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20d9a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20d9ac: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20d9acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d9b0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x20D9B0u;
    {
        const bool branch_taken_0x20d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d9b0) {
            ctx->pc = 0x20DC38u;
            return;
        }
    }
    ctx->pc = 0x20D9B8u;
}
