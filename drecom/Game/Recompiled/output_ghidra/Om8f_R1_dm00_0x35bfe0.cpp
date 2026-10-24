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

// Function: Om8f_R1_dm00
// Address: 0x35bfe0 - 0x35c0cc
void Om8f_R1_dm00_0x35bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8f_R1_dm00_0x35bfe0");
#endif

    switch (ctx->pc) {
        case 0x35c028u: goto label_35c028;
        case 0x35c07cu: goto label_35c07c;
        case 0x35c088u: goto label_35c088;
        default: break;
    }

    ctx->pc = 0x35bfe0u;

    // 0x35bfe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35bfe4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x35bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x35bfe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35bfec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35bff0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x35bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x35bff4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35bff8: 0x2442aa60  addiu       $v0, $v0, -0x55A0
    ctx->pc = 0x35bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945376));
    // 0x35bffc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x35bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35c000: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35c000u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3AAA60u));
    // 0x35c004: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x35c004u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x35c008: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c00c: 0x8c5102d0  lw          $s1, 0x2D0($v0)
    ctx->pc = 0x35c00cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x35c010: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c014: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x35c014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c018: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c01c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x35c01cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c020: 0xc067694  jal         func_19DA50
    ctx->pc = 0x35C020u;
    SET_GPR_U32(ctx, 31, 0x35C028u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x35C020u, 0x35C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C028u;
label_35c028:
    // 0x35c028: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35c028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35c02c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x35c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x35c030: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35c030u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35c034: 0x0  nop
    ctx->pc = 0x35c034u;
    // NOP
    // 0x35c038: 0x0  nop
    ctx->pc = 0x35c038u;
    // NOP
    // 0x35c03c: 0x8010  mfhi        $s0
    ctx->pc = 0x35c03cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x35c040: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c044: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x35c044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x35c048: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x35c048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x35c04c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35c050: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35c050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35c054: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35c054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35c058: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35c058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35c05c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35c05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35c060: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35c060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35c064: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x35c064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35c068: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x35c068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x35c06c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35c06cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c070: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35c070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35c074: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35C074u;
    SET_GPR_U32(ctx, 31, 0x35C07Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35C074u, 0x35C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C07Cu;
label_35c07c:
    // 0x35c07c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35c07cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35c080: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35C080u;
    SET_GPR_U32(ctx, 31, 0x35C088u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35C080u, 0x35C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C088u;
label_35c088:
    // 0x35c088: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35c088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c08c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c090: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35c090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35c094: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c098: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35c098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c09c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c0a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35c0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c0a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c0a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35c0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c0ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c0b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35c0b4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35c0b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c0c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35c0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x35C0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C0CCu;
}
