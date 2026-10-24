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

// Function: entry_0025dd7c
// Address: 0x25dd7c - 0x25ddc4
void entry_0025dd7c_0x25dd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025dd7c_0x25dd7c");
#endif

    switch (ctx->pc) {
        case 0x25ddbcu: goto label_25ddbc;
        default: break;
    }

    ctx->pc = 0x25dd7cu;

    // 0x25dd7c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dd80: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x25dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25dd84: 0x8c421924  lw          $v0, 0x1924($v0)
    ctx->pc = 0x25dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6436)));
    // 0x25dd88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25DD88u;
    {
        const bool branch_taken_0x25dd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd88) {
            ctx->pc = 0x25DDC4u;
            return;
        }
    }
    ctx->pc = 0x25DD90u;
    // 0x25dd90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dd94: 0xa7a4013a  sh          $a0, 0x13A($sp)
    ctx->pc = 0x25dd94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 314), (uint16_t)GPR_U32(ctx, 4));
    // 0x25dd98: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x25dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dd9c: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x25dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x25dda0: 0x8c421a24  lw          $v0, 0x1A24($v0)
    ctx->pc = 0x25dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6692)));
    // 0x25dda4: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x25dda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x25dda8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x25dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x25ddac: 0x27a501f8  addiu       $a1, $sp, 0x1F8
    ctx->pc = 0x25ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x25ddb0: 0x27a60208  addiu       $a2, $sp, 0x208
    ctx->pc = 0x25ddb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x25ddb4: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DDB4u;
    SET_GPR_U32(ctx, 31, 0x25DDBCu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DDB4u, 0x25DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDBCu;
label_25ddbc:
    // 0x25ddbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25DDBCu;
    {
        const bool branch_taken_0x25ddbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ddbc) {
            ctx->pc = 0x25DDE0u;
            return;
        }
    }
    ctx->pc = 0x25DDC4u;
}
