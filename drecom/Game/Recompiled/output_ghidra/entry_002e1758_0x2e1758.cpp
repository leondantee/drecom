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

// Function: entry_002e1758
// Address: 0x2e1758 - 0x2e17a8
void entry_002e1758_0x2e1758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1758_0x2e1758");
#endif

    switch (ctx->pc) {
        case 0x2e1778u: goto label_2e1778;
        default: break;
    }

    ctx->pc = 0x2e1758u;

    // 0x2e1758: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e175c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1760: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e1760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e1764: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2e1764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e1768: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e1768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e176c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e176cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e1770: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E1770u;
    SET_GPR_U32(ctx, 31, 0x2E1778u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E1770u, 0x2E1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1778u;
label_2e1778:
    // 0x2e1778: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e1778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e177c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1780: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e1780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1784: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e1784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e1788: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e1788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e178c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2e178cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1794: 0xa24200dd  sb          $v0, 0xDD($s2)
    ctx->pc = 0x2e1794u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1798: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e179c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e179cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e17a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e17a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e17a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e17a8u;
}
