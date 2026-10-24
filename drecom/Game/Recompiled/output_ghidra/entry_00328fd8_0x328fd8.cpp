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

// Function: entry_00328fd8
// Address: 0x328fd8 - 0x329050
void entry_00328fd8_0x328fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328fd8_0x328fd8");
#endif

    ctx->pc = 0x328fd8u;

label_328fd8:
    // 0x328fd8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x328fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x328fdc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x328fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x328fe0: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x328fe0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x328fe4: 0x0  nop
    ctx->pc = 0x328fe4u;
    // NOP
    // 0x328fe8: 0x0  nop
    ctx->pc = 0x328fe8u;
    // NOP
    // 0x328fec: 0x3010  mfhi        $a2
    ctx->pc = 0x328fecu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x328ff0: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x328ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x328ff4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x328ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x328ff8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x328ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x328ffc: 0xac6600b0  sw          $a2, 0xB0($v1)
    ctx->pc = 0x328ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 6));
    // 0x329000: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x329000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x329004: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x329004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x329008: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x329008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x32900c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x32900cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x329010: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x329010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329014: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x329014u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x329018: 0x0  nop
    ctx->pc = 0x329018u;
    // NOP
    // 0x32901c: 0x1810  mfhi        $v1
    ctx->pc = 0x32901cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329020: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x329020u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x329024: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x329024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x329028: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x329028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x32902c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x32902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x329030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329034: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x329034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x329038: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x329038u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x32903c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32903Cu;
    {
        const bool branch_taken_0x32903c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32903c) {
            ctx->pc = 0x329050u;
            return;
        }
    }
    ctx->pc = 0x329044u;
    // 0x329044: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x329044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x329048: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x329048u;
    {
        const bool branch_taken_0x329048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329048) {
            ctx->pc = 0x328FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328fd8;
        }
    }
    ctx->pc = 0x329050u;
}
