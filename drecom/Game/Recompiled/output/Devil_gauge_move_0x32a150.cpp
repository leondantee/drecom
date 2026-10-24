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

// Function: Devil_gauge_move
// Address: 0x32a150 - 0x32a6f4
void Devil_gauge_move_0x32a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Devil_gauge_move_0x32a150");
#endif

    switch (ctx->pc) {
        case 0x32a260u: goto label_32a260;
        case 0x32a404u: goto label_32a404;
        case 0x32a55cu: goto label_32a55c;
        case 0x32a60cu: goto label_32a60c;
        case 0x32a640u: goto label_32a640;
        case 0x32a660u: goto label_32a660;
        default: break;
    }

    ctx->pc = 0x32a150u;

    // 0x32a150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32a154: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x32a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x32a158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32a15c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32a15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32a160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32a164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a16c: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32a170: 0x2470c2f0  addiu       $s0, $v1, -0x3D10
    ctx->pc = 0x32a170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951664));
    // 0x32a174: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x32a174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x32a178: 0x2473dbc0  addiu       $s3, $v1, -0x2440
    ctx->pc = 0x32a178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x32a17c: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x32a17cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32a180: 0x866313a8  lh          $v1, 0x13A8($s3)
    ctx->pc = 0x32a180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5032)));
    // 0x32a184: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x32a184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a188: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32a188u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32a18c: 0x866313aa  lh          $v1, 0x13AA($s3)
    ctx->pc = 0x32a18cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5034)));
    // 0x32a190: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a194: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a194u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a198: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x32a198u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32a19c: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x32a19cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x32a1a0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a1a4: 0x8c23a4e0  lw          $v1, -0x5B20($at)
    ctx->pc = 0x32a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A4E0u));
    // 0x32a1a8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x32a1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x32a1ac: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x32a1acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x32a1b0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x32a1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x32a1b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x32A1B4u;
    {
        const bool branch_taken_0x32a1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1b4) {
            ctx->pc = 0x32A1E0u;
            goto label_32a1e0;
        }
    }
    ctx->pc = 0x32A1BCu;
    // 0x32a1bc: 0x92032912  lbu         $v1, 0x2912($s0)
    ctx->pc = 0x32a1bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10514)));
    // 0x32a1c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32a1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a1c4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A1C4u;
    {
        const bool branch_taken_0x32a1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a1c4) {
            ctx->pc = 0x32A1E0u;
            goto label_32a1e0;
        }
    }
    ctx->pc = 0x32A1CCu;
    // 0x32a1cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a1d0: 0xa2032912  sb          $v1, 0x2912($s0)
    ctx->pc = 0x32a1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10514), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a1d4: 0xa6002914  sh          $zero, 0x2914($s0)
    ctx->pc = 0x32a1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10516), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a1d8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a1dc: 0xac20a4e0  sw          $zero, -0x5B20($at)
    ctx->pc = 0x32a1dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x39A4E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A4E0u, _value); } while (0);
label_32a1e0:
    // 0x32a1e0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a1e4: 0x8c23a4e0  lw          $v1, -0x5B20($at)
    ctx->pc = 0x32a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A4E0u));
    // 0x32a1e8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x32A1E8u;
    {
        const bool branch_taken_0x32a1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a1e8) {
            ctx->pc = 0x32A220u;
            goto label_32a220;
        }
    }
    ctx->pc = 0x32A1F0u;
    // 0x32a1f0: 0x866313a8  lh          $v1, 0x13A8($s3)
    ctx->pc = 0x32a1f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5032)));
    // 0x32a1f4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x32a1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a1f8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32a1f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32a1fc: 0x866313aa  lh          $v1, 0x13AA($s3)
    ctx->pc = 0x32a1fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5034)));
    // 0x32a200: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a204: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a204u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a208: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x32a208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32a20c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A20Cu;
    {
        const bool branch_taken_0x32a20c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a20c) {
            ctx->pc = 0x32A220u;
            goto label_32a220;
        }
    }
    ctx->pc = 0x32A214u;
    // 0x32a214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a218: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a21c: 0xac23a4e0  sw          $v1, -0x5B20($at)
    ctx->pc = 0x32a21cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A4E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A4E0u, _value); } while (0);
