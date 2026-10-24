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

// Function: entry_003778f4
// Address: 0x3778f4 - 0x377908
void entry_003778f4_0x3778f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003778f4_0x3778f4");
#endif

    ctx->pc = 0x3778f4u;

    // 0x3778f4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3778f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3778f8: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x3778f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x3778fc: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x3778fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377904: 0xac720084  sw          $s2, 0x84($v1)
    ctx->pc = 0x377904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 18));
    ctx->pc = 0x377908u;
}
