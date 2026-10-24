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

// Function: entry_0033f684
// Address: 0x33f684 - 0x33f6bc
void entry_0033f684_0x33f684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f684_0x33f684");
#endif

    ctx->pc = 0x33f684u;

    // 0x33f684: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x33f684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33f688: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f68c: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f68cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f690: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f694: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x33f694u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f698: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33f698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f69c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f6a0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f6a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f6a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F6A4u;
    {
        const bool branch_taken_0x33f6a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f6a4) {
            ctx->pc = 0x33F6BCu;
            return;
        }
    }
    ctx->pc = 0x33F6ACu;
    // 0x33f6ac: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33f6acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f6b0: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x33f6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f6b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33F6B4u;
    {
        const bool branch_taken_0x33f6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f6b4) {
            ctx->pc = 0x33F6CCu;
            return;
        }
    }
    ctx->pc = 0x33F6BCu;
}
