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

// Function: Om86_R1_dm00
// Address: 0x35a510 - 0x35a5fc
void Om86_R1_dm00_0x35a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om86_R1_dm00_0x35a510");
#endif

    switch (ctx->pc) {
        case 0x35a558u: goto label_35a558;
        case 0x35a5acu: goto label_35a5ac;
        case 0x35a5b8u: goto label_35a5b8;
        default: break;
    }

    ctx->pc = 0x35a510u;

    // 0x35a510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35a514: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x35a514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x35a518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35a51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35a520: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x35a520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x35a524: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35a524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35a528: 0x2442a8f0  addiu       $v0, $v0, -0x5710
    ctx->pc = 0x35a528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945008));
    // 0x35a52c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x35a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35a530: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35a530u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3AA8F0u));
    // 0x35a534: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x35a534u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x35a538: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35a53c: 0x8c5102d0  lw          $s1, 0x2D0($v0)
    ctx->pc = 0x35a53cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x35a540: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35a544: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x35a544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a548: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35a54c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x35a54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a550: 0xc067694  jal         func_19DA50
    ctx->pc = 0x35A550u;
    SET_GPR_U32(ctx, 31, 0x35A558u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x35A550u, 0x35A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A558u;
label_35a558:
    // 0x35a558: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35a558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35a55c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x35a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x35a560: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35a560u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35a564: 0x0  nop
    ctx->pc = 0x35a564u;
    // NOP
    // 0x35a568: 0x0  nop
    ctx->pc = 0x35a568u;
    // NOP
    // 0x35a56c: 0x8010  mfhi        $s0
    ctx->pc = 0x35a56cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x35a570: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35a574: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x35a574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x35a578: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x35a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x35a57c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35a580: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35a580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35a584: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35a584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35a588: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35a588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35a58c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35a590: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35a590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35a594: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x35a594u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35a598: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x35a598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x35a59c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35a59cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a5a0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35a5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35a5a4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35A5A4u;
    SET_GPR_U32(ctx, 31, 0x35A5ACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35A5A4u, 0x35A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5ACu;
label_35a5ac:
    // 0x35a5ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35a5acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35a5b0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35A5B0u;
    SET_GPR_U32(ctx, 31, 0x35A5B8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35A5B0u, 0x35A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5B8u;
label_35a5b8:
    // 0x35a5b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a5bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35a5c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35a5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35a5c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35a5c8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35a5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a5cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35a5d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35a5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a5d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35a5d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35a5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a5dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35a5e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35a5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35a5e4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35a5e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a5e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35a5e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a5ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35a5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a5f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35a5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x35A5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A5FCu;
}
