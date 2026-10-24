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

// Function: entry_00115290
// Address: 0x115290 - 0x1152b4
void entry_00115290_0x115290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115290_0x115290");
#endif

    ctx->pc = 0x115290u;

    // 0x115290: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x115290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x115294: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x115294u;
    {
        const bool branch_taken_0x115294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115294u;
        // 0x115298: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115294) {
            ctx->pc = 0x1152D4u;
            return;
        }
    }
    ctx->pc = 0x11529Cu;
    // 0x11529c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11529cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1152a0: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x1152a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x1152a4: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x1152a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x1152a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1152a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1152ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1152ACu;
    {
        const bool branch_taken_0x1152ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1152ac) {
            ctx->pc = 0x1152C0u;
            return;
        }
    }
    ctx->pc = 0x1152B4u;
}
