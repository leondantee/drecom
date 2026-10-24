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

// Function: entry_0030b740
// Address: 0x30b740 - 0x30b8f0
void entry_0030b740_0x30b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b740_0x30b740");
#endif

    switch (ctx->pc) {
        case 0x30b770u: goto label_30b770;
        case 0x30b7f8u: goto label_30b7f8;
        case 0x30b840u: goto label_30b840;
        case 0x30b89cu: goto label_30b89c;
        case 0x30b8e4u: goto label_30b8e4;
        default: break;
    }

    ctx->pc = 0x30b740u;

    // 0x30b740: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b744: 0x244298e0  addiu       $v0, $v0, -0x6720
    ctx->pc = 0x30b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940896));
    // 0x30b748: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x30b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b74c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30b74cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3998E0u));
    // 0x30b750: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30b750u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30b754: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x30b754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b758: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b758u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30b75c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30b75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b760: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30b760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30b764: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30b764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30b768: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30B768u;
    SET_GPR_U32(ctx, 31, 0x30B770u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30B768u, 0x30B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B770u;
label_30b770:
    // 0x30b770: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x30B770u;
    {
        const bool branch_taken_0x30b770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b770) {
            ctx->pc = 0x30B8F0u;
            return;
        }
    }
    ctx->pc = 0x30B778u;
    // 0x30b778: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b77c: 0x244298f0  addiu       $v0, $v0, -0x6710
    ctx->pc = 0x30b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940912));
    // 0x30b780: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x30b780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30b784: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30b784u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3998F0u));
    // 0x30b788: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30b788u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30b78c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30b790: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b794: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x30b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x30b798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b79c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b7a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30b7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b7a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b7ac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x30b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b7b0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30b7b4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x30b7b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b7b8: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x30b7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b7bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b7c0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x30b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x30b7c4: 0x402027  not         $a0, $v0
    ctx->pc = 0x30b7c4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x30b7c8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b7cc: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30b7d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x30b7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30b7d4: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30b7d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30b7dc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b7e0: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30b7e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b7e8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x30b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b7ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30b7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b7f0: 0xc0c45a8  jal         func_3116A0
    ctx->pc = 0x30B7F0u;
    SET_GPR_U32(ctx, 31, 0x30B7F8u);
    ctx->pc = 0x3116A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3116A0u, 0x30B7F0u, 0x30B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B7F8u;
label_30b7f8:
    // 0x30b7f8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30b7fc: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x30b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x30b800: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30b800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b804: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30b808: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30b80c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30b80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30b810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b814: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30b814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b81c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x30b81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x30b820: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30b820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30b824: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30b824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30b828: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30b828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b82c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30b830: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x30b830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x30b834: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30b834u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b838: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30B838u;
    SET_GPR_U32(ctx, 31, 0x30B840u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30B838u, 0x30B840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B840u;
label_30b840:
    // 0x30b840: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x30b840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x30b844: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30b844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30b848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b84c: 0x0  nop
    ctx->pc = 0x30b84cu;
    // NOP
    // 0x30b850: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x30b850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x30b854: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30b854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30b858: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x30b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x30b85c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30b85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b860: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30b864: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30b864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30b868: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30b868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30b86c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b870: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30b870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b878: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x30b878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x30b87c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30b87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30b880: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30b880u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30b884: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30b884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b888: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30b888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30b88c: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x30b88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x30b890: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30b890u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b894: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30B894u;
    SET_GPR_U32(ctx, 31, 0x30B89Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30B894u, 0x30B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B89Cu;
label_30b89c:
    // 0x30b89c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x30b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x30b8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b8a4: 0x0  nop
    ctx->pc = 0x30b8a4u;
    // NOP
    // 0x30b8a8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x30b8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x30b8ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30b8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30b8b0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30b8b4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x30b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x30b8b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30b8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b8bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30b8c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30b8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30b8c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30b8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30b8c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b8cc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30b8ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b8d0: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x30b8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x30b8d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30b8d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b8d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30b8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b8dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30B8DCu;
    SET_GPR_U32(ctx, 31, 0x30B8E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30B8DCu, 0x30B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B8E4u;
label_30b8e4:
    // 0x30b8e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30b8e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30b8e8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30B8E8u;
    SET_GPR_U32(ctx, 31, 0x30B8F0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30B8E8u, 0x30B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B8F0u;
}
