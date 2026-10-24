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

// Function: entry_002d890c
// Address: 0x2d890c - 0x2d8954
void entry_002d890c_0x2d890c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d890c_0x2d890c");
#endif

    switch (ctx->pc) {
        case 0x2d8918u: goto label_2d8918;
        default: break;
    }

    ctx->pc = 0x2d890cu;

    // 0x2d890c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8910: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8910u;
    SET_GPR_U32(ctx, 31, 0x2D8918u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8910u, 0x2D8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8918u;
label_2d8918:
    // 0x2d8918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d8918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d891c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8920: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2d8920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d8924: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8928: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d892c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d892cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8930: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8934: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8938: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d893c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d893cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8940: 0x8fb20058  lw          $s2, 0x58($sp)
    ctx->pc = 0x2d8940u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8944: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2d8944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2d8948: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d894c: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x2D894Cu;
    {
        const bool branch_taken_0x2d894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d894c) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8954u;
}
