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

// Function: entry_0030c364
// Address: 0x30c364 - 0x30c384
void entry_0030c364_0x30c364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c364_0x30c364");
#endif

    ctx->pc = 0x30c364u;

    // 0x30c364: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30c368: 0x8c631364  lw          $v1, 0x1364($v1)
    ctx->pc = 0x30c368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4964)));
    // 0x30c36c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C36Cu;
    {
        const bool branch_taken_0x30c36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c36c) {
            ctx->pc = 0x30C384u;
            return;
        }
    }
    ctx->pc = 0x30C374u;
    // 0x30c374: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30c374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30c378: 0x8c831364  lw          $v1, 0x1364($a0)
    ctx->pc = 0x30c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4964)));
    // 0x30c37c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30c380: 0xac831364  sw          $v1, 0x1364($a0)
    ctx->pc = 0x30c380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4964), GPR_U32(ctx, 3));
    ctx->pc = 0x30c384u;
}
