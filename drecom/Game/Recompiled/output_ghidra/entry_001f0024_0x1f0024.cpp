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

// Function: entry_001f0024
// Address: 0x1f0024 - 0x1f0084
void entry_001f0024_0x1f0024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0024_0x1f0024");
#endif

    switch (ctx->pc) {
        case 0x1f0068u: goto label_1f0068;
        default: break;
    }

    ctx->pc = 0x1f0024u;

    // 0x1f0024: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0028: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f002c: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x1f002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1f0030: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F0030u;
    {
        const bool branch_taken_0x1f0030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0030) {
            ctx->pc = 0x1F0084u;
            return;
        }
    }
    ctx->pc = 0x1F0038u;
    // 0x1f0038: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f003c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0040: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x1f0040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1f0044: 0x26051330  addiu       $a1, $s0, 0x1330
    ctx->pc = 0x1f0044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f0048: 0x84a3005c  lh          $v1, 0x5C($a1)
    ctx->pc = 0x1f0048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x1f004c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f004cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f0050: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f0050u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f0054: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x1f0054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f0058: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0058u;
    {
        const bool branch_taken_0x1f0058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0058) {
            ctx->pc = 0x1F0084u;
            return;
        }
    }
    ctx->pc = 0x1F0060u;
    // 0x1f0060: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0060u;
    SET_GPR_U32(ctx, 31, 0x1F0068u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0060u, 0x1F0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0068u;
label_1f0068:
    // 0x1f0068: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f0068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f006c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x1f006cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1f0070: 0x2464001e  addiu       $a0, $v1, 0x1E
    ctx->pc = 0x1f0070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x1f0074: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1f0074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1f0078: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f0078u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f007c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f0080: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f0080u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f0084u;
}
