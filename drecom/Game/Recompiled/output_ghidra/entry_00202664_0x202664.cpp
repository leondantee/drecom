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

// Function: entry_00202664
// Address: 0x202664 - 0x202694
void entry_00202664_0x202664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202664_0x202664");
#endif

    ctx->pc = 0x202664u;

    // 0x202664: 0x93838010  lbu         $v1, -0x7FF0($gp)
    ctx->pc = 0x202664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x202668: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x202668u;
    {
        const bool branch_taken_0x202668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202668) {
            ctx->pc = 0x202694u;
            return;
        }
    }
    ctx->pc = 0x202670u;
    // 0x202670: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202674: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x202674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x202678: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x202678u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20267c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x20267cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x202680: 0x64140  sll         $t0, $a2, 5
    ctx->pc = 0x202680u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x202684: 0x2406ffdf  addiu       $a2, $zero, -0x21
    ctx->pc = 0x202684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x202688: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x202688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x20268c: 0xe83025  or          $a2, $a3, $t0
    ctx->pc = 0x20268cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x202690: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x202690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x202694u;
}
