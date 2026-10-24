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

// Function: entry_00301650
// Address: 0x301650 - 0x3017a0
void entry_00301650_0x301650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301650_0x301650");
#endif

    switch (ctx->pc) {
        case 0x301680u: goto label_301680;
        case 0x30172cu: goto label_30172c;
        case 0x30174cu: goto label_30174c;
        case 0x301774u: goto label_301774;
        default: break;
    }

    ctx->pc = 0x301650u;

    // 0x301650: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x301654: 0x244294d0  addiu       $v0, $v0, -0x6B30
    ctx->pc = 0x301654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x301658: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x301658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30165c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30165cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3994D0u));
    // 0x301660: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x301660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x301664: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x301664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301668: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x301668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x30166c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30166cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x301670: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x301670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x301674: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x301674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x301678: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x301678u;
    SET_GPR_U32(ctx, 31, 0x301680u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x301678u, 0x301680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301680u;
label_301680:
    // 0x301680: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x301680u;
    {
        const bool branch_taken_0x301680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301680) {
            ctx->pc = 0x3018C0u;
            return;
        }
    }
    ctx->pc = 0x301688u;
    // 0x301688: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30168c: 0x244294e0  addiu       $v0, $v0, -0x6B20
    ctx->pc = 0x30168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939872));
    // 0x301690: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x301690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x301694: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x301694u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3994E0u));
    // 0x301698: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x301698u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30169c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x30169cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3016a0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3016a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3016a4: 0x244292d0  addiu       $v0, $v0, -0x6D30
    ctx->pc = 0x3016a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
    // 0x3016a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3016a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3016ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3016acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3016b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3016b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3016b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3016b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3016b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3016b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3016bc: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x3016bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3016c0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3016c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3016c4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x3016c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3016c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3016c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3016cc: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x3016ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x3016d0: 0x402027  not         $a0, $v0
    ctx->pc = 0x3016d0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x3016d4: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x3016d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3016d8: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x3016d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3016dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3016dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3016e0: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x3016e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x3016e4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x3016e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3016e8: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x3016e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x3016ec: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x3016ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x3016f0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x3016f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3016f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3016f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3016f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3016f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3016fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3016fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x301700: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x301700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x301704: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x301704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x301708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x301708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30170c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x301710: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x301710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x301714: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x301714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x301718: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x301718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30171c: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x30171cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x301720: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x301720u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301724: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x301724u;
    SET_GPR_U32(ctx, 31, 0x30172Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x301724u, 0x30172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30172Cu;
label_30172c:
    // 0x30172c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x30172cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x301730: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x301734: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x301734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x301738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30173c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x30173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301740: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x301740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301744: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x301744u;
    SET_GPR_U32(ctx, 31, 0x30174Cu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x301744u, 0x30174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30174Cu;
label_30174c:
    // 0x30174c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30174cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x301750: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x301750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x301754: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x301754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x301758: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x301758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x30175c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x301760: 0xc42cdc94  lwc1        $f12, -0x236C($at)
    ctx->pc = 0x301760u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301764: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x301764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x301768: 0xc42dedb8  lwc1        $f13, -0x1248($at)
    ctx->pc = 0x301768u;
    { uint32_t bits = FAST_READ32(0x3EEDB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30176c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x30176Cu;
    SET_GPR_U32(ctx, 31, 0x301774u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x30176Cu, 0x301774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301774u;
label_301774:
    // 0x301774: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x301774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x301778: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x301778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30177c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30177cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301780: 0x0  nop
    ctx->pc = 0x301780u;
    // NOP
    // 0x301784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301788: 0x0  nop
    ctx->pc = 0x301788u;
    // NOP
    // 0x30178c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30178Cu;
    {
        const bool branch_taken_0x30178c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30178c) {
            ctx->pc = 0x3017A0u;
            return;
        }
    }
    ctx->pc = 0x301794u;
    // 0x301794: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x301794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301798: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x301798u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30179c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x30179cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    ctx->pc = 0x3017a0u;
}
