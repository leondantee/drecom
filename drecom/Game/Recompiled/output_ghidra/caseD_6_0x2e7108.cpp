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

// Function: caseD_6
// Address: 0x2e7108 - 0x2e714c
void caseD_6_0x2e7108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2e7108");
#endif

    switch (ctx->pc) {
        case 0x2e7128u: goto label_2e7128;
        default: break;
    }

    ctx->pc = 0x2e7108u;

    // 0x2e7108: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e7108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e710c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e710cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7110: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e7110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e7114: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2e7114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e7118: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e7118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e711c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e711cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e7120: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E7120u;
    SET_GPR_U32(ctx, 31, 0x2E7128u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E7120u, 0x2E7128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7128u;
label_2e7128:
    // 0x2e7128: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e7128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e712c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7130: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2e7130u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7138: 0xa28200ea  sb          $v0, 0xEA($s4)
    ctx->pc = 0x2e7138u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 234), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e713c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7140: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e7140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e7144: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7148: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e7148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e714cu;
}
