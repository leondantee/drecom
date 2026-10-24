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

// Function: entry_001f2c60
// Address: 0x1f2c60 - 0x1f2cac
void entry_001f2c60_0x1f2c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2c60_0x1f2c60");
#endif

    switch (ctx->pc) {
        case 0x1f2c9cu: goto label_1f2c9c;
        default: break;
    }

    ctx->pc = 0x1f2c60u;

    // 0x1f2c60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2c68: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f2c6c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f2c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f2c70: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F2C70u;
    {
        const bool branch_taken_0x1f2c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2c70) {
            ctx->pc = 0x1F2CACu;
            return;
        }
    }
    ctx->pc = 0x1F2C78u;
    // 0x1f2c78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c7c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1f2c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2c80: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1f2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1f2c84: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1f2c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1f2c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2c8c: 0x0  nop
    ctx->pc = 0x1f2c8cu;
    // NOP
    // 0x1f2c90: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f2c90u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2c94: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F2C94u;
    SET_GPR_U32(ctx, 31, 0x1F2C9Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F2C94u, 0x1F2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C9Cu;
label_1f2c9c:
    // 0x1f2c9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2ca0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f2ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f2ca4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F2CA4u;
    {
        const bool branch_taken_0x1f2ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2ca4) {
            ctx->pc = 0x1F2CD8u;
            return;
        }
    }
    ctx->pc = 0x1F2CACu;
}
