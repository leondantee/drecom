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

// Function: Movie_ctrl
// Address: 0x1d89a0 - 0x1d8aa0
void Movie_ctrl_0x1d89a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_ctrl_0x1d89a0");
#endif

    switch (ctx->pc) {
        case 0x1d89c4u: goto label_1d89c4;
        case 0x1d89d0u: goto label_1d89d0;
        case 0x1d89f8u: goto label_1d89f8;
        case 0x1d8a04u: goto label_1d8a04;
        case 0x1d8a1cu: goto label_1d8a1c;
        case 0x1d8a28u: goto label_1d8a28;
        case 0x1d8a3cu: goto label_1d8a3c;
        case 0x1d8a68u: goto label_1d8a68;
        case 0x1d8a74u: goto label_1d8a74;
        case 0x1d8a88u: goto label_1d8a88;
        default: break;
    }

    ctx->pc = 0x1d89a0u;

    // 0x1d89a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d89a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d89a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1d89a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d89a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d89a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d89ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d89acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d89b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d89b4: 0x2450c100  addiu       $s0, $v0, -0x3F00
    ctx->pc = 0x1d89b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x1d89b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d89b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d89bc: 0xc0674ec  jal         func_19D3B0
    ctx->pc = 0x1D89BCu;
    SET_GPR_U32(ctx, 31, 0x1D89C4u);
    ctx->pc = 0x19D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3B0u, 0x1D89BCu, 0x1D89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89C4u;
label_1d89c4:
    // 0x1d89c4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1d89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d89c8: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1D89C8u;
    SET_GPR_U32(ctx, 31, 0x1D89D0u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1D89C8u, 0x1D89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89D0u;
label_1d89d0:
    // 0x1d89d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d89d4: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1d89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1d89d8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1d89d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d89dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d89dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d89e0: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x1d89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0144u));
    // 0x1d89e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D89E4u;
    {
        const bool branch_taken_0x1d89e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d89e4) {
            ctx->pc = 0x1D89F8u;
            goto label_1d89f8;
        }
    }
    ctx->pc = 0x1D89ECu;
    // 0x1d89ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d89f0: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1D89F0u;
    SET_GPR_U32(ctx, 31, 0x1D89F8u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1D89F0u, 0x1D89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89F8u;
label_1d89f8:
    // 0x1d89f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d89fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1d89fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1d8a00: 0xac225a00  sw          $v0, 0x5A00($at)
    ctx->pc = 0x1d8a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A00u, _value); } while (0);
label_1d8a04:
    // 0x1d8a04: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x1d8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1d8a08: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d8a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d8a0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8A0Cu;
    {
        const bool branch_taken_0x1d8a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a0c) {
            ctx->pc = 0x1D8A30u;
            goto label_1d8a30;
        }
    }
    ctx->pc = 0x1D8A14u;
    // 0x1d8a14: 0xc0761f0  jal         func_1D87C0
    ctx->pc = 0x1D8A14u;
    SET_GPR_U32(ctx, 31, 0x1D8A1Cu);
    ctx->pc = 0x1D87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D87C0u, 0x1D8A14u, 0x1D8A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A1Cu;
label_1d8a1c:
    // 0x1d8a1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d8a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a20: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1D8A20u;
    SET_GPR_U32(ctx, 31, 0x1D8A28u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1D8A20u, 0x1D8A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A28u;
label_1d8a28:
    // 0x1d8a28: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1D8A28u;
    {
        const bool branch_taken_0x1d8a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a28) {
            ctx->pc = 0x1D8A04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a04;
        }
    }
    ctx->pc = 0x1D8A30u;
label_1d8a30:
    // 0x1d8a30: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d8a30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8a34: 0xc0674fc  jal         func_19D3F0
    ctx->pc = 0x1D8A34u;
    SET_GPR_U32(ctx, 31, 0x1D8A3Cu);
    ctx->pc = 0x19D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3F0u, 0x1D8A34u, 0x1D8A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A3Cu;
label_1d8a3c:
    // 0x1d8a3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d8a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d8a40: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1d8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1d8a44: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1d8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x1d8a48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d8a4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d8a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d8a50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d8a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d8a54: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1d8a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1d8a58: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d8a58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8a5c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1d8a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1d8a60: 0xc0ce754  jal         func_339D50
    ctx->pc = 0x1D8A60u;
    SET_GPR_U32(ctx, 31, 0x1D8A68u);
    ctx->pc = 0x339D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D50u, 0x1D8A60u, 0x1D8A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A68u;
label_1d8a68:
    // 0x1d8a68: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d8a68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8a6c: 0xc0d7184  jal         func_35C610
    ctx->pc = 0x1D8A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A74u);
    ctx->pc = 0x35C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C610u, 0x1D8A6Cu, 0x1D8A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A74u;
label_1d8a74:
    // 0x1d8a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a78: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1d8a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1d8a7c: 0xac225a00  sw          $v0, 0x5A00($at)
    ctx->pc = 0x1d8a7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A00u, _value); } while (0);
    // 0x1d8a80: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x1D8A80u;
    SET_GPR_U32(ctx, 31, 0x1D8A88u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x1D8A80u, 0x1D8A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A88u;
label_1d8a88:
    // 0x1d8a88: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1d8a88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d8a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d8a98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AA0u;
}
