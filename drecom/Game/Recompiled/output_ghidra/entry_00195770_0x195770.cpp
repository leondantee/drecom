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

// Function: entry_00195770
// Address: 0x195770 - 0x195798
void entry_00195770_0x195770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195770_0x195770");
#endif

    ctx->pc = 0x195770u;

    // 0x195770: 0x920300e2  lbu         $v1, 0xE2($s0)
    ctx->pc = 0x195770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
    // 0x195774: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x195774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195778: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19577c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19577Cu;
    {
        const bool branch_taken_0x19577c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19577c) {
            ctx->pc = 0x195798u;
            return;
        }
    }
    ctx->pc = 0x195784u;
    // 0x195784: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x195784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195788: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19578c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19578Cu;
    {
        const bool branch_taken_0x19578c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19578c) {
            ctx->pc = 0x1957D8u;
            return;
        }
    }
    ctx->pc = 0x195794u;
    // 0x195794: 0x0  nop
    ctx->pc = 0x195794u;
    // NOP
    ctx->pc = 0x195798u;
}
