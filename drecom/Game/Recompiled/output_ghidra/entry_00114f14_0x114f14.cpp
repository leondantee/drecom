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

// Function: entry_00114f14
// Address: 0x114f14 - 0x114f54
void entry_00114f14_0x114f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114f14_0x114f14");
#endif

    ctx->pc = 0x114f14u;

    // 0x114f14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x114f18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x114f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x114f1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x114f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x114f20: 0x2442d8d0  addiu       $v0, $v0, -0x2730
    ctx->pc = 0x114f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
    // 0x114f24: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114f28: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x114f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x114f2c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x114f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x114f30: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x114f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x114f34: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x114f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x114f38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x114f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x114f3c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x114f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x114f40: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x114f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114f44: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x114f44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x114f48: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x114F48u;
    {
        const bool branch_taken_0x114f48 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x114F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F48u;
        // 0x114f4c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f48) {
            ctx->pc = 0x114F54u;
            return;
        }
    }
    ctx->pc = 0x114F50u;
    // 0x114f50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x114f50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x114f54u;
}
