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

// Function: caseD_6
// Address: 0x13a9e4 - 0x13aa2c
void caseD_6_0x13a9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x13a9e4");
#endif

    ctx->pc = 0x13a9e4u;

    // 0x13a9e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a9e8: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a9ec: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13a9f0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13a9f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a9f8: 0x0  nop
    ctx->pc = 0x13a9f8u;
    // NOP
    // 0x13a9fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13aa00: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13aa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13aa04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13aa08: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aa0c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13aa10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13aa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13aa14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aa14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aa18: 0x0  nop
    ctx->pc = 0x13aa18u;
    // NOP
    // 0x13aa1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13aa1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13aa20: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13aa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x13aa24: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13AA24u;
    {
        const bool branch_taken_0x13aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aa24) {
            ctx->pc = 0x13AA6Cu;
            return;
        }
    }
    ctx->pc = 0x13AA2Cu;
}
