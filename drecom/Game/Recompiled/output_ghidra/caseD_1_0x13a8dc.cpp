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

// Function: caseD_1
// Address: 0x13a8dc - 0x13a904
void caseD_1_0x13a8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x13a8dc");
#endif

    ctx->pc = 0x13a8dcu;

    // 0x13a8dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a8e0: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a8e4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13a8e8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13a8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a8f0: 0x0  nop
    ctx->pc = 0x13a8f0u;
    // NOP
    // 0x13a8f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a8f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13a8f8: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13a8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x13a8fc: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x13A8FCu;
    {
        const bool branch_taken_0x13a8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a8fc) {
            ctx->pc = 0x13AA6Cu;
            return;
        }
    }
    ctx->pc = 0x13A904u;
}
