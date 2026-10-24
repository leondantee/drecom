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

// Function: caseD_5
// Address: 0x36a59c - 0x36a610
void caseD_5_0x36a59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x36a59c");
#endif

    switch (ctx->pc) {
        case 0x36a5acu: goto label_36a5ac;
        case 0x36a5b8u: goto label_36a5b8;
        case 0x36a5ccu: goto label_36a5cc;
        case 0x36a5d8u: goto label_36a5d8;
        case 0x36a5f8u: goto label_36a5f8;
        default: break;
    }

    ctx->pc = 0x36a59cu;

    // 0x36a59c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a5a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a5a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a5a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36A5A4u;
    SET_GPR_U32(ctx, 31, 0x36A5ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A5A4u, 0x36A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5ACu;
label_36a5ac:
    // 0x36a5ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a5b0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36A5B0u;
    SET_GPR_U32(ctx, 31, 0x36A5B8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A5B0u, 0x36A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5B8u;
label_36a5b8:
    // 0x36a5b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a5b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36a5bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a5c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a5c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a5c4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36A5C4u;
    SET_GPR_U32(ctx, 31, 0x36A5CCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A5C4u, 0x36A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5CCu;
label_36a5cc:
    // 0x36a5cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a5ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a5d0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36A5D0u;
    SET_GPR_U32(ctx, 31, 0x36A5D8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A5D0u, 0x36A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5D8u;
label_36a5d8:
    // 0x36a5d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a5dc: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x36a5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x36a5e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36a5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36a5e4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x36a5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x36a5e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A5E8u;
    {
        const bool branch_taken_0x36a5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a5e8) {
            ctx->pc = 0x36A610u;
            return;
        }
    }
    ctx->pc = 0x36A5F0u;
    // 0x36a5f0: 0xc0585dc  jal         func_161770
    ctx->pc = 0x36A5F0u;
    SET_GPR_U32(ctx, 31, 0x36A5F8u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x36A5F0u, 0x36A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5F8u;
label_36a5f8:
    // 0x36a5f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36A5F8u;
    {
        const bool branch_taken_0x36a5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a5f8) {
            ctx->pc = 0x36A610u;
            return;
        }
    }
    ctx->pc = 0x36A600u;
    // 0x36a600: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a604: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x36a604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a608: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x36A608u;
    {
        const bool branch_taken_0x36a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a608) {
            ctx->pc = 0x36A720u;
            return;
        }
    }
    ctx->pc = 0x36A610u;
}
