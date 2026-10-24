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

// Function: caseD_5
// Address: 0x13a99c - 0x13a9e4
void caseD_5_0x13a99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x13a99c");
#endif

    ctx->pc = 0x13a99cu;

    // 0x13a99c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a9a0: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a9a4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13a9a8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13a9ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a9b0: 0x0  nop
    ctx->pc = 0x13a9b0u;
    // NOP
    // 0x13a9b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a9b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a9b8: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13a9bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a9c0: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a9c4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x13a9c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13a9cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a9d0: 0x0  nop
    ctx->pc = 0x13a9d0u;
    // NOP
    // 0x13a9d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a9d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13a9d8: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13a9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x13a9dc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13A9DCu;
    {
        const bool branch_taken_0x13a9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a9dc) {
            ctx->pc = 0x13AA6Cu;
            return;
        }
    }
    ctx->pc = 0x13A9E4u;
}