label_32a220:
    // 0x32a220: 0x92032912  lbu         $v1, 0x2912($s0)
    ctx->pc = 0x32a220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10514)));
    // 0x32a224: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a22c: 0x14c3000f  bne         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x32A22Cu;
    {
        const bool branch_taken_0x32a22c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a22c) {
            ctx->pc = 0x32A26Cu;
            goto label_32a26c;
        }
    }
    ctx->pc = 0x32A234u;
    // 0x32a234: 0x86032914  lh          $v1, 0x2914($s0)
    ctx->pc = 0x32a234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10516)));
    // 0x32a238: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a23c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a23cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a240: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A240u;
    {
        const bool branch_taken_0x32a240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a240) {
            ctx->pc = 0x32A260u;
            goto label_32a260;
        }
    }
    ctx->pc = 0x32A248u;
    // 0x32a248: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32a248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32a24c: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x32a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x32a250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32a250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32a254: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32a254u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32a258: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32A258u;
    SET_GPR_U32(ctx, 31, 0x32A260u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32A258u, 0x32A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A260u;
label_32a260:
    // 0x32a260: 0x86032914  lh          $v1, 0x2914($s0)
    ctx->pc = 0x32a260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10516)));
    // 0x32a264: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32a264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32a268: 0xa6032914  sh          $v1, 0x2914($s0)
    ctx->pc = 0x32a268u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10516), (uint16_t)GPR_U32(ctx, 3));
label_32a26c:
    // 0x32a26c: 0x86032914  lh          $v1, 0x2914($s0)
    ctx->pc = 0x32a26cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10516)));
    // 0x32a270: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a274: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a274u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a278: 0x28630166  slti        $v1, $v1, 0x166
    ctx->pc = 0x32a278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)358) ? 1 : 0);
    // 0x32a27c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32A27Cu;
    {
        const bool branch_taken_0x32a27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a27c) {
            ctx->pc = 0x32A288u;
            goto label_32a288;
        }
    }
    ctx->pc = 0x32A284u;
    // 0x32a284: 0xa2002912  sb          $zero, 0x2912($s0)
    ctx->pc = 0x32a284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10514), (uint8_t)GPR_U32(ctx, 0));
label_32a288:
    // 0x32a288: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x32a288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32a28c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a28cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a294: 0x14c30010  bne         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32A294u;
    {
        const bool branch_taken_0x32a294 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a294) {
            ctx->pc = 0x32A2D8u;
            goto label_32a2d8;
        }
    }
    ctx->pc = 0x32A29Cu;
    // 0x32a29c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a29cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32a2a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32a2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a2a4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x32A2A4u;
    {
        const bool branch_taken_0x32a2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a2a4) {
            ctx->pc = 0x32A2D0u;
            goto label_32a2d0;
        }
    }
    ctx->pc = 0x32A2ACu;
    // 0x32a2ac: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x32a2acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a2b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32a2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a2b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A2B4u;
    {
        const bool branch_taken_0x32a2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a2b4) {
            ctx->pc = 0x32A2C8u;
            goto label_32a2c8;
        }
    }
    ctx->pc = 0x32A2BCu;
    // 0x32a2bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a2c0: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x32a2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a2c4: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x32a2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
label_32a2c8:
    // 0x32a2c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a2cc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x32a2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_32a2d0:
    // 0x32a2d0: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x32a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x32a2d4: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x32a2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
label_32a2d8:
    // 0x32a2d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a2d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32a2dc: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a2dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a2e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a2e4: 0x14c3000b  bne         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x32A2E4u;
    {
        const bool branch_taken_0x32a2e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a2e4) {
            ctx->pc = 0x32A314u;
            goto label_32a314;
        }
    }
    ctx->pc = 0x32A2ECu;
    // 0x32a2ec: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x32a2ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32a2f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32a2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a2f4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A2F4u;
    {
        const bool branch_taken_0x32a2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a2f4) {
            ctx->pc = 0x32A314u;
            goto label_32a314;
        }
    }
    ctx->pc = 0x32A2FCu;
    // 0x32a2fc: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x32a2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a304: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x32a304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a308: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32a30c: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x32a30cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a310: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x32a310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_32a314:
    // 0x32a314: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x32a314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a318: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a31c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a320: 0x14c30023  bne         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x32A320u;
    {
        const bool branch_taken_0x32a320 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a320) {
            ctx->pc = 0x32A3B0u;
            goto label_32a3b0;
        }
    }
    ctx->pc = 0x32A328u;
    // 0x32a328: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32a32c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a32cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a334: 0x14c30011  bne         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x32A334u;
    {
        const bool branch_taken_0x32a334 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a334) {
            ctx->pc = 0x32A37Cu;
            goto label_32a37c;
        }
    }
    ctx->pc = 0x32A33Cu;
    // 0x32a33c: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x32a33cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x32a340: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x32a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32a344: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x32a344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a348: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x32a348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32a34c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a34cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a350: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x32a350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32a354: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x32A354u;
    {
        const bool branch_taken_0x32a354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a354) {
            ctx->pc = 0x32A3B0u;
            goto label_32a3b0;
        }
    }
    ctx->pc = 0x32A35Cu;
    // 0x32a35c: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x32a35cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x32a360: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a364: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a364u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a368: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x32a368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x32a36c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x32a36cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x32a370: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x32a370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a374: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32A374u;
    {
        const bool branch_taken_0x32a374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a374) {
            ctx->pc = 0x32A3B0u;
            goto label_32a3b0;
        }
    }
    ctx->pc = 0x32A37Cu;
