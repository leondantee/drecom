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

// Function: entry_00203154
// Address: 0x203154 - 0x203184
void entry_00203154_0x203154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203154_0x203154");
#endif

    ctx->pc = 0x203154u;

    // 0x203154: 0x93868010  lbu         $a2, -0x7FF0($gp)
    ctx->pc = 0x203154u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x203158: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x203158u;
    {
        const bool branch_taken_0x203158 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x203158) {
            ctx->pc = 0x203184u;
            return;
        }
    }
    ctx->pc = 0x203160u;
    // 0x203160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203164: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x203164u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x203168: 0x92c60000  lbu         $a2, 0x0($s6)
    ctx->pc = 0x203168u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x20316c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20316cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x203170: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x203170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x203174: 0x2407ffdf  addiu       $a3, $zero, -0x21
    ctx->pc = 0x203174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x203178: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x203178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x20317c: 0xc33825  or          $a3, $a2, $v1
    ctx->pc = 0x20317cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203180: 0xa2c70000  sb          $a3, 0x0($s6)
    ctx->pc = 0x203180u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x203184u;
}
