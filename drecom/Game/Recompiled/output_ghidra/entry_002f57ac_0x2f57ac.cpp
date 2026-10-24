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

// Function: entry_002f57ac
// Address: 0x2f57ac - 0x2f57f8
void entry_002f57ac_0x2f57ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f57ac_0x2f57ac");
#endif

    ctx->pc = 0x2f57acu;

    // 0x2f57ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f57b0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f57b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f57b4: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x2f57b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f57b8: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F57B8u;
    {
        const bool branch_taken_0x2f57b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57b8) {
            ctx->pc = 0x2F5848u;
            return;
        }
    }
    ctx->pc = 0x2F57C0u;
    // 0x2f57c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f57c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f57c4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f57c8: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x2f57c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2f57cc: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2F57CCu;
    {
        const bool branch_taken_0x2f57cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57cc) {
            ctx->pc = 0x2F57F8u;
            return;
        }
    }
    ctx->pc = 0x2F57D4u;
    // 0x2f57d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f57d8: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f57d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f57dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f57dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f57e0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2f57e0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f57e4: 0x0  nop
    ctx->pc = 0x2f57e4u;
    // NOP
    // 0x2f57e8: 0x0  nop
    ctx->pc = 0x2f57e8u;
    // NOP
    // 0x2f57ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2f57ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f57f0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F57F0u;
    {
        const bool branch_taken_0x2f57f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57f0) {
            ctx->pc = 0x2F5848u;
            return;
        }
    }
    ctx->pc = 0x2F57F8u;
}
