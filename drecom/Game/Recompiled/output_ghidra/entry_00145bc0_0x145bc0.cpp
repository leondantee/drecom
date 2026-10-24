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

// Function: entry_00145bc0
// Address: 0x145bc0 - 0x145be0
void entry_00145bc0_0x145bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145bc0_0x145bc0");
#endif

    ctx->pc = 0x145bc0u;

    // 0x145bc0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145bc4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145bc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x145bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x145bcc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145bd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145BD0u;
    {
        const bool branch_taken_0x145bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145bd0) {
            ctx->pc = 0x145BE0u;
            return;
        }
    }
    ctx->pc = 0x145BD8u;
    // 0x145bd8: 0x36020020  ori         $v0, $s0, 0x20
    ctx->pc = 0x145bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x145bdc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x145bdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x145be0u;
}
