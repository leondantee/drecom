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

// Function: Em01_R1_wait
// Address: 0x301a60 - 0x301bb4
void Em01_R1_wait_0x301a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_wait_0x301a60");
#endif

    switch (ctx->pc) {
        case 0x301ab8u: goto label_301ab8;
        case 0x301ae0u: goto label_301ae0;
        case 0x301aecu: goto label_301aec;
        case 0x301afcu: goto label_301afc;
        case 0x301b08u: goto label_301b08;
        case 0x301ba0u: goto label_301ba0;
        default: break;
    }

    ctx->pc = 0x301a60u;

    // 0x301a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x301a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x301a64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x301a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x301a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x301a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x301a6c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x301a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x301a70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301a74: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x301a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x301a78: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x301a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x301a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301a80: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x301A80u;
    {
        const bool branch_taken_0x301a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x301a80) {
            ctx->pc = 0x301AD0u;
            goto label_301ad0;
        }
    }
    ctx->pc = 0x301A88u;
    // 0x301a88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301A88u;
    {
        const bool branch_taken_0x301a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x301a88) {
            ctx->pc = 0x301A98u;
            goto label_301a98;
        }
    }
    ctx->pc = 0x301A90u;
    // 0x301a90: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x301A90u;
    {
        const bool branch_taken_0x301a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301a90) {
            ctx->pc = 0x301BA0u;
            goto label_301ba0;
        }
    }
    ctx->pc = 0x301A98u;
label_301a98:
    // 0x301a98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x301a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301a9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x301a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301aa0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x301aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x301aa4: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x301aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x301aa8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x301aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301aac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x301aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x301ab0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x301AB0u;
    SET_GPR_U32(ctx, 31, 0x301AB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x301AB0u, 0x301AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AB8u;
label_301ab8:
    // 0x301ab8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x301ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301abc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x301abcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x301ac0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301ac4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x301ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x301ac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x301ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x301acc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x301accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_301ad0:
    // 0x301ad0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x301ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301ad4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x301ad4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301ad8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x301AD8u;
    SET_GPR_U32(ctx, 31, 0x301AE0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x301AD8u, 0x301AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AE0u;
label_301ae0:
    // 0x301ae0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x301ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301ae4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x301AE4u;
    SET_GPR_U32(ctx, 31, 0x301AECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x301AE4u, 0x301AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AECu;
label_301aec:
    // 0x301aec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x301aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301af0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x301af0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301af4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x301AF4u;
    SET_GPR_U32(ctx, 31, 0x301AFCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x301AF4u, 0x301AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AFCu;
label_301afc:
    // 0x301afc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x301afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b00: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x301B00u;
    SET_GPR_U32(ctx, 31, 0x301B08u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x301B00u, 0x301B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B08u;
label_301b08:
    // 0x301b08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b0c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x301b0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x301b10: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x301B10u;
    {
        const bool branch_taken_0x301b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301b10) {
            ctx->pc = 0x301BA0u;
            goto label_301ba0;
        }
    }
    ctx->pc = 0x301B18u;
    // 0x301b18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b1c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x301b1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x301b20: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x301B20u;
    {
        const bool branch_taken_0x301b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301b20) {
            ctx->pc = 0x301B60u;
            goto label_301b60;
        }
    }
    ctx->pc = 0x301B28u;
    // 0x301b28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301b2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301b34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301b38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301b40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301b48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301b50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x301b58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x301B58u;
    {
        const bool branch_taken_0x301b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301b58) {
            ctx->pc = 0x301BA0u;
            goto label_301ba0;
        }
    }
    ctx->pc = 0x301B60u;
label_301b60:
    // 0x301b60: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x301b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x301b64: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x301b64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x301b68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x301b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x301b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301b70: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x301b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x301b74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x301b74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301b78: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x301b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x301b7c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x301b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x301b80: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x301b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x301b84: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x301b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x301b88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x301b8c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x301b8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x301b90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x301b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x301b94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x301b94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301b98: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x301B98u;
    SET_GPR_U32(ctx, 31, 0x301BA0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x301B98u, 0x301BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301BA0u;
label_301ba0:
    // 0x301ba0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x301ba0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301ba8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x301ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x301bac: 0x3e00008  jr          $ra
    ctx->pc = 0x301BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301BB4u;
}
