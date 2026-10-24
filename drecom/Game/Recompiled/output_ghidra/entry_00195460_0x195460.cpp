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

// Function: entry_00195460
// Address: 0x195460 - 0x195488
void entry_00195460_0x195460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195460_0x195460");
#endif

    ctx->pc = 0x195460u;

    // 0x195460: 0x9203011c  lbu         $v1, 0x11C($s0)
    ctx->pc = 0x195460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x195464: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x195464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195468: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19546c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19546Cu;
    {
        const bool branch_taken_0x19546c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19546c) {
            ctx->pc = 0x195488u;
            return;
        }
    }
    ctx->pc = 0x195474u;
    // 0x195474: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x195474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195478: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19547c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19547Cu;
    {
        const bool branch_taken_0x19547c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19547c) {
            ctx->pc = 0x1954C8u;
            return;
        }
    }
    ctx->pc = 0x195484u;
    // 0x195484: 0x0  nop
    ctx->pc = 0x195484u;
    // NOP
    ctx->pc = 0x195488u;
}
