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

// Function: entry_0033f738
// Address: 0x33f738 - 0x33f770
void entry_0033f738_0x33f738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f738_0x33f738");
#endif

    ctx->pc = 0x33f738u;

    // 0x33f738: 0x9203006c  lbu         $v1, 0x6C($s0)
    ctx->pc = 0x33f738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x33f73c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f740: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f744: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f748: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x33f748u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f74c: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33f74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f750: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f754: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f758: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F758u;
    {
        const bool branch_taken_0x33f758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f758) {
            ctx->pc = 0x33F770u;
            return;
        }
    }
    ctx->pc = 0x33F760u;
    // 0x33f760: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33f760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f764: 0xa203006c  sb          $v1, 0x6C($s0)
    ctx->pc = 0x33f764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f768: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33F768u;
    {
        const bool branch_taken_0x33f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f768) {
            ctx->pc = 0x33F780u;
            return;
        }
    }
    ctx->pc = 0x33F770u;
}
