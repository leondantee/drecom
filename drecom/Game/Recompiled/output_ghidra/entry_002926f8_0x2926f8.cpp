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

// Function: entry_002926f8
// Address: 0x2926f8 - 0x292728
void entry_002926f8_0x2926f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002926f8_0x2926f8");
#endif

    ctx->pc = 0x2926f8u;

    // 0x2926f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2926f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2926fc: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x2926fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x292700: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x292700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x292704: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x292704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x292708: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x292708u;
    {
        const bool branch_taken_0x292708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292708) {
            ctx->pc = 0x292728u;
            return;
        }
    }
    ctx->pc = 0x292710u;
    // 0x292710: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x292710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x292714: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x292714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x292718: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292718u;
    {
        const bool branch_taken_0x292718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292718) {
            ctx->pc = 0x292728u;
            return;
        }
    }
    ctx->pc = 0x292720u;
    // 0x292720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292724: 0xa20265a8  sb          $v0, 0x65A8($s0)
    ctx->pc = 0x292724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26024), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x292728u;
}
