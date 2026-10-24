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

// Function: entry_00235140
// Address: 0x235140 - 0x235188
void entry_00235140_0x235140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235140_0x235140");
#endif

    switch (ctx->pc) {
        case 0x235178u: goto label_235178;
        default: break;
    }

    ctx->pc = 0x235140u;

    // 0x235140: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235144: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x235144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x235148: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x235148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23514c: 0x30550020  andi        $s5, $v0, 0x20
    ctx->pc = 0x23514cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x235150: 0x16a0000d  bnez        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x235150u;
    {
        const bool branch_taken_0x235150 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x235150) {
            ctx->pc = 0x235188u;
            return;
        }
    }
    ctx->pc = 0x235158u;
    // 0x235158: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23515c: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x23515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x235160: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x235160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235164: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235168: 0xc4c000d4  lwc1        $f0, 0xD4($a2)
    ctx->pc = 0x235168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23516c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x23516cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x235170: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x235170u;
    SET_GPR_U32(ctx, 31, 0x235178u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x235170u, 0x235178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235178u;
label_235178:
    // 0x235178: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23517c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x23517cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x235180: 0xc05cd78  jal         func_1735E0
    ctx->pc = 0x235180u;
    SET_GPR_U32(ctx, 31, 0x235188u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x235180u, 0x235188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235188u;
}
