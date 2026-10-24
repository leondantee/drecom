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

// Function: entry_001f2d80
// Address: 0x1f2d80 - 0x1f2dcc
void entry_001f2d80_0x1f2d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2d80_0x1f2d80");
#endif

    switch (ctx->pc) {
        case 0x1f2dbcu: goto label_1f2dbc;
        default: break;
    }

    ctx->pc = 0x1f2d80u;

    // 0x1f2d80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2d88: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f2d8c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f2d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f2d90: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F2D90u;
    {
        const bool branch_taken_0x1f2d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d90) {
            ctx->pc = 0x1F2DCCu;
            return;
        }
    }
    ctx->pc = 0x1F2D98u;
    // 0x1f2d98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d9c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1f2d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2da0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1f2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1f2da4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1f2da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1f2da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2dac: 0x0  nop
    ctx->pc = 0x1f2dacu;
    // NOP
    // 0x1f2db0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f2db0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2db4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F2DB4u;
    SET_GPR_U32(ctx, 31, 0x1F2DBCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F2DB4u, 0x1F2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DBCu;
label_1f2dbc:
    // 0x1f2dbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2dc0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f2dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f2dc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F2DC4u;
    {
        const bool branch_taken_0x1f2dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2dc4) {
            ctx->pc = 0x1F2DF8u;
            return;
        }
    }
    ctx->pc = 0x1F2DCCu;
}
