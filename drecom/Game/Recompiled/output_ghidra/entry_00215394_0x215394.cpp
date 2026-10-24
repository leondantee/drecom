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

// Function: entry_00215394
// Address: 0x215394 - 0x2153a8
void entry_00215394_0x215394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215394_0x215394");
#endif

    switch (ctx->pc) {
        case 0x2153a0u: goto label_2153a0;
        default: break;
    }

    ctx->pc = 0x215394u;

    // 0x215394: 0xac82aae0  sw          $v0, -0x5520($a0)
    ctx->pc = 0x215394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294945504), GPR_U32(ctx, 2));
    // 0x215398: 0xc085318  jal         func_214C60
    ctx->pc = 0x215398u;
    SET_GPR_U32(ctx, 31, 0x2153A0u);
    ctx->pc = 0x21539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215398u;
    // 0x21539c: 0x42000038  ei (Delay Slot)
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->in_delay_slot = false;
    ctx->pc = 0x214C60u;
    {
        ctx->pc = 0x2153A0u;
        ps2_stubs::sceSifInitCmd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2153A0u) { return; }
    ctx->pc = 0x2153A0u;
label_2153a0:
    // 0x2153a0: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x2153a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x2153a4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2153a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x2153a8u;
}
