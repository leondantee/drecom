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

// Function: entry_00139840
// Address: 0x139840 - 0x139898
void entry_00139840_0x139840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139840_0x139840");
#endif

    switch (ctx->pc) {
        case 0x13984cu: goto label_13984c;
        default: break;
    }

    ctx->pc = 0x139840u;

    // 0x139840: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139844: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x139844u;
    SET_GPR_U32(ctx, 31, 0x13984Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x139844u, 0x13984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13984Cu;
label_13984c:
    // 0x13984c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139850: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x139854: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x139854u;
    {
        const bool branch_taken_0x139854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139854) {
            ctx->pc = 0x139898u;
            return;
        }
    }
    ctx->pc = 0x13985Cu;
    // 0x13985c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139860: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139864: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x139864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x139868: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x139868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13986c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139870: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x139870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x139874: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139878: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139878u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13987c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139880: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x139880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x139884: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139888: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x139888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x13988c: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x13988cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x139890: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x139890u;
    {
        const bool branch_taken_0x139890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139890) {
            ctx->pc = 0x139898u;
            return;
        }
    }
    ctx->pc = 0x139898u;
}
