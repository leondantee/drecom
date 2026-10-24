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

// Function: entry_0014de98
// Address: 0x14de98 - 0x14df70
void entry_0014de98_0x14de98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014de98_0x14de98");
#endif

    switch (ctx->pc) {
        case 0x14df4cu: goto label_14df4c;
        default: break;
    }

    ctx->pc = 0x14de98u;

    // 0x14de98: 0x860213a8  lh          $v0, 0x13A8($s0)
    ctx->pc = 0x14de98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5032)));
    // 0x14de9c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x14de9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dea0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14dea0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14dea4: 0x860213aa  lh          $v0, 0x13AA($s0)
    ctx->pc = 0x14dea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5034)));
    // 0x14dea8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14deac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14deacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14deb0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14deb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14deb4: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14DEB4u;
    {
        const bool branch_taken_0x14deb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14deb4) {
            ctx->pc = 0x14DF70u;
            return;
        }
    }
    ctx->pc = 0x14DEBCu;
    // 0x14debc: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x14debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x14dec0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x14dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x14dec4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x14DEC4u;
    {
        const bool branch_taken_0x14dec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dec4) {
            ctx->pc = 0x14DF70u;
            return;
        }
    }
    ctx->pc = 0x14DECCu;
    // 0x14decc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14deccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ded0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14ded4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14ded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x14ded8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x14DED8u;
    {
        const bool branch_taken_0x14ded8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ded8) {
            ctx->pc = 0x14DF70u;
            return;
        }
    }
    ctx->pc = 0x14DEE0u;
    // 0x14dee0: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x14dee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x14dee4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dee8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14deec: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14DEECu;
    {
        const bool branch_taken_0x14deec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x14deec) {
            ctx->pc = 0x14DF70u;
            return;
        }
    }
    ctx->pc = 0x14DEF4u;
    // 0x14def4: 0xa60013a8  sh          $zero, 0x13A8($s0)
    ctx->pc = 0x14def4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5032), (uint16_t)GPR_U32(ctx, 0));
    // 0x14def8: 0x860313ae  lh          $v1, 0x13AE($s0)
    ctx->pc = 0x14def8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5038)));
    // 0x14defc: 0xa60313ac  sh          $v1, 0x13AC($s0)
    ctx->pc = 0x14defcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 3));
    // 0x14df00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14df00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14df04: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14df04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14df08: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x14df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x14df0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14df0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14df10: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14df10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14df14: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x14df14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x14df18: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14df18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14df1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14df1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14df20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x14df20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x14df24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14df24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14df28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14df2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14df30: 0x34440012  ori         $a0, $v0, 0x12
    ctx->pc = 0x14df30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x14df34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14df34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14df38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14df38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14df3c: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x14df3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x14df40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x14df40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14df44: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x14DF44u;
    SET_GPR_U32(ctx, 31, 0x14DF4Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x14DF44u, 0x14DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF4Cu;
label_14df4c:
    // 0x14df4c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x14df4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x14df50: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x14df50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x14df54: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x14df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x14df58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14df58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14df5c: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x14df5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    // 0x14df60: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x14df60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x14df64: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14df64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14df68: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x14DF68u;
    SET_GPR_U32(ctx, 31, 0x14DF70u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14DF68u, 0x14DF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF70u;
}
