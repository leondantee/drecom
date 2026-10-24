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

// Function: entry_00205954
// Address: 0x205954 - 0x205994
void entry_00205954_0x205954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205954_0x205954");
#endif

    switch (ctx->pc) {
        case 0x205974u: goto label_205974;
        default: break;
    }

    ctx->pc = 0x205954u;

    // 0x205954: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205958: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20595c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20595cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x205960: 0x24065a1d  addiu       $a2, $zero, 0x5A1D
    ctx->pc = 0x205960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23069));
    // 0x205964: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x205964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205968: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x205968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20596c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20596Cu;
    SET_GPR_U32(ctx, 31, 0x205974u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20596Cu, 0x205974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205974u;
label_205974:
    // 0x205974: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205978: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x205978u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20597c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20597cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205980: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x205980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x205984: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x205984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x205988: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x205988u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20598c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x20598Cu;
    {
        const bool branch_taken_0x20598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20598c) {
            ctx->pc = 0x205A0Cu;
            return;
        }
    }
    ctx->pc = 0x205994u;
}
