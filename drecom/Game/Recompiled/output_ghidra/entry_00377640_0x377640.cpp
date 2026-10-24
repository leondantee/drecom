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

// Function: entry_00377640
// Address: 0x377640 - 0x377658
void entry_00377640_0x377640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377640_0x377640");
#endif

    ctx->pc = 0x377640u;

    // 0x377640: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x377640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377644: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377648: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x37764c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377650: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x377650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x377654: 0x0  nop
    ctx->pc = 0x377654u;
    // NOP
    ctx->pc = 0x377658u;
}
