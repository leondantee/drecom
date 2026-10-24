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

// Function: entry_001456a4
// Address: 0x1456a4 - 0x1456f0
void entry_001456a4_0x1456a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001456a4_0x1456a4");
#endif

    ctx->pc = 0x1456a4u;

    // 0x1456a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1456a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1456a8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1456a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1456ac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1456acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1456b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1456b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1456b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1456b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1456b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1456b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1456bc: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1456bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1456c0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1456c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1456c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1456c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1456c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1456c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1456cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1456ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1456d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1456D0u;
    {
        const bool branch_taken_0x1456d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1456d0) {
            ctx->pc = 0x1456F0u;
            return;
        }
    }
    ctx->pc = 0x1456D8u;
    // 0x1456d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1456d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1456dc: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x1456dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1456e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1456e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1456e4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1456e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1456e8: 0x36020010  ori         $v0, $s0, 0x10
    ctx->pc = 0x1456e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x1456ec: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1456ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1456f0u;
}
