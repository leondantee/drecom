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

// Function: caseD_3
// Address: 0x13a92c - 0x13a954
void caseD_3_0x13a92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x13a92c");
#endif

    ctx->pc = 0x13a92cu;

    // 0x13a92c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a930: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13a930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a934: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13a938: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13a93c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a940: 0x0  nop
    ctx->pc = 0x13a940u;
    // NOP
    // 0x13a944: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a948: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13a948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x13a94c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x13A94Cu;
    {
        const bool branch_taken_0x13a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a94c) {
            ctx->pc = 0x13AA6Cu;
            return;
        }
    }
    ctx->pc = 0x13A954u;
}
