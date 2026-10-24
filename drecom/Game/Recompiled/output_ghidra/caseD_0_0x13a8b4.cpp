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

// Function: caseD_0
// Address: 0x13a8b4 - 0x13a8dc
void caseD_0_0x13a8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x13a8b4");
#endif

    ctx->pc = 0x13a8b4u;

    // 0x13a8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a8b8: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a8bc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13a8c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13a8c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a8c8: 0x0  nop
    ctx->pc = 0x13a8c8u;
    // NOP
    // 0x13a8cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13a8d0: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13a8d4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x13A8D4u;
    {
        const bool branch_taken_0x13a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a8d4) {
            ctx->pc = 0x13AA6Cu;
            return;
        }
    }
    ctx->pc = 0x13A8DCu;
}
