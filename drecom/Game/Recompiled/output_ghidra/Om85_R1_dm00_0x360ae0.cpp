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

// Function: Om85_R1_dm00
// Address: 0x360ae0 - 0x360bcc
void Om85_R1_dm00_0x360ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om85_R1_dm00_0x360ae0");
#endif

    switch (ctx->pc) {
        case 0x360b28u: goto label_360b28;
        case 0x360b7cu: goto label_360b7c;
        case 0x360b88u: goto label_360b88;
        default: break;
    }

    ctx->pc = 0x360ae0u;

    // 0x360ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x360ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x360ae4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x360ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x360ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x360aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x360af0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x360af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x360af4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x360af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x360af8: 0x2442ac40  addiu       $v0, $v0, -0x53C0
    ctx->pc = 0x360af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945856));
    // 0x360afc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x360afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x360b00: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x360b00u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3AAC40u));
    // 0x360b04: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x360b04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x360b08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x360b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x360b0c: 0x8c5102d0  lw          $s1, 0x2D0($v0)
    ctx->pc = 0x360b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x360b10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x360b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x360b14: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x360b14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x360b18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x360b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x360b1c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x360b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x360b20: 0xc067694  jal         func_19DA50
    ctx->pc = 0x360B20u;
    SET_GPR_U32(ctx, 31, 0x360B28u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x360B20u, 0x360B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B28u;
label_360b28:
    // 0x360b28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x360b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x360b2c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x360b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x360b30: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x360b30u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x360b34: 0x0  nop
    ctx->pc = 0x360b34u;
    // NOP
    // 0x360b38: 0x0  nop
    ctx->pc = 0x360b38u;
    // NOP
    // 0x360b3c: 0x8010  mfhi        $s0
    ctx->pc = 0x360b3cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x360b40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x360b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x360b44: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x360b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x360b48: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x360b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x360b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x360b50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x360b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x360b54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x360b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x360b58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x360b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x360b5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x360b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x360b60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x360b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x360b64: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x360b64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x360b68: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x360b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x360b6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x360b6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360b70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x360b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x360b74: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x360B74u;
    SET_GPR_U32(ctx, 31, 0x360B7Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x360B74u, 0x360B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B7Cu;
label_360b7c:
    // 0x360b7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x360b7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x360b80: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x360B80u;
    SET_GPR_U32(ctx, 31, 0x360B88u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x360B80u, 0x360B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B88u;
label_360b88:
    // 0x360b88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x360b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360b8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x360b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x360b90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x360b90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x360b94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x360b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x360b98: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x360b98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x360b9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x360b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x360ba0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x360ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x360ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x360ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x360ba8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x360ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x360bac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x360bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x360bb0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x360bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x360bb4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x360bb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360bb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x360bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360bbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360bc0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x360bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x360bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x360BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360BCCu;
}
