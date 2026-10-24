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

// Function: entry_00221fb0
// Address: 0x221fb0 - 0x221ff8
void entry_00221fb0_0x221fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221fb0_0x221fb0");
#endif

    switch (ctx->pc) {
        case 0x221fe8u: goto label_221fe8;
        default: break;
    }

    ctx->pc = 0x221fb0u;

    // 0x221fb0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x221fb4: 0x24871330  addiu       $a3, $a0, 0x1330
    ctx->pc = 0x221fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x221fb8: 0x8ce60030  lw          $a2, 0x30($a3)
    ctx->pc = 0x221fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x221fbc: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x221fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x221fc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x221FC0u;
    {
        const bool branch_taken_0x221fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221fc0) {
            ctx->pc = 0x221FF8u;
            return;
        }
    }
    ctx->pc = 0x221FC8u;
    // 0x221fc8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x221fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x221fcc: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x221fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x221fd0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x221fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221fd4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x221fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x221fd8: 0xc4a000d4  lwc1        $f0, 0xD4($a1)
    ctx->pc = 0x221fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221fdc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x221fdcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x221fe0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x221FE0u;
    SET_GPR_U32(ctx, 31, 0x221FE8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x221FE0u, 0x221FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FE8u;
label_221fe8:
    // 0x221fe8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x221fec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x221fecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x221ff0: 0xc05cd78  jal         func_1735E0
    ctx->pc = 0x221FF0u;
    SET_GPR_U32(ctx, 31, 0x221FF8u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x221FF0u, 0x221FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FF8u;
}
