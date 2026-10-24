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

// Function: entry_0032e37c
// Address: 0x32e37c - 0x32e3fc
void entry_0032e37c_0x32e37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e37c_0x32e37c");
#endif

    switch (ctx->pc) {
        case 0x32e3a0u: goto label_32e3a0;
        case 0x32e3d8u: goto label_32e3d8;
        default: break;
    }

    ctx->pc = 0x32e37cu;

    // 0x32e37c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e380: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e384: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32e384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32e388: 0x34421a18  ori         $v0, $v0, 0x1A18
    ctx->pc = 0x32e388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6680);
    // 0x32e38c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e390: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e394: 0x24452048  addiu       $a1, $v0, 0x2048
    ctx->pc = 0x32e394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8264));
    // 0x32e398: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E398u;
    SET_GPR_U32(ctx, 31, 0x32E3A0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E398u, 0x32E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E3A0u;
label_32e3a0:
    // 0x32e3a0: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32e3a4: 0x2442c2b0  addiu       $v0, $v0, -0x3D50
    ctx->pc = 0x32e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951600));
    // 0x32e3a8: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x32e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32e3ac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x32e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32e3b0: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x32e3b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x32e3b4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e3b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e3bc: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32e3c0: 0x34421a1a  ori         $v0, $v0, 0x1A1A
    ctx->pc = 0x32e3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6682);
    // 0x32e3c4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e3c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e3cc: 0x24451f00  addiu       $a1, $v0, 0x1F00
    ctx->pc = 0x32e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7936));
    // 0x32e3d0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E3D0u;
    SET_GPR_U32(ctx, 31, 0x32E3D8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E3D0u, 0x32E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E3D8u;
label_32e3d8:
    // 0x32e3d8: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x32e3d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e3dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32e3dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e3e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32e3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e3e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32e3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e3e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e3ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e3f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x32e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32e3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x32E3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E3FCu;
}
