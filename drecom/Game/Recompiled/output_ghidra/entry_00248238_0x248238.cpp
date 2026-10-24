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

// Function: entry_00248238
// Address: 0x248238 - 0x2482cc
void entry_00248238_0x248238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248238_0x248238");
#endif

    switch (ctx->pc) {
        case 0x248288u: goto label_248288;
        case 0x248298u: goto label_248298;
        case 0x2482a8u: goto label_2482a8;
        default: break;
    }

    ctx->pc = 0x248238u;

    // 0x248238: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x248238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24823c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24823cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x248240: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x248240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x248244: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248248: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x248248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24824c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x248250: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x248250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x248254: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x248254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x248258: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x248258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24825c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x248260: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x248260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x248264: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x248264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x248268: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24826c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x24826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x248270: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x248270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x248274: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x248274u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x248278: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x248278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x24827c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x24827cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x248280: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x248280u;
    SET_GPR_U32(ctx, 31, 0x248288u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x248280u, 0x248288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248288u;
label_248288:
    // 0x248288: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x248288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x24828c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x24828cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x248290: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x248290u;
    SET_GPR_U32(ctx, 31, 0x248298u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x248290u, 0x248298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248298u;
label_248298:
    // 0x248298: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x248298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x24829c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x24829cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x2482a0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2482A0u;
    SET_GPR_U32(ctx, 31, 0x2482A8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2482A0u, 0x2482A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482A8u;
label_2482a8:
    // 0x2482a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2482a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2482ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2482acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2482b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2482b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2482b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2482b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2482b8: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x2482b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x2482bc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2482bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2482c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2482c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2482c4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2482C4u;
    SET_GPR_U32(ctx, 31, 0x2482CCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2482C4u, 0x2482CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482CCu;
}
