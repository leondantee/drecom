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

// Function: entry_002e682c
// Address: 0x2e682c - 0x2e687c
void entry_002e682c_0x2e682c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e682c_0x2e682c");
#endif

    ctx->pc = 0x2e682cu;

    // 0x2e682c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e682cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6830: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e6830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6834: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2e6834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x2e6838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e683c: 0x0  nop
    ctx->pc = 0x2e683cu;
    // NOP
    // 0x2e6840: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e6844: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e6844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2e6848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e684c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e684cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e6850: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6854: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e6854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e6858: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6858u;
    {
        const bool branch_taken_0x2e6858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6858) {
            ctx->pc = 0x2E687Cu;
            return;
        }
    }
    ctx->pc = 0x2E6860u;
    // 0x2e6860: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6864: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e6864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6868: 0x3c0241d2  lui         $v0, 0x41D2
    ctx->pc = 0x2e6868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16850 << 16));
    // 0x2e686c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e686cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6870: 0x0  nop
    ctx->pc = 0x2e6870u;
    // NOP
    // 0x2e6874: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6878: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e6878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x2e687cu;
}
