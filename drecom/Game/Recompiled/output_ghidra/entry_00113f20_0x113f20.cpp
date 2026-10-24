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

// Function: entry_00113f20
// Address: 0x113f20 - 0x113f48
void entry_00113f20_0x113f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113f20_0x113f20");
#endif

    ctx->pc = 0x113f20u;

label_113f20:
    // 0x113f20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x113f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113f24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113f28: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x113f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x113f2c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x113f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x113f30: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x113f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x113f34: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x113f34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x113f38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x113f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x113f3c: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x113F3Cu;
    {
        const bool branch_taken_0x113f3c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x113F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F3Cu;
        // 0x113f40: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f3c) {
            ctx->pc = 0x113F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113f20;
        }
    }
    ctx->pc = 0x113F44u;
    // 0x113f44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x113f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113f48u;
}
