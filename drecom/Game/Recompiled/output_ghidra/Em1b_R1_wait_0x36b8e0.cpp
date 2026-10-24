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

// Function: Em1b_R1_wait
// Address: 0x36b8e0 - 0x36ba20
void Em1b_R1_wait_0x36b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_wait_0x36b8e0");
#endif

    switch (ctx->pc) {
        case 0x36b934u: goto label_36b934;
        case 0x36b968u: goto label_36b968;
        case 0x36b988u: goto label_36b988;
        case 0x36b9a8u: goto label_36b9a8;
        case 0x36b9b4u: goto label_36b9b4;
        case 0x36b9c4u: goto label_36b9c4;
        case 0x36b9d0u: goto label_36b9d0;
        default: break;
    }

    ctx->pc = 0x36b8e0u;

    // 0x36b8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36b8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36b8e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36b8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36b8e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36b8ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b8f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36b8f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36b8f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36b8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36b8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b8fc: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x36B8FCu;
    {
        const bool branch_taken_0x36b8fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36b8fc) {
            ctx->pc = 0x36B998u;
            goto label_36b998;
        }
    }
    ctx->pc = 0x36B904u;
    // 0x36b904: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36B904u;
    {
        const bool branch_taken_0x36b904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b904) {
            ctx->pc = 0x36B914u;
            goto label_36b914;
        }
    }
    ctx->pc = 0x36B90Cu;
    // 0x36b90c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x36B90Cu;
    {
        const bool branch_taken_0x36b90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b90c) {
            ctx->pc = 0x36BA10u;
            goto label_36ba10;
        }
    }
    ctx->pc = 0x36B914u;
label_36b914:
    // 0x36b914: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b918: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b91c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36b91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36b920: 0x24065a01  addiu       $a2, $zero, 0x5A01
    ctx->pc = 0x36b920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x36b924: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36b924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b928: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36b928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36b92c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36B92Cu;
    SET_GPR_U32(ctx, 31, 0x36B934u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36B92Cu, 0x36B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B934u;
label_36b934:
    // 0x36b934: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b938: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x36b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36b93c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x36B93Cu;
    {
        const bool branch_taken_0x36b93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b93c) {
            ctx->pc = 0x36B988u;
            goto label_36b988;
        }
    }
    ctx->pc = 0x36B944u;
    // 0x36b944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b948: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x36b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b94c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x36b950: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36b954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36b954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36b958: 0x0  nop
    ctx->pc = 0x36b958u;
    // NOP
    // 0x36b95c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x36b95cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36b960: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36B960u;
    SET_GPR_U32(ctx, 31, 0x36B968u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36B960u, 0x36B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B968u;
label_36b968:
    // 0x36b968: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b96c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36b96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36b970: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x36b970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x36b974: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36b978: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36b978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36b97c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b980: 0xc0db724  jal         func_36DC90
    ctx->pc = 0x36B980u;
    SET_GPR_U32(ctx, 31, 0x36B988u);
    ctx->pc = 0x36DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC90u, 0x36B980u, 0x36B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B988u;
label_36b988:
    // 0x36b988: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b98c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36b98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36b990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36b990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36b994: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36b994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36b998:
    // 0x36b998: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b99c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36b99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36b9a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36B9A0u;
    SET_GPR_U32(ctx, 31, 0x36B9A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36B9A0u, 0x36B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B9A8u;
label_36b9a8:
    // 0x36b9a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9ac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36B9ACu;
    SET_GPR_U32(ctx, 31, 0x36B9B4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36B9ACu, 0x36B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B9B4u;
label_36b9b4:
    // 0x36b9b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36b9bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36B9BCu;
    SET_GPR_U32(ctx, 31, 0x36B9C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36B9BCu, 0x36B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B9C4u;
label_36b9c4:
    // 0x36b9c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9c8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36B9C8u;
    SET_GPR_U32(ctx, 31, 0x36B9D0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36B9C8u, 0x36B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B9D0u;
label_36b9d0:
    // 0x36b9d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9d4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36b9d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36b9d8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36B9D8u;
    {
        const bool branch_taken_0x36b9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b9d8) {
            ctx->pc = 0x36BA10u;
            goto label_36ba10;
        }
    }
    ctx->pc = 0x36B9E0u;
    // 0x36b9e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b9e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36b9ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b9f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36b9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36b9f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36b9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ba00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36ba04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ba08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36ba10:
    // 0x36ba10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36ba10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ba14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36ba14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36ba18: 0x3e00008  jr          $ra
    ctx->pc = 0x36BA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BA20u;
}
