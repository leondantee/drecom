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

// Function: entry_00203354
// Address: 0x203354 - 0x2033a0
void entry_00203354_0x203354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203354_0x203354");
#endif

    switch (ctx->pc) {
        case 0x20339cu: goto label_20339c;
        default: break;
    }

    ctx->pc = 0x203354u;

    // 0x203354: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203358: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x203358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB0u));
    // 0x20335c: 0x24620013  addiu       $v0, $v1, 0x13
    ctx->pc = 0x20335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x203360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x203360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x203364: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x203364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x203368: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x203368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x20336c: 0x34640808  ori         $a0, $v1, 0x808
    ctx->pc = 0x20336cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
    // 0x203370: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x203370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x203374: 0x3c051d07  lui         $a1, 0x1D07
    ctx->pc = 0x203374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7431 << 16));
    // 0x203378: 0x34a32800  ori         $v1, $a1, 0x2800
    ctx->pc = 0x203378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10240);
    // 0x20337c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20337cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x203380: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x203380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x203384: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x203384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x203388: 0x24450dc0  addiu       $a1, $v0, 0xDC0
    ctx->pc = 0x203388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3520));
    // 0x20338c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20338cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203390: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x203390u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203394: 0xc059b14  jal         func_166C50
    ctx->pc = 0x203394u;
    SET_GPR_U32(ctx, 31, 0x20339Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x203394u, 0x20339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20339Cu;
label_20339c:
    // 0x20339c: 0x0  nop
    ctx->pc = 0x20339cu;
    // NOP
    ctx->pc = 0x2033a0u;
}
