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

// Function: entry_0011f78c
// Address: 0x11f78c - 0x11f7b4
void entry_0011f78c_0x11f78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f78c_0x11f78c");
#endif

    ctx->pc = 0x11f78cu;

    // 0x11f78c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11f790: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F790u;
    {
        const bool branch_taken_0x11f790 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x11F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F790u;
        // 0x11f794: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f790) {
            ctx->pc = 0x11F7B4u;
            return;
        }
    }
    ctx->pc = 0x11F798u;
    // 0x11f798: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11f79c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x11f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x11f7a0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x11f7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x11f7a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11f7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11f7a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f7ac: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x11f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x11f7b0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x11f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x11f7b4u;
}
