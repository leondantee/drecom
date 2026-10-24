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

// Function: caseD_2
// Address: 0x13a904 - 0x13a92c
void caseD_2_0x13a904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x13a904");
#endif

    ctx->pc = 0x13a904u;

    // 0x13a904: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a908: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a90c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13a910: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13a914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a918: 0x0  nop
    ctx->pc = 0x13a918u;
    // NOP
    // 0x13a91c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a91cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a920: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13a924: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x13A924u;
    {
        const bool branch_taken_0x13a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a924) {
            ctx->pc = 0x13AA6Cu;
            return;
        }
    }
    ctx->pc = 0x13A92Cu;
}
