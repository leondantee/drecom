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

// Function: entry_001e9e38
// Address: 0x1e9e38 - 0x1e9ea0
void entry_001e9e38_0x1e9e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9e38_0x1e9e38");
#endif

    switch (ctx->pc) {
        case 0x1e9e88u: goto label_1e9e88;
        case 0x1e9e98u: goto label_1e9e98;
        default: break;
    }

    ctx->pc = 0x1e9e38u;

    // 0x1e9e38: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9e3c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1e9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9e40: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1e9e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e9e44: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1e9e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1e9e48: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E9E48u;
    {
        const bool branch_taken_0x1e9e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e48) {
            ctx->pc = 0x1E9EE4u;
            return;
        }
    }
    ctx->pc = 0x1E9E50u;
    // 0x1e9e50: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9e54: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1e9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9e58: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1e9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e9e5c: 0x30451000  andi        $a1, $v0, 0x1000
    ctx->pc = 0x1e9e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1e9e60: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E9E60u;
    {
        const bool branch_taken_0x1e9e60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e60) {
            ctx->pc = 0x1E9EA0u;
            return;
        }
    }
    ctx->pc = 0x1E9E68u;
    // 0x1e9e68: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9e6c: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x1e9e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1e9e70: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1e9e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9e74: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9e78: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1e9e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e7c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1e9e7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e9e80: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1E9E80u;
    SET_GPR_U32(ctx, 31, 0x1E9E88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9E80u, 0x1E9E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E88u;
label_1e9e88:
    // 0x1e9e88: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9e8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e9e8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e9e90: 0xc05cd78  jal         func_1735E0
    ctx->pc = 0x1E9E90u;
    SET_GPR_U32(ctx, 31, 0x1E9E98u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x1E9E90u, 0x1E9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E98u;
label_1e9e98:
    // 0x1e9e98: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E9E98u;
    {
        const bool branch_taken_0x1e9e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e98) {
            ctx->pc = 0x1E9EE4u;
            return;
        }
    }
    ctx->pc = 0x1E9EA0u;
}
