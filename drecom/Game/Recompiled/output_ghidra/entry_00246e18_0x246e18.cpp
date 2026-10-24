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

// Function: entry_00246e18
// Address: 0x246e18 - 0x246eac
void entry_00246e18_0x246e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246e18_0x246e18");
#endif

    switch (ctx->pc) {
        case 0x246e68u: goto label_246e68;
        case 0x246e78u: goto label_246e78;
        case 0x246e88u: goto label_246e88;
        default: break;
    }

    ctx->pc = 0x246e18u;

    // 0x246e18: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x246e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246e1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x246e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x246e20: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x246e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x246e24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246e28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x246e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x246e2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x246e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x246e30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x246e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x246e34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x246e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x246e38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246e3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x246e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246e40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x246e44: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x246e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x246e48: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246e4c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x246e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x246e50: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x246e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x246e54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x246e54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246e58: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x246e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x246e5c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x246e5cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246e60: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x246E60u;
    SET_GPR_U32(ctx, 31, 0x246E68u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x246E60u, 0x246E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E68u;
label_246e68:
    // 0x246e68: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x246e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x246e6c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x246e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x246e70: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x246E70u;
    SET_GPR_U32(ctx, 31, 0x246E78u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x246E70u, 0x246E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E78u;
label_246e78:
    // 0x246e78: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x246e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x246e7c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x246e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x246e80: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x246E80u;
    SET_GPR_U32(ctx, 31, 0x246E88u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x246E80u, 0x246E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E88u;
label_246e88:
    // 0x246e88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x246e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x246e8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x246e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x246e90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x246e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246e94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246e98: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x246e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x246e9c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x246e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x246ea0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x246ea0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246ea4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x246EA4u;
    SET_GPR_U32(ctx, 31, 0x246EACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x246EA4u, 0x246EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EACu;
}
