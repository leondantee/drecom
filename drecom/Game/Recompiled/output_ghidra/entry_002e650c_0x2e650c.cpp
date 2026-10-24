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

// Function: entry_002e650c
// Address: 0x2e650c - 0x2e6540
void entry_002e650c_0x2e650c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e650c_0x2e650c");
#endif

    ctx->pc = 0x2e650cu;

    // 0x2e650c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6510: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e6510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e6514: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6518: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e6518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e651c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E651Cu;
    {
        const bool branch_taken_0x2e651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e651c) {
            ctx->pc = 0x2E6540u;
            return;
        }
    }
    ctx->pc = 0x2E6524u;
    // 0x2e6524: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6528: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e6528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e652c: 0x3c024134  lui         $v0, 0x4134
    ctx->pc = 0x2e652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16692 << 16));
    // 0x2e6530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6534: 0x0  nop
    ctx->pc = 0x2e6534u;
    // NOP
    // 0x2e6538: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e653c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x2e6540u;
}
