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

// Function: entry_0022afec
// Address: 0x22afec - 0x22b080
void entry_0022afec_0x22afec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022afec_0x22afec");
#endif

    switch (ctx->pc) {
        case 0x22b03cu: goto label_22b03c;
        case 0x22b04cu: goto label_22b04c;
        case 0x22b05cu: goto label_22b05c;
        default: break;
    }

    ctx->pc = 0x22afecu;

    // 0x22afec: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22aff0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22aff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22aff4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22aff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22aff8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22affc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x22affcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b000: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x22b000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x22b004: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x22b004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22b008: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x22b008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x22b00c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x22b00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22b010: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x22b010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x22b014: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x22b014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x22b018: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22b018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22b01c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b020: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22b024: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22b024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22b028: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b028u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b02c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22b02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b030: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22b030u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b034: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22B034u;
    SET_GPR_U32(ctx, 31, 0x22B03Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22B034u, 0x22B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B03Cu;
label_22b03c:
    // 0x22b03c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22b040: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22b040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x22b044: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B044u;
    SET_GPR_U32(ctx, 31, 0x22B04Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B044u, 0x22B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B04Cu;
label_22b04c:
    // 0x22b04c: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22b050: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x22b050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x22b054: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B054u;
    SET_GPR_U32(ctx, 31, 0x22B05Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B054u, 0x22B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B05Cu;
label_22b05c:
    // 0x22b05c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b060: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22b064: 0x34474000  ori         $a3, $v0, 0x4000
    ctx->pc = 0x22b064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22b068: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x22b068u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b06c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22b070: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x22b070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22b074: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b074u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b078: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22B078u;
    SET_GPR_U32(ctx, 31, 0x22B080u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22B078u, 0x22B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B080u;
}
