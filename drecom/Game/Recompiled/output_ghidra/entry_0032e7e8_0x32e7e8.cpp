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

// Function: entry_0032e7e8
// Address: 0x32e7e8 - 0x32e8a0
void entry_0032e7e8_0x32e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e7e8_0x32e7e8");
#endif

    switch (ctx->pc) {
        case 0x32e850u: goto label_32e850;
        case 0x32e870u: goto label_32e870;
        default: break;
    }

    ctx->pc = 0x32e7e8u;

    // 0x32e7e8: 0x820265b0  lb          $v0, 0x65B0($s0)
    ctx->pc = 0x32e7e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26032)));
    // 0x32e7ec: 0xa20265b3  sb          $v0, 0x65B3($s0)
    ctx->pc = 0x32e7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26035), (uint8_t)GPR_U32(ctx, 2));
    // 0x32e7f0: 0x820265ae  lb          $v0, 0x65AE($s0)
    ctx->pc = 0x32e7f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26030)));
    // 0x32e7f4: 0xa20265b1  sb          $v0, 0x65B1($s0)
    ctx->pc = 0x32e7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26033), (uint8_t)GPR_U32(ctx, 2));
    // 0x32e7f8: 0x820265af  lb          $v0, 0x65AF($s0)
    ctx->pc = 0x32e7f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26031)));
    // 0x32e7fc: 0xa20265b2  sb          $v0, 0x65B2($s0)
    ctx->pc = 0x32e7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26034), (uint8_t)GPR_U32(ctx, 2));
    // 0x32e800: 0x820265ae  lb          $v0, 0x65AE($s0)
    ctx->pc = 0x32e800u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26030)));
    // 0x32e804: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e808: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e808u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e80c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e810: 0xac22ec10  sw          $v0, -0x13F0($at)
    ctx->pc = 0x32e810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x88EC10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88EC10u, _value); } while (0);
    // 0x32e814: 0x820265b0  lb          $v0, 0x65B0($s0)
    ctx->pc = 0x32e814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 26032)));
    // 0x32e818: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e81c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e81cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e820: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32e820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32e824: 0xac22ec18  sw          $v0, -0x13E8($at)
    ctx->pc = 0x32e824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x88EC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88EC18u, _value); } while (0);
    // 0x32e828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e82c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x32e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x32e830: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e834: 0xae020620  sw          $v0, 0x620($s0)
    ctx->pc = 0x32e834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 2));
    // 0x32e838: 0x24040097  addiu       $a0, $zero, 0x97
    ctx->pc = 0x32e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x32e83c: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x32e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x32e840: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32e840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32e844: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32e844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e848: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32E848u;
    SET_GPR_U32(ctx, 31, 0x32E850u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32E848u, 0x32E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E850u;
label_32e850:
    // 0x32e850: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e854: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x32e854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    // 0x32e858: 0x24040098  addiu       $a0, $zero, 0x98
    ctx->pc = 0x32e858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x32e85c: 0x26050520  addiu       $a1, $s0, 0x520
    ctx->pc = 0x32e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x32e860: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32e860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32e864: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x32e864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32e868: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32E868u;
    SET_GPR_U32(ctx, 31, 0x32E870u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32E868u, 0x32E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E870u;
label_32e870:
    // 0x32e870: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x32e874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32e874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32e878: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32e878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x32e87c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x32e87cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32e880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32e884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32e888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e894: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x32e894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32e898: 0x3e00008  jr          $ra
    ctx->pc = 0x32E898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E8A0u;
}
