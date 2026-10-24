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

// Function: entry_002276ac
// Address: 0x2276ac - 0x227740
void entry_002276ac_0x2276ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002276ac_0x2276ac");
#endif

    switch (ctx->pc) {
        case 0x2276fcu: goto label_2276fc;
        case 0x22770cu: goto label_22770c;
        case 0x22771cu: goto label_22771c;
        default: break;
    }

    ctx->pc = 0x2276acu;

    // 0x2276ac: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2276acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2276b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2276b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2276b4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2276b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2276b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2276b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2276bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2276bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2276c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2276c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2276c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2276c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2276c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2276c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2276cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2276ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2276d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2276d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2276d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2276d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2276d8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x2276d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2276dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2276dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2276e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2276e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2276e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2276e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2276e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2276e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2276ec: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x2276ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x2276f0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2276f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2276f4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2276F4u;
    SET_GPR_U32(ctx, 31, 0x2276FCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2276F4u, 0x2276FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2276FCu;
label_2276fc:
    // 0x2276fc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2276fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x227700: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x227700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x227704: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x227704u;
    SET_GPR_U32(ctx, 31, 0x22770Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x227704u, 0x22770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22770Cu;
label_22770c:
    // 0x22770c: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22770cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x227710: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x227710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x227714: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x227714u;
    SET_GPR_U32(ctx, 31, 0x22771Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x227714u, 0x22771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22771Cu;
label_22771c:
    // 0x22771c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227720: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x227720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x227724: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x227724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x227728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x227728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22772c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22772cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x227730: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x227730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x227734: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x227734u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227738: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x227738u;
    SET_GPR_U32(ctx, 31, 0x227740u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x227738u, 0x227740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227740u;
}
