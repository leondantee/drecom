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

// Function: StrM2vCallBack
// Address: 0x35c8a0 - 0x35ca00
void StrM2vCallBack_0x35c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StrM2vCallBack_0x35c8a0");
#endif

    switch (ctx->pc) {
        case 0x35c928u: goto label_35c928;
        case 0x35c940u: goto label_35c940;
        case 0x35c970u: goto label_35c970;
        case 0x35c9d8u: goto label_35c9d8;
        default: break;
    }

    ctx->pc = 0x35c8a0u;

    // 0x35c8a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35c8a4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x35c8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x35c8a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35c8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35c8ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35c8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35c8b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35c8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35c8b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35c8bc: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x35c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x35c8c0: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x35c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x35c8c4: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x35c8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x35c8c8: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x35c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35c8cc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x35c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x35c8d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35c8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35c8d4: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x35c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x35c8d8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x35c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35c8dc: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x35c8dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35c8e0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x35c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35c8e4: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x35c8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35c8e8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35c8ec: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x35c8ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35c8f0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35c8f4: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x35c8f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x35c8f8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x35C8F8u;
    {
        const bool branch_taken_0x35c8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c8f8) {
            ctx->pc = 0x35C954u;
            goto label_35c954;
        }
    }
    ctx->pc = 0x35C900u;
    // 0x35c900: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x35c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35c904: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35c908: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x35c908u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c90c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x35c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35c910: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35c914: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35c914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c918: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x35c918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x35c91c: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x35c91cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x35c920: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35C920u;
    SET_GPR_U32(ctx, 31, 0x35C928u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35C928u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C928u) { return; }
    ctx->pc = 0x35C928u;
label_35c928:
    // 0x35c928: 0x2542821  addu        $a1, $s2, $s4
    ctx->pc = 0x35c928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x35c92c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35c930: 0x2623023  subu        $a2, $s3, $v0
    ctx->pc = 0x35c930u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35c934: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x35c934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35c938: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35C938u;
    SET_GPR_U32(ctx, 31, 0x35C940u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35C940u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C940u) { return; }
    ctx->pc = 0x35C940u;
label_35c940:
    // 0x35c940: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35c944: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x35c944u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35c948: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x35c948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x35c94c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35C94Cu;
    {
        const bool branch_taken_0x35c94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c94c) {
            ctx->pc = 0x35C97Cu;
            goto label_35c97c;
        }
    }
    ctx->pc = 0x35C954u;
label_35c954:
    // 0x35c954: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x35c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35c958: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35c95c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c960: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x35c960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x35c964: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x35c964u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35c968: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35C968u;
    SET_GPR_U32(ctx, 31, 0x35C970u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35C970u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C970u) { return; }
    ctx->pc = 0x35C970u;
label_35c970:
    // 0x35c970: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35c974: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35c978: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x35c978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_35c97c:
    // 0x35c97c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x35c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35c980: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35c984: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x35c984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x35c988: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x35c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35c98c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35c990: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x35C990u;
    {
        const bool branch_taken_0x35c990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c990) {
            ctx->pc = 0x35C9D8u;
            goto label_35c9d8;
        }
    }
    ctx->pc = 0x35C998u;
    // 0x35c998: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x35c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35c99c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x35c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x35c9a0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x35c9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x35c9a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35c9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35c9a8: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x35c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x35c9ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35c9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35c9b0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x35c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x35c9b4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x35c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x35c9b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35c9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35c9bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35c9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35c9c0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x35c9c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x35c9c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c9c8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35c9cc: 0x2445e180  addiu       $a1, $v0, -0x1E80
    ctx->pc = 0x35c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
    // 0x35c9d0: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x35C9D0u;
    SET_GPR_U32(ctx, 31, 0x35C9D8u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x35C9D0u, 0x35C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C9D8u;
label_35c9d8:
    // 0x35c9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c9dc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x35c9dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35c9e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35c9e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35c9e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35c9e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c9e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35c9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c9ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c9f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c9f4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x35c9f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35c9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x35C9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CA00u;
}
