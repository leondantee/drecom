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

// Function: R121_opening_event_tryal_ver
// Address: 0x27f4f0 - 0x27f5f4
void R121_opening_event_tryal_ver_0x27f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R121_opening_event_tryal_ver_0x27f4f0");
#endif

    switch (ctx->pc) {
        case 0x27f500u: goto label_27f500;
        case 0x27f52cu: goto label_27f52c;
        case 0x27f54cu: goto label_27f54c;
        case 0x27f558u: goto label_27f558;
        case 0x27f564u: goto label_27f564;
        case 0x27f58cu: goto label_27f58c;
        case 0x27f594u: goto label_27f594;
        case 0x27f5a0u: goto label_27f5a0;
        case 0x27f5c0u: goto label_27f5c0;
        case 0x27f5dcu: goto label_27f5dc;
        case 0x27f5e4u: goto label_27f5e4;
        default: break;
    }

    ctx->pc = 0x27f4f0u;

    // 0x27f4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27f4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f4f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x27f4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x27f4f8: 0xc0a1244  jal         func_284910
    ctx->pc = 0x27F4F8u;
    SET_GPR_U32(ctx, 31, 0x27F500u);
    ctx->pc = 0x284910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284910u, 0x27F4F8u, 0x27F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F500u;
label_27f500:
    // 0x27f500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f504: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f508: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x27f508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f50c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27f50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f510: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x27f510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x27f514: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x27f514u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27f518: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x27f518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x27f51c: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x27f51cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27f520: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x27f520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f524: 0xc059190  jal         func_164640
    ctx->pc = 0x27F524u;
    SET_GPR_U32(ctx, 31, 0x27F52Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x27F524u, 0x27F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F52Cu;
label_27f52c:
    // 0x27f52c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f530: 0x8c221aa4  lw          $v0, 0x1AA4($at)
    ctx->pc = 0x27f530u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27f534: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x27f534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x27f538: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f53c: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x27f53cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x27f540: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x27f540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f544: 0xc084964  jal         func_212590
    ctx->pc = 0x27F544u;
    SET_GPR_U32(ctx, 31, 0x27F54Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F544u, 0x27F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F54Cu;
label_27f54c:
    // 0x27f54c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27f54cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f550: 0xc0ddd04  jal         func_377410
    ctx->pc = 0x27F550u;
    SET_GPR_U32(ctx, 31, 0x27F558u);
    ctx->pc = 0x377410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377410u, 0x27F550u, 0x27F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F558u;
label_27f558:
    // 0x27f558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f55c: 0xc084964  jal         func_212590
    ctx->pc = 0x27F55Cu;
    SET_GPR_U32(ctx, 31, 0x27F564u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F55Cu, 0x27F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F564u;
label_27f564:
    // 0x27f564: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f568: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f568u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f56c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27f56cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f570: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27f570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f574: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x27f574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x27f578: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x27f578u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27f57c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x27f57cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x27f580: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x27f580u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f584: 0xc059190  jal         func_164640
    ctx->pc = 0x27F584u;
    SET_GPR_U32(ctx, 31, 0x27F58Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x27F584u, 0x27F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F58Cu;
label_27f58c:
    // 0x27f58c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27F58Cu;
    {
        const bool branch_taken_0x27f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f58c) {
            ctx->pc = 0x27F5A0u;
            goto label_27f5a0;
        }
    }
    ctx->pc = 0x27F594u;
label_27f594:
    // 0x27f594: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f598: 0xc084964  jal         func_212590
    ctx->pc = 0x27F598u;
    SET_GPR_U32(ctx, 31, 0x27F5A0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F598u, 0x27F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5A0u;
label_27f5a0:
    // 0x27f5a0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x27f5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x27f5a4: 0x90220397  lbu         $v0, 0x397($at)
    ctx->pc = 0x27f5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9A0397u));
    // 0x27f5a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27f5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27f5ac: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27F5ACu;
    {
        const bool branch_taken_0x27f5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f5ac) {
            ctx->pc = 0x27F594u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f594;
        }
    }
    ctx->pc = 0x27F5B4u;
    // 0x27f5b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27f5b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f5b8: 0xc062010  jal         func_188040
    ctx->pc = 0x27F5B8u;
    SET_GPR_U32(ctx, 31, 0x27F5C0u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x27F5B8u, 0x27F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5C0u;
label_27f5c0:
    // 0x27f5c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27f5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27f5c4: 0x8c22dbc8  lw          $v0, -0x2438($at)
    ctx->pc = 0x27f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x27f5c8: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x27f5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x27f5cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27f5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27f5d0: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x27f5d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x27f5d4: 0xc0a128c  jal         func_284A30
    ctx->pc = 0x27F5D4u;
    SET_GPR_U32(ctx, 31, 0x27F5DCu);
    ctx->pc = 0x284A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A30u, 0x27F5D4u, 0x27F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5DCu;
label_27f5dc:
    // 0x27f5dc: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27F5DCu;
    SET_GPR_U32(ctx, 31, 0x27F5E4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27F5DCu, 0x27F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5E4u;
label_27f5e4:
    // 0x27f5e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27f5e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f5e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27f5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x27F5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F5F4u;
}