label_32a37c:
    // 0x32a37c: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x32a37cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x32a380: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x32a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x32a384: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x32a384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a388: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x32a388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32a38c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a38cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a390: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A390u;
    {
        const bool branch_taken_0x32a390 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x32a390) {
            ctx->pc = 0x32A3B0u;
            goto label_32a3b0;
        }
    }
    ctx->pc = 0x32A398u;
    // 0x32a398: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x32a398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x32a39c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a3a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a3a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a3a4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x32a3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x32a3a8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x32a3a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x32a3ac: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x32a3acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_32a3b0:
    // 0x32a3b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a3b4: 0x8c261a3c  lw          $a2, 0x1A3C($at)
    ctx->pc = 0x32a3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32a3b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32a3bc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x32a3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x32a3c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A3C0u;
    {
        const bool branch_taken_0x32a3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a3c0) {
            ctx->pc = 0x32A3D0u;
            goto label_32a3d0;
        }
    }
    ctx->pc = 0x32A3C8u;
    // 0x32a3c8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x32a3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a3cc: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x32a3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_32a3d0:
    // 0x32a3d0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32a3d4: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a3d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a3dc: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A3DCu;
    {
        const bool branch_taken_0x32a3dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a3dc) {
            ctx->pc = 0x32A3F8u;
            goto label_32a3f8;
        }
    }
    ctx->pc = 0x32A3E4u;
    // 0x32a3e4: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x32a3e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a3e8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a3e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a3ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a3f0: 0x14c300b7  bne         $a2, $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x32A3F0u;
    {
        const bool branch_taken_0x32a3f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a3f0) {
            ctx->pc = 0x32A6D0u;
            goto label_32a6d0;
        }
    }
    ctx->pc = 0x32A3F8u;
label_32a3f8:
    // 0x32a3f8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x32a3f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32a3fc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x32A3FCu;
    {
        const bool branch_taken_0x32a3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a3fc) {
            ctx->pc = 0x32A4E8u;
            goto label_32a4e8;
        }
    }
    ctx->pc = 0x32A404u;
label_32a404:
    // 0x32a404: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32a404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32a408: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x32a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32a40c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a410: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a414: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x32a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x32a418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a41c: 0x0  nop
    ctx->pc = 0x32a41cu;
    // NOP
    // 0x32a420: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a424: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a428: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a42c: 0xe4400420  swc1        $f0, 0x420($v0)
    ctx->pc = 0x32a42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1056), bits); }
    // 0x32a430: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x32a430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x32a434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a438: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a43c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a440: 0xe4400424  swc1        $f0, 0x424($v0)
    ctx->pc = 0x32a440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1060), bits); }
    // 0x32a444: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32a444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32a448: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x32a448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32a44c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a450: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a454: 0x24420039  addiu       $v0, $v0, 0x39
    ctx->pc = 0x32a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 57));
    // 0x32a458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a45c: 0x0  nop
    ctx->pc = 0x32a45cu;
    // NOP
    // 0x32a460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a464: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a468: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a46c: 0xe4400428  swc1        $f0, 0x428($v0)
    ctx->pc = 0x32a46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1064), bits); }
    // 0x32a470: 0x3c024286  lui         $v0, 0x4286
    ctx->pc = 0x32a470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17030 << 16));
    // 0x32a474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a478: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a47c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a480: 0xe440042c  swc1        $f0, 0x42C($v0)
    ctx->pc = 0x32a480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1068), bits); }
    // 0x32a484: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x32a484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a488: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32a488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a48c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32a490: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32a490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32a494: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32a494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32a498: 0x2442a310  addiu       $v0, $v0, -0x5CF0
    ctx->pc = 0x32a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943504));
    // 0x32a49c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x32a49cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32a4a0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a4a4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a4a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a4ac: 0xe4400c20  swc1        $f0, 0xC20($v0)
    ctx->pc = 0x32a4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3104), bits); }
    // 0x32a4b0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32a4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a4b4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a4b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a4bc: 0xe4400c24  swc1        $f0, 0xC24($v0)
    ctx->pc = 0x32a4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3108), bits); }
    // 0x32a4c0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a4c4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a4c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a4cc: 0xe4400c28  swc1        $f0, 0xC28($v0)
    ctx->pc = 0x32a4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3112), bits); }
    // 0x32a4d0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x32a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a4d4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a4d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a4dc: 0xe4400c2c  swc1        $f0, 0xC2C($v0)
    ctx->pc = 0x32a4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3116), bits); }
    // 0x32a4e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a4e4: 0x0  nop
    ctx->pc = 0x32a4e4u;
    // NOP
