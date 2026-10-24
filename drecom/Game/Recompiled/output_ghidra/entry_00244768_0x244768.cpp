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

// Function: entry_00244768
// Address: 0x244768 - 0x2447e0
void entry_00244768_0x244768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244768_0x244768");
#endif

    switch (ctx->pc) {
        case 0x244788u: goto label_244788;
        case 0x244790u: goto label_244790;
        default: break;
    }

    ctx->pc = 0x244768u;

    // 0x244768: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24476c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x24476cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244770: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x244770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x244774: 0x3406f008  ori         $a2, $zero, 0xF008
    ctx->pc = 0x244774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61448);
    // 0x244778: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24477c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x24477cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x244780: 0xc0965d0  jal         func_259740
    ctx->pc = 0x244780u;
    SET_GPR_U32(ctx, 31, 0x244788u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x244780u, 0x244788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244788u;
label_244788:
    // 0x244788: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244788u;
    SET_GPR_U32(ctx, 31, 0x244790u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244788u, 0x244790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244790u;
label_244790:
    // 0x244790: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244794: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x244794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x244798: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x244798u;
    {
        const bool branch_taken_0x244798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244798) {
            ctx->pc = 0x2447E0u;
            return;
        }
    }
    ctx->pc = 0x2447A0u;
    // 0x2447a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2447a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2447a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2447a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447a8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2447a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2447ac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2447acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2447b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2447b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2447b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2447b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2447b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2447bc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2447bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2447c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2447c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2447c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2447c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2447cc: 0x3406f00a  ori         $a2, $zero, 0xF00A
    ctx->pc = 0x2447ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61450);
    // 0x2447d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2447d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2447d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2447d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2447d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2447D8u;
    SET_GPR_U32(ctx, 31, 0x2447E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2447D8u, 0x2447E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447E0u;
}
