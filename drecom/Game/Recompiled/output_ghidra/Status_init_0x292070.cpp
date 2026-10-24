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

// Function: Status_init
// Address: 0x292070 - 0x2921b0
void Status_init_0x292070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Status_init_0x292070");
#endif

    switch (ctx->pc) {
        case 0x2920d4u: goto label_2920d4;
        case 0x2920f4u: goto label_2920f4;
        case 0x292124u: goto label_292124;
        case 0x292150u: goto label_292150;
        case 0x292178u: goto label_292178;
        default: break;
    }

    ctx->pc = 0x292070u;

    // 0x292070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292074: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x292074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x292078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29207c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29207cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292080: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x292080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x292084: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x292084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x292088: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x292088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29208c: 0x9022efb8  lbu         $v0, -0x1048($at)
    ctx->pc = 0x29208cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEFB8u));
    // 0x292090: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x292090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x292094: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x292094u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x292098: 0xa2025de8  sb          $v0, 0x5DE8($s0)
    ctx->pc = 0x292098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24040), (uint8_t)GPR_U32(ctx, 2));
    // 0x29209c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29209cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2920a0: 0x9022ef66  lbu         $v0, -0x109A($at)
    ctx->pc = 0x2920a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEF66u));
    // 0x2920a4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2920a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2920a8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2920a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2920ac: 0xa2025de9  sb          $v0, 0x5DE9($s0)
    ctx->pc = 0x2920acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24041), (uint8_t)GPR_U32(ctx, 2));
    // 0x2920b0: 0xa2005dea  sb          $zero, 0x5DEA($s0)
    ctx->pc = 0x2920b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24042), (uint8_t)GPR_U32(ctx, 0));
    // 0x2920b4: 0xa2005deb  sb          $zero, 0x5DEB($s0)
    ctx->pc = 0x2920b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24043), (uint8_t)GPR_U32(ctx, 0));
    // 0x2920b8: 0xa2005dec  sb          $zero, 0x5DEC($s0)
    ctx->pc = 0x2920b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24044), (uint8_t)GPR_U32(ctx, 0));
    // 0x2920bc: 0xae006850  sw          $zero, 0x6850($s0)
    ctx->pc = 0x2920bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 0));
    // 0x2920c0: 0x260465c0  addiu       $a0, $s0, 0x65C0
    ctx->pc = 0x2920c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26048));
    // 0x2920c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2920c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2920c8: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x2920c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2920cc: 0xc046314  jal         func_118C50
    ctx->pc = 0x2920CCu;
    SET_GPR_U32(ctx, 31, 0x2920D4u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x2920D4u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2920D4u) { return; }
    ctx->pc = 0x2920D4u;
label_2920d4:
    // 0x2920d4: 0xa200663e  sb          $zero, 0x663E($s0)
    ctx->pc = 0x2920d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26174), (uint8_t)GPR_U32(ctx, 0));
    // 0x2920d8: 0xa200663f  sb          $zero, 0x663F($s0)
    ctx->pc = 0x2920d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26175), (uint8_t)GPR_U32(ctx, 0));
    // 0x2920dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2920dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2920e0: 0xa6026640  sh          $v0, 0x6640($s0)
    ctx->pc = 0x2920e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26176), (uint16_t)GPR_U32(ctx, 2));
    // 0x2920e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2920e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2920e8: 0xa202683e  sb          $v0, 0x683E($s0)
    ctx->pc = 0x2920e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26686), (uint8_t)GPR_U32(ctx, 2));
    // 0x2920ec: 0xc0ce0d8  jal         func_338360
    ctx->pc = 0x2920ECu;
    SET_GPR_U32(ctx, 31, 0x2920F4u);
    ctx->pc = 0x338360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338360u, 0x2920ECu, 0x2920F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920F4u;
label_2920f4:
    // 0x2920f4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2920f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2920f8: 0x2442c9e0  addiu       $v0, $v0, -0x3620
    ctx->pc = 0x2920f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953440));
    // 0x2920fc: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x2920fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x292100: 0xac22c9d0  sw          $v0, -0x3630($at)
    ctx->pc = 0x292100u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62C9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62C9D0u, _value); } while (0);
    // 0x292104: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x292104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x292108: 0x8c22c9d0  lw          $v0, -0x3630($at)
    ctx->pc = 0x292108u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x62C9D0u));
    // 0x29210c: 0xae026864  sw          $v0, 0x6864($s0)
    ctx->pc = 0x29210cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26724), GPR_U32(ctx, 2));
    // 0x292110: 0x8e056864  lw          $a1, 0x6864($s0)
    ctx->pc = 0x292110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26724)));
    // 0x292114: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x292114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x292118: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x292118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x29211c: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x29211Cu;
    SET_GPR_U32(ctx, 31, 0x292124u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x29211Cu, 0x292124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292124u;
label_292124:
    // 0x292124: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x292124u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x292128: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x292128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x29212c: 0x8c22c9d0  lw          $v0, -0x3630($at)
    ctx->pc = 0x29212cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x62C9D0u));
    // 0x292130: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x292130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x292134: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x292134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x292138: 0xac22c9d0  sw          $v0, -0x3630($at)
    ctx->pc = 0x292138u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62C9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62C9D0u, _value); } while (0);
    // 0x29213c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x29213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x292140: 0x2445c9d0  addiu       $a1, $v0, -0x3630
    ctx->pc = 0x292140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953424));
    // 0x292144: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x292144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x292148: 0xc068b9c  jal         func_1A2E70
    ctx->pc = 0x292148u;
    SET_GPR_U32(ctx, 31, 0x292150u);
    ctx->pc = 0x1A2E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2E70u, 0x292148u, 0x292150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292150u;
label_292150:
    // 0x292150: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x292150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x292154: 0x2442c9e0  addiu       $v0, $v0, -0x3620
    ctx->pc = 0x292154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953440));
    // 0x292158: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x292158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x29215c: 0x8e0265a0  lw          $v0, 0x65A0($s0)
    ctx->pc = 0x29215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x292160: 0xae026868  sw          $v0, 0x6868($s0)
    ctx->pc = 0x292160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26728), GPR_U32(ctx, 2));
    // 0x292164: 0x8e056868  lw          $a1, 0x6868($s0)
    ctx->pc = 0x292164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26728)));
    // 0x292168: 0x240400a2  addiu       $a0, $zero, 0xA2
    ctx->pc = 0x292168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x29216c: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x29216cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x292170: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x292170u;
    SET_GPR_U32(ctx, 31, 0x292178u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x292170u, 0x292178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292178u;
label_292178:
    // 0x292178: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x292178u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29217c: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x29217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x292180: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x292180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x292184: 0xae0365a0  sw          $v1, 0x65A0($s0)
    ctx->pc = 0x292184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 3));
    // 0x292188: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x292188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x29218c: 0xae03686c  sw          $v1, 0x686C($s0)
    ctx->pc = 0x29218cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26732), GPR_U32(ctx, 3));
    // 0x292190: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x292190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x292194: 0xae0365a4  sw          $v1, 0x65A4($s0)
    ctx->pc = 0x292194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26020), GPR_U32(ctx, 3));
    // 0x292198: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x292198u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29219c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29219cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2921a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2921a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2921a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2921a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2921a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2921A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2921A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2921B0u;
}
