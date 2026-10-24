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

// Function: entry_002fc8b0
// Address: 0x2fc8b0 - 0x2fc8ec
void entry_002fc8b0_0x2fc8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc8b0_0x2fc8b0");
#endif

    ctx->pc = 0x2fc8b0u;

    // 0x2fc8b0: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc8b4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2fc8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fc8b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fc8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc8bc: 0x14c4000b  bne         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC8BCu;
    {
        const bool branch_taken_0x2fc8bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fc8bc) {
            ctx->pc = 0x2FC8ECu;
            return;
        }
    }
    ctx->pc = 0x2FC8C4u;
    // 0x2fc8c4: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fc8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc8c8: 0x8cc300d4  lw          $v1, 0xD4($a2)
    ctx->pc = 0x2fc8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fc8cc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2fc8ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2fc8d0: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC8D0u;
    {
        const bool branch_taken_0x2fc8d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc8d0) {
            ctx->pc = 0x2FC8ECu;
            return;
        }
    }
    ctx->pc = 0x2FC8D8u;
    // 0x2fc8d8: 0x8fa90178  lw          $t1, 0x178($sp)
    ctx->pc = 0x2fc8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc8dc: 0x8d2800d4  lw          $t0, 0xD4($t1)
    ctx->pc = 0x2fc8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x2fc8e0: 0x2903000a  slti        $v1, $t0, 0xA
    ctx->pc = 0x2fc8e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2fc8e4: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FC8E4u;
    {
        const bool branch_taken_0x2fc8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc8e4) {
            ctx->pc = 0x2FC93Cu;
            return;
        }
    }
    ctx->pc = 0x2FC8ECu;
}
