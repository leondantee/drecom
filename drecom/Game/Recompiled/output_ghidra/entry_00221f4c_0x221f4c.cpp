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

// Function: entry_00221f4c
// Address: 0x221f4c - 0x221f9c
void entry_00221f4c_0x221f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221f4c_0x221f4c");
#endif

    switch (ctx->pc) {
        case 0x221f74u: goto label_221f74;
        default: break;
    }

    ctx->pc = 0x221f4cu;

    // 0x221f4c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x221f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x221f50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x221f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x221f54: 0x845e005c  lh          $fp, 0x5C($v0)
    ctx->pc = 0x221f54u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x221f58: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x221f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
    // 0x221f5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x221f5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x221f60: 0x2861005a  slti        $at, $v1, 0x5A
    ctx->pc = 0x221f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x221f64: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x221F64u;
    {
        const bool branch_taken_0x221f64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f64) {
            ctx->pc = 0x221FB0u;
            return;
        }
    }
    ctx->pc = 0x221F6Cu;
    // 0x221f6c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x221F6Cu;
    SET_GPR_U32(ctx, 31, 0x221F74u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x221F6Cu, 0x221F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F74u;
label_221f74:
    // 0x221f74: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x221f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221f78: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x221f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x221f7c: 0x2486005a  addiu       $a2, $a0, 0x5A
    ctx->pc = 0x221f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
    // 0x221f80: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x221f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x221f84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x221f84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x221f88: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x221f8c: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x221f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x221f90: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x221f90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x221f94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x221F94u;
    {
        const bool branch_taken_0x221f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f94) {
            ctx->pc = 0x221FB0u;
            return;
        }
    }
    ctx->pc = 0x221F9Cu;
}
