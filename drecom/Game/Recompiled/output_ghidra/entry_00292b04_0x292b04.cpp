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

// Function: entry_00292b04
// Address: 0x292b04 - 0x292b20
void entry_00292b04_0x292b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292b04_0x292b04");
#endif

    ctx->pc = 0x292b04u;

    // 0x292b04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x292b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292b08: 0x121200  sll         $v0, $s2, 8
    ctx->pc = 0x292b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x292b0c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x292b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x292b10: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x292b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x292b14: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x292b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292b18: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x292b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x292b1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x292b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x292b20u;
}