label_32a4e8:
    // 0x32a4e8: 0x82022820  lb          $v0, 0x2820($s0)
    ctx->pc = 0x32a4e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a4ec: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32a4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32a4f0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32a4f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32a4f4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x32a4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32a4f8: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x32A4F8u;
    {
        const bool branch_taken_0x32a4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a4f8) {
            ctx->pc = 0x32A404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a404;
        }
    }
    ctx->pc = 0x32A500u;
    // 0x32a500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a504: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x32a504u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32a508: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x32a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x32a50c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x32A50Cu;
    {
        const bool branch_taken_0x32a50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a50c) {
            ctx->pc = 0x32A58Cu;
            goto label_32a58c;
        }
    }
    ctx->pc = 0x32A514u;
    // 0x32a514: 0x866213ac  lh          $v0, 0x13AC($s3)
    ctx->pc = 0x32a514u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5036)));
    // 0x32a518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a51c: 0x0  nop
    ctx->pc = 0x32a51cu;
    // NOP
    // 0x32a520: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32a520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a524: 0x866213ae  lh          $v0, 0x13AE($s3)
    ctx->pc = 0x32a524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5038)));
    // 0x32a528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a52c: 0x0  nop
    ctx->pc = 0x32a52cu;
    // NOP
    // 0x32a530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a534: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32a534u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32a538: 0x82022820  lb          $v0, 0x2820($s0)
    ctx->pc = 0x32a538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a540: 0x0  nop
    ctx->pc = 0x32a540u;
    // NOP
    // 0x32a544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a548: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32a548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a54c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x32a54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x32a550: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x32a550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32a554: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32A554u;
    SET_GPR_U32(ctx, 31, 0x32A55Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32A554u, 0x32A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A55Cu;
label_32a55c:
    // 0x32a55c: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x32a55cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a560: 0x82032820  lb          $v1, 0x2820($s0)
    ctx->pc = 0x32a560u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a564: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32a564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32a568: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32a568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32a56c: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x32a56cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32a570: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x32A570u;
    {
        const bool branch_taken_0x32a570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a570) {
            ctx->pc = 0x32A634u;
            goto label_32a634;
        }
    }
    ctx->pc = 0x32A578u;
    // 0x32a578: 0x82032820  lb          $v1, 0x2820($s0)
    ctx->pc = 0x32a578u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a57c: 0x3a63c  dsll32      $s4, $v1, 24
    ctx->pc = 0x32a57cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32a580: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x32a580u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x32a584: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x32A584u;
    {
        const bool branch_taken_0x32a584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a584) {
            ctx->pc = 0x32A634u;
            goto label_32a634;
        }
    }
    ctx->pc = 0x32A58Cu;
label_32a58c:
    // 0x32a58c: 0x866213a8  lh          $v0, 0x13A8($s3)
    ctx->pc = 0x32a58cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5032)));
    // 0x32a590: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32a590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32a594: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32a598: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32A598u;
    {
        const bool branch_taken_0x32a598 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32a598) {
            ctx->pc = 0x32A5F4u;
            goto label_32a5f4;
        }
    }
    ctx->pc = 0x32A5A0u;
    // 0x32a5a0: 0x866213a8  lh          $v0, 0x13A8($s3)
    ctx->pc = 0x32a5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5032)));
    // 0x32a5a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32a5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32a5a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a5a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32a5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a5b0: 0x0  nop
    ctx->pc = 0x32a5b0u;
    // NOP
    // 0x32a5b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32a5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a5b8: 0x866213aa  lh          $v0, 0x13AA($s3)
    ctx->pc = 0x32a5b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5034)));
    // 0x32a5bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32a5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32a5c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a5c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32a5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a5c8: 0x0  nop
    ctx->pc = 0x32a5c8u;
    // NOP
    // 0x32a5cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a5ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a5d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32a5d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32a5d4: 0x82022820  lb          $v0, 0x2820($s0)
    ctx->pc = 0x32a5d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a5dc: 0x0  nop
    ctx->pc = 0x32a5dcu;
    // NOP
    // 0x32a5e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a5e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a5e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32a5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a5e8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x32a5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x32a5ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32A5ECu;
    {
        const bool branch_taken_0x32a5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a5ec) {
            ctx->pc = 0x32A600u;
            goto label_32a600;
        }
    }
    ctx->pc = 0x32A5F4u;
