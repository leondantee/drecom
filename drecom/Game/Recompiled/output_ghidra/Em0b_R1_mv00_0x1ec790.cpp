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

// Function: Em0b_R1_mv00
// Address: 0x1ec790 - 0x1ec864
void Em0b_R1_mv00_0x1ec790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv00_0x1ec790");
#endif

    switch (ctx->pc) {
        case 0x1ec838u: goto label_1ec838;
        case 0x1ec848u: goto label_1ec848;
        case 0x1ec854u: goto label_1ec854;
        default: break;
    }

    ctx->pc = 0x1ec790u;

    // 0x1ec790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec794: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ec794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ec798: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1ec798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1ec79c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ec79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec7a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1ec7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ec7a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ec7a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ec7a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec7ac: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1EC7ACu;
    {
        const bool branch_taken_0x1ec7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec7ac) {
            ctx->pc = 0x1EC838u;
            goto label_1ec838;
        }
    }
    ctx->pc = 0x1EC7B4u;
    // 0x1ec7b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC7B4u;
    {
        const bool branch_taken_0x1ec7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7b4) {
            ctx->pc = 0x1EC7C4u;
            goto label_1ec7c4;
        }
    }
    ctx->pc = 0x1EC7BCu;
    // 0x1ec7bc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1EC7BCu;
    {
        const bool branch_taken_0x1ec7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7bc) {
            ctx->pc = 0x1EC854u;
            goto label_1ec854;
        }
    }
    ctx->pc = 0x1EC7C4u;
label_1ec7c4:
    // 0x1ec7c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec7c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec7cc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ec7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec7d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec7d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec7d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec7dc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ec7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1ec7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec7e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec7ec: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ec7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ec7f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ec7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ec7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec7fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec800: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ec800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ec804: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ec808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec80c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec810: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec814: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ec814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ec818: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec81c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ec81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec820: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ec824: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1ec824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1ec828: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ec828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec82c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ec82cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ec830: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EC830u;
    SET_GPR_U32(ctx, 31, 0x1EC838u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EC830u, 0x1EC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC838u;
label_1ec838:
    // 0x1ec838: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ec838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec83c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ec83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ec840: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EC840u;
    SET_GPR_U32(ctx, 31, 0x1EC848u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EC840u, 0x1EC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC848u;
label_1ec848:
    // 0x1ec848: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ec848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec84c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EC84Cu;
    SET_GPR_U32(ctx, 31, 0x1EC854u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EC84Cu, 0x1EC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC854u;
label_1ec854:
    // 0x1ec854: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1ec854u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec858: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ec858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec85c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC864u;
}
