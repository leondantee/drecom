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

// Function: entry_0027c674
// Address: 0x27c674 - 0x27c73c
void entry_0027c674_0x27c674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c674_0x27c674");
#endif

    switch (ctx->pc) {
        case 0x27c6c8u: goto label_27c6c8;
        case 0x27c6d8u: goto label_27c6d8;
        case 0x27c6ecu: goto label_27c6ec;
        case 0x27c6f8u: goto label_27c6f8;
        case 0x27c708u: goto label_27c708;
        case 0x27c71cu: goto label_27c71c;
        default: break;
    }

    ctx->pc = 0x27c674u;

    // 0x27c674: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c678: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c67c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x27c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x27c680: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27c680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27c684: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27c688: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c68c: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c68cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c690: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c694: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c694u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c698: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x27c698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x27c69c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27c69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27c6a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27c6a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c6a8: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c6a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c6ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27c6b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27c6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c6b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27c6b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c6b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27c6b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c6bc: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x27c6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27c6c0: 0xc0561d4  jal         func_158750
    ctx->pc = 0x27C6C0u;
    SET_GPR_U32(ctx, 31, 0x27C6C8u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x27C6C0u, 0x27C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6C8u;
label_27c6c8:
    // 0x27c6c8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x27c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x27c6cc: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x27c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x27c6d0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C6D0u;
    SET_GPR_U32(ctx, 31, 0x27C6D8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C6D0u, 0x27C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6D8u;
label_27c6d8:
    // 0x27c6d8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27c6dc: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x27c6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27c6e0: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x27c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x27c6e4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C6E4u;
    SET_GPR_U32(ctx, 31, 0x27C6ECu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C6E4u, 0x27C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6ECu;
label_27c6ec:
    // 0x27c6ec: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x27c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x27c6f0: 0xc084964  jal         func_212590
    ctx->pc = 0x27C6F0u;
    SET_GPR_U32(ctx, 31, 0x27C6F8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C6F0u, 0x27C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6F8u;
label_27c6f8:
    // 0x27c6f8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x27c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x27c6fc: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x27c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x27c700: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C700u;
    SET_GPR_U32(ctx, 31, 0x27C708u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C700u, 0x27C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C708u;
label_27c708:
    // 0x27c708: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27c708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27c70c: 0x34447070  ori         $a0, $v0, 0x7070
    ctx->pc = 0x27c70cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28784);
    // 0x27c710: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x27c710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x27c714: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C714u;
    SET_GPR_U32(ctx, 31, 0x27C71Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C714u, 0x27C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C71Cu;
label_27c71c:
    // 0x27c71c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c720: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27c720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27c724: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c728: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c72c: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27c72cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27c730: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27c730u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c734: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27C734u;
    {
        const bool branch_taken_0x27c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c734) {
            ctx->pc = 0x27C7A8u;
            return;
        }
    }
    ctx->pc = 0x27C73Cu;
}
