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

// Function: entry_002a3a3c
// Address: 0x2a3a3c - 0x2a3aa0
void entry_002a3a3c_0x2a3a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a3a3c_0x2a3a3c");
#endif

    switch (ctx->pc) {
        case 0x2a3a44u: goto label_2a3a44;
        default: break;
    }

    ctx->pc = 0x2a3a3cu;

    // 0x2a3a3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A3A3Cu;
    SET_GPR_U32(ctx, 31, 0x2A3A44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A3A3Cu, 0x2A3A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A44u;
label_2a3a44:
    // 0x2a3a44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3a48: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2a3a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a3a4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3a50: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A3A50u;
    {
        const bool branch_taken_0x2a3a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3a50) {
            ctx->pc = 0x2A3AA0u;
            return;
        }
    }
    ctx->pc = 0x2A3A58u;
    // 0x2a3a58: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a3a60: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2a3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a3a64: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x2a3a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2a3a68: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A3A68u;
    {
        const bool branch_taken_0x2a3a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3a68) {
            ctx->pc = 0x2A3AA0u;
            return;
        }
    }
    ctx->pc = 0x2A3A70u;
    // 0x2a3a70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3a74: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a3a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a78: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x2a3a78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a3a7c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2a3a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a3a80: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x2a3a80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a84: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x2a3a84u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x2a3a88: 0x8fa900a8  lw          $t1, 0xA8($sp)
    ctx->pc = 0x2a3a88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a8c: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x2a3a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3a90: 0x8faa00a8  lw          $t2, 0xA8($sp)
    ctx->pc = 0x2a3a90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a94: 0xa1400003  sb          $zero, 0x3($t2)
    ctx->pc = 0x2a3a94u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3a98: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a3aa0u;
}
