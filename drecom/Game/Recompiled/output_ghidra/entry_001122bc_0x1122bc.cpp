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

// Function: entry_001122bc
// Address: 0x1122bc - 0x1122e4
void entry_001122bc_0x1122bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001122bc_0x1122bc");
#endif

    ctx->pc = 0x1122bcu;

    // 0x1122bc: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1122bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1122c0: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1122c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1122c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1122c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1122c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1122c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1122cc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1122ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1122d0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1122d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1122d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1122d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1122d8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1122d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1122dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1122DCu;
    {
        const bool branch_taken_0x1122dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122DCu;
        // 0x1122e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122dc) {
            ctx->pc = 0x112308u;
            return;
        }
    }
    ctx->pc = 0x1122E4u;
}