label_32a5f4:
    // 0x32a5f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32a5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a5f8: 0x0  nop
    ctx->pc = 0x32a5f8u;
    // NOP
    // 0x32a5fc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x32a5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_32a600:
    // 0x32a600: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x32a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32a604: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32A604u;
    SET_GPR_U32(ctx, 31, 0x32A60Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32A604u, 0x32A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A60Cu;
label_32a60c:
    // 0x32a60c: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x32a60cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a610: 0x82032820  lb          $v1, 0x2820($s0)
    ctx->pc = 0x32a610u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a614: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32a614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32a618: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32a618u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32a61c: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x32a61cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32a620: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A620u;
    {
        const bool branch_taken_0x32a620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a620) {
            ctx->pc = 0x32A634u;
            goto label_32a634;
        }
    }
    ctx->pc = 0x32A628u;
    // 0x32a628: 0x82032820  lb          $v1, 0x2820($s0)
    ctx->pc = 0x32a628u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a62c: 0x3a63c  dsll32      $s4, $v1, 24
    ctx->pc = 0x32a62cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32a630: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x32a630u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
label_32a634:
    // 0x32a634: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x32a634u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32a638: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x32A638u;
    {
        const bool branch_taken_0x32a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a638) {
            ctx->pc = 0x32A6C0u;
            goto label_32a6c0;
        }
    }
    ctx->pc = 0x32A640u;
label_32a640:
    // 0x32a640: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a644: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x32a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a648: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a64c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a650: 0x24641420  addiu       $a0, $v1, 0x1420
    ctx->pc = 0x32a650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
    // 0x32a654: 0x24450420  addiu       $a1, $v0, 0x420
    ctx->pc = 0x32a654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
    // 0x32a658: 0xc040c9e  jal         func_103278
    ctx->pc = 0x32A658u;
    SET_GPR_U32(ctx, 31, 0x32A660u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x32A660u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32A660u) { return; }
    ctx->pc = 0x32A660u;
label_32a660:
    // 0x32a660: 0x2624000b  addiu       $a0, $s1, 0xB
    ctx->pc = 0x32a660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x32a664: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32a664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32a668: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32a668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32a66c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x32a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a670: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32a670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32a674: 0x2463a310  addiu       $v1, $v1, -0x5CF0
    ctx->pc = 0x32a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
    // 0x32a678: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x32a678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32a67c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a680: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a684: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a688: 0xe4601c20  swc1        $f0, 0x1C20($v1)
    ctx->pc = 0x32a688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7200), bits); }
    // 0x32a68c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a690: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a694: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a698: 0xe4601c24  swc1        $f0, 0x1C24($v1)
    ctx->pc = 0x32a698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7204), bits); }
    // 0x32a69c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32a69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a6a0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a6a4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a6a8: 0xe4601c28  swc1        $f0, 0x1C28($v1)
    ctx->pc = 0x32a6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7208), bits); }
    // 0x32a6ac: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x32a6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a6b0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a6b4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a6b8: 0xe4601c2c  swc1        $f0, 0x1C2C($v1)
    ctx->pc = 0x32a6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7212), bits); }
    // 0x32a6bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32a6c0:
    // 0x32a6c0: 0x234182a  slt         $v1, $s1, $s4
    ctx->pc = 0x32a6c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32a6c4: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x32A6C4u;
    {
        const bool branch_taken_0x32a6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a6c4) {
            ctx->pc = 0x32A640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a640;
        }
    }
    ctx->pc = 0x32A6CCu;
    // 0x32a6cc: 0x0  nop
    ctx->pc = 0x32a6ccu;
    // NOP
label_32a6d0:
    // 0x32a6d0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x32a6d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32a6d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32a6d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32a6d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32a6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32a6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32a6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a6e8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x32a6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x32a6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x32A6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A6F4u;
}
