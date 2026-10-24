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

// Function: entry_0013d76c
// Address: 0x13d76c - 0x13d7b4
void entry_0013d76c_0x13d76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d76c_0x13d76c");
#endif

    ctx->pc = 0x13d76cu;

    // 0x13d76c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x13d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x13d770: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d774: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x13d774u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x13d778: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13d778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d77c: 0xdc640010  ld          $a0, 0x10($v1)
    ctx->pc = 0x13d77cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13d780: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d784: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x13d784u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x13d788: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x13d788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x13d78c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d790: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x13d790u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x13d794: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13d794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d798: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x13d798u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13d79c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D79Cu;
    {
        const bool branch_taken_0x13d79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d79c) {
            ctx->pc = 0x13D7B4u;
            return;
        }
    }
    ctx->pc = 0x13D7A4u;
    // 0x13d7a4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d7a8: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x13d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x13d7ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x13D7ACu;
    {
        const bool branch_taken_0x13d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d7ac) {
            ctx->pc = 0x13D850u;
            return;
        }
    }
    ctx->pc = 0x13D7B4u;
}
