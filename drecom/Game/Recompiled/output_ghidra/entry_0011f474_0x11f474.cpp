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

// Function: entry_0011f474
// Address: 0x11f474 - 0x11f490
void entry_0011f474_0x11f474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f474_0x11f474");
#endif

    ctx->pc = 0x11f474u;

    // 0x11f474: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11f478: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x11f478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x11f47c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F47Cu;
    {
        const bool branch_taken_0x11f47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f47c) {
            ctx->pc = 0x11F480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F47Cu;
            // 0x11f480: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F490u;
            return;
        }
    }
    ctx->pc = 0x11F484u;
    // 0x11f484: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x11f484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x11f488: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x11f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x11f48c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x11f48cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->pc = 0x11f490u;
}
