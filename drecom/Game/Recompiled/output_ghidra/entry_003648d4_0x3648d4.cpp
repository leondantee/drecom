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

// Function: entry_003648d4
// Address: 0x3648d4 - 0x364924
void entry_003648d4_0x3648d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003648d4_0x3648d4");
#endif

    switch (ctx->pc) {
        case 0x3648dcu: goto label_3648dc;
        default: break;
    }

    ctx->pc = 0x3648d4u;

    // 0x3648d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3648D4u;
    SET_GPR_U32(ctx, 31, 0x3648DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3648D4u, 0x3648DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3648DCu;
label_3648dc:
    // 0x3648dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3648dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3648e0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3648e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3648e4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3648E4u;
    {
        const bool branch_taken_0x3648e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3648e4) {
            ctx->pc = 0x364924u;
            return;
        }
    }
    ctx->pc = 0x3648ECu;
    // 0x3648ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3648ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3648f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3648f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3648f8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3648f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3648fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364900: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364904: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364908: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36490c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364910: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364914: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364918: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36491c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x36491Cu;
    {
        const bool branch_taken_0x36491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36491c) {
            ctx->pc = 0x364A7Cu;
            return;
        }
    }
    ctx->pc = 0x364924u;
}
