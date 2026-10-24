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

// Function: entry_00371dc8
// Address: 0x371dc8 - 0x371e20
void entry_00371dc8_0x371dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371dc8_0x371dc8");
#endif

    ctx->pc = 0x371dc8u;

label_371dc8:
    // 0x371dc8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x371dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371dcc: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x371dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x371dd0: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x371dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x371dd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371dd8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x371dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371ddc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x371ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371de0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x371de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x371de4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x371de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x371de8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371dec: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x371decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371df0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x371df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x371df4: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x371df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x371df8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371dfc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x371dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x371e00: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x371E00u;
    {
        const bool branch_taken_0x371e00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x371e00) {
            ctx->pc = 0x371DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371dc8;
        }
    }
    ctx->pc = 0x371E08u;
    // 0x371e08: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x371e08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371e14: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x371e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x371e18: 0x3e00008  jr          $ra
    ctx->pc = 0x371E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371E20u;
}
