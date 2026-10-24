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

// Function: entry_001a8790
// Address: 0x1a8790 - 0x1a87b8
void entry_001a8790_0x1a8790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8790_0x1a8790");
#endif

    ctx->pc = 0x1a8790u;

    // 0x1a8790: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a8790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a8794: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a8794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a8798: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a8798u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a879c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a87a0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1a87a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a87a4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A87A4u;
    {
        const bool branch_taken_0x1a87a4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a87a4) {
            ctx->pc = 0x1A87B8u;
            return;
        }
    }
    ctx->pc = 0x1A87ACu;
    // 0x1a87ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A87ACu;
    {
        const bool branch_taken_0x1a87ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a87ac) {
            ctx->pc = 0x1A87B8u;
            return;
        }
    }
    ctx->pc = 0x1A87B4u;
    // 0x1a87b4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->pc = 0x1a87b8u;
}
