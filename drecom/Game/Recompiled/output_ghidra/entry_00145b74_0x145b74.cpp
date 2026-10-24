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

// Function: entry_00145b74
// Address: 0x145b74 - 0x145bc0
void entry_00145b74_0x145b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145b74_0x145b74");
#endif

    ctx->pc = 0x145b74u;

    // 0x145b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145b78: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x145b78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145b7c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145b80: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x145b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145b84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x145b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145b88: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x145b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145b8c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x145b8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145b90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145b94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145b98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x145b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x145b9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145ba0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x145BA0u;
    {
        const bool branch_taken_0x145ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ba0) {
            ctx->pc = 0x145BC0u;
            return;
        }
    }
    ctx->pc = 0x145BA8u;
    // 0x145ba8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145bac: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x145bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145bb0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145bb4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x145bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x145bb8: 0x36020010  ori         $v0, $s0, 0x10
    ctx->pc = 0x145bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x145bbc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x145bbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x145bc0u;
}
