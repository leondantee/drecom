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

// Function: entry_0033f618
// Address: 0x33f618 - 0x33f66c
void entry_0033f618_0x33f618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f618_0x33f618");
#endif

    ctx->pc = 0x33f618u;

    // 0x33f618: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x33f618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33f61c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f620: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33f620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f624: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f628: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f62c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x33F62Cu;
    {
        const bool branch_taken_0x33f62c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f62c) {
            ctx->pc = 0x33F684u;
            return;
        }
    }
    ctx->pc = 0x33F634u;
    // 0x33f634: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x33f634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33f638: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f63c: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f640: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f644: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33f644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f648: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33f648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f64c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f650: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33f650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33f654: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F654u;
    {
        const bool branch_taken_0x33f654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f654) {
            ctx->pc = 0x33F66Cu;
            return;
        }
    }
    ctx->pc = 0x33F65Cu;
    // 0x33f65c: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33f65cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f660: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x33f660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f664: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33F664u;
    {
        const bool branch_taken_0x33f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f664) {
            ctx->pc = 0x33F6CCu;
            return;
        }
    }
    ctx->pc = 0x33F66Cu;
}
