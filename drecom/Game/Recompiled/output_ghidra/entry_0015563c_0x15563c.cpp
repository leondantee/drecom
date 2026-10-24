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

// Function: entry_0015563c
// Address: 0x15563c - 0x155680
void entry_0015563c_0x15563c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015563c_0x15563c");
#endif

    ctx->pc = 0x15563cu;

    // 0x15563c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x15563cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155640: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x155640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155644: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x155644u;
    {
        const bool branch_taken_0x155644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155644) {
            ctx->pc = 0x155680u;
            return;
        }
    }
    ctx->pc = 0x15564Cu;
    // 0x15564c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x15564cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155650: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x155650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155658: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155658u;
    {
        const bool branch_taken_0x155658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155658) {
            ctx->pc = 0x155680u;
            return;
        }
    }
    ctx->pc = 0x155660u;
    // 0x155660: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x155660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155664: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x155664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15566c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15566Cu;
    {
        const bool branch_taken_0x15566c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15566c) {
            ctx->pc = 0x155680u;
            return;
        }
    }
    ctx->pc = 0x155674u;
    // 0x155674: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155674u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155678: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x155678u;
    {
        const bool branch_taken_0x155678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155678) {
            ctx->pc = 0x1557E4u;
            return;
        }
    }
    ctx->pc = 0x155680u;
}
