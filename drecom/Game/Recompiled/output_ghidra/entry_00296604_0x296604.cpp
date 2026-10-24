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

// Function: entry_00296604
// Address: 0x296604 - 0x296648
void entry_00296604_0x296604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296604_0x296604");
#endif

    ctx->pc = 0x296604u;

    // 0x296604: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x296608: 0x906369d0  lbu         $v1, 0x69D0($v1)
    ctx->pc = 0x296608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27088)));
    // 0x29660c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x29660Cu;
    {
        const bool branch_taken_0x29660c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29660c) {
            ctx->pc = 0x296648u;
            return;
        }
    }
    ctx->pc = 0x296614u;
    // 0x296614: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x296618: 0x906369cb  lbu         $v1, 0x69CB($v1)
    ctx->pc = 0x296618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27083)));
    // 0x29661c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29661cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296620: 0x752023  subu        $a0, $v1, $s5
    ctx->pc = 0x296620u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x296624: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x296628: 0x8c6369d8  lw          $v1, 0x69D8($v1)
    ctx->pc = 0x296628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27096)));
    // 0x29662c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x29662cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x296630: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x296630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x296634: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x296634u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x296638: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x29663c: 0xa46469ae  sh          $a0, 0x69AE($v1)
    ctx->pc = 0x29663cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 27054), (uint16_t)GPR_U32(ctx, 4));
    // 0x296640: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x296640u;
    {
        const bool branch_taken_0x296640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296640) {
            ctx->pc = 0x296650u;
            return;
        }
    }
    ctx->pc = 0x296648u;
}
