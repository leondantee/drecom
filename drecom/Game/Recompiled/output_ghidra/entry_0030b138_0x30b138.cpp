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

// Function: entry_0030b138
// Address: 0x30b138 - 0x30b1a8
void entry_0030b138_0x30b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b138_0x30b138");
#endif

    switch (ctx->pc) {
        case 0x30b144u: goto label_30b144;
        case 0x30b150u: goto label_30b150;
        case 0x30b15cu: goto label_30b15c;
        case 0x30b164u: goto label_30b164;
        default: break;
    }

    ctx->pc = 0x30b138u;

    // 0x30b138: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b13c: 0xc0c2e4c  jal         func_30B930
    ctx->pc = 0x30B13Cu;
    SET_GPR_U32(ctx, 31, 0x30B144u);
    ctx->pc = 0x30B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B930u, 0x30B13Cu, 0x30B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B144u;
label_30b144:
    // 0x30b144: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b148: 0xc0c2cec  jal         func_30B3B0
    ctx->pc = 0x30B148u;
    SET_GPR_U32(ctx, 31, 0x30B150u);
    ctx->pc = 0x30B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B3B0u, 0x30B148u, 0x30B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B150u;
label_30b150:
    // 0x30b150: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b154: 0xc0c2c6c  jal         func_30B1B0
    ctx->pc = 0x30B154u;
    SET_GPR_U32(ctx, 31, 0x30B15Cu);
    ctx->pc = 0x30B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B1B0u, 0x30B154u, 0x30B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B15Cu;
label_30b15c:
    // 0x30b15c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x30B15Cu;
    SET_GPR_U32(ctx, 31, 0x30B164u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x30B15Cu, 0x30B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B164u;
label_30b164:
    // 0x30b164: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x30b164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30b168: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x30b168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x30b16c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x30b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30b170: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30b170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30b174: 0x24639790  addiu       $v1, $v1, -0x6870
    ctx->pc = 0x30b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940560));
    // 0x30b178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30b17c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x30b17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30b180: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b184: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x30b184u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x30b188: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x30b188u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b18c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30b18cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b19c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x30b19cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x30B1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B1A8u;
}
