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

// Function: entry_0033a56c
// Address: 0x33a56c - 0x33a588
void entry_0033a56c_0x33a56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a56c_0x33a56c");
#endif

    ctx->pc = 0x33a56cu;

    // 0x33a56c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x33a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x33a570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A570u;
    {
        const bool branch_taken_0x33a570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a570) {
            ctx->pc = 0x33A588u;
            return;
        }
    }
    ctx->pc = 0x33A578u;
    // 0x33a578: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33a578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a57c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a57cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a580: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a584: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x33a588u;
}
