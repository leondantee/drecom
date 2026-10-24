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

// Function: entry_001de540
// Address: 0x1de540 - 0x1de560
void entry_001de540_0x1de540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de540_0x1de540");
#endif

    ctx->pc = 0x1de540u;

    // 0x1de540: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x1de540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de544: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de544u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de548: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE548u;
    {
        const bool branch_taken_0x1de548 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1de548) {
            ctx->pc = 0x1DE560u;
            return;
        }
    }
    ctx->pc = 0x1DE550u;
    // 0x1de550: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1de550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1de554: 0xa7a200f8  sh          $v0, 0xF8($sp)
    ctx->pc = 0x1de554u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 248), (uint16_t)GPR_U32(ctx, 2));
    // 0x1de558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE558u;
    {
        const bool branch_taken_0x1de558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de558) {
            ctx->pc = 0x1DE568u;
            return;
        }
    }
    ctx->pc = 0x1DE560u;
}
