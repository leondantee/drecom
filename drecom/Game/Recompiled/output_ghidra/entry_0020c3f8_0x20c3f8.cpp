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

// Function: entry_0020c3f8
// Address: 0x20c3f8 - 0x20c460
void entry_0020c3f8_0x20c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c3f8_0x20c3f8");
#endif

    switch (ctx->pc) {
        case 0x20c408u: goto label_20c408;
        case 0x20c440u: goto label_20c440;
        case 0x20c450u: goto label_20c450;
        default: break;
    }

    ctx->pc = 0x20c3f8u;

    // 0x20c3f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c3fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20c3fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c400: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20C400u;
    SET_GPR_U32(ctx, 31, 0x20C408u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20C400u, 0x20C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C408u;
label_20c408:
    // 0x20c408: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c40c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x20c40cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20c410: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x20C410u;
    {
        const bool branch_taken_0x20c410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c410) {
            ctx->pc = 0x20C5F0u;
            return;
        }
    }
    ctx->pc = 0x20C418u;
    // 0x20c418: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c41c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c41cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c424: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20c424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20c428: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20C428u;
    {
        const bool branch_taken_0x20c428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c428) {
            ctx->pc = 0x20C460u;
            return;
        }
    }
    ctx->pc = 0x20C430u;
    // 0x20c430: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x20c430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20c434: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20c434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c438: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20C438u;
    SET_GPR_U32(ctx, 31, 0x20C440u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20C438u, 0x20C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C440u;
label_20c440:
    // 0x20c440: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20c440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20c444: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20c444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20c448: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20C448u;
    SET_GPR_U32(ctx, 31, 0x20C450u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20C448u, 0x20C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C450u;
label_20c450:
    // 0x20c450: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x20c450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x20c454: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20c454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20c458: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20C458u;
    SET_GPR_U32(ctx, 31, 0x20C460u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20C458u, 0x20C460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C460u;
}
