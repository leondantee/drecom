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

// Function: R10a_evt_phantom_apper
// Address: 0x2724d0 - 0x27263c
void R10a_evt_phantom_apper_0x2724d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_evt_phantom_apper_0x2724d0");
#endif

    switch (ctx->pc) {
        case 0x2724e4u: goto label_2724e4;
        case 0x27250cu: goto label_27250c;
        case 0x272524u: goto label_272524;
        case 0x272530u: goto label_272530;
        case 0x272540u: goto label_272540;
        case 0x27254cu: goto label_27254c;
        case 0x272554u: goto label_272554;
        case 0x272560u: goto label_272560;
        case 0x27256cu: goto label_27256c;
        case 0x27259cu: goto label_27259c;
        case 0x2725a8u: goto label_2725a8;
        case 0x2725b4u: goto label_2725b4;
        case 0x2725fcu: goto label_2725fc;
        case 0x272608u: goto label_272608;
        case 0x272628u: goto label_272628;
        default: break;
    }

    ctx->pc = 0x2724d0u;

    // 0x2724d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2724d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2724d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2724d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2724d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2724d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2724dc: 0xc0a1244  jal         func_284910
    ctx->pc = 0x2724DCu;
    SET_GPR_U32(ctx, 31, 0x2724E4u);
    ctx->pc = 0x284910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284910u, 0x2724DCu, 0x2724E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2724E4u;
label_2724e4:
    // 0x2724e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2724e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2724e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2724e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2724ec: 0xa022d551  sb          $v0, -0x2AAF($at)
    ctx->pc = 0x2724ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD551u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD551u, _value); } while (0);
    // 0x2724f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2724f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2724f4: 0x8c221aa4  lw          $v0, 0x1AA4($at)
    ctx->pc = 0x2724f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x2724f8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2724f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2724fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2724fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272500: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x272500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x272504: 0xc067e4c  jal         func_19F930
    ctx->pc = 0x272504u;
    SET_GPR_U32(ctx, 31, 0x27250Cu);
    ctx->pc = 0x19F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F930u, 0x272504u, 0x27250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27250Cu;
label_27250c:
    // 0x27250c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27250cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272510: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x272510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x272514: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x272514u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272518: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x272518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27251c: 0xc067cfc  jal         func_19F3F0
    ctx->pc = 0x27251Cu;
    SET_GPR_U32(ctx, 31, 0x272524u);
    ctx->pc = 0x19F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3F0u, 0x27251Cu, 0x272524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272524u;
label_272524:
    // 0x272524: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272528: 0xc084964  jal         func_212590
    ctx->pc = 0x272528u;
    SET_GPR_U32(ctx, 31, 0x272530u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272528u, 0x272530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272530u;
label_272530:
    // 0x272530: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x272534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272538: 0xc067e6c  jal         func_19F9B0
    ctx->pc = 0x272538u;
    SET_GPR_U32(ctx, 31, 0x272540u);
    ctx->pc = 0x19F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F9B0u, 0x272538u, 0x272540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272540u;
label_272540:
    // 0x272540: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272544: 0xc084964  jal         func_212590
    ctx->pc = 0x272544u;
    SET_GPR_U32(ctx, 31, 0x27254Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272544u, 0x27254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27254Cu;
label_27254c:
    // 0x27254c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27254Cu;
    {
        const bool branch_taken_0x27254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27254c) {
            ctx->pc = 0x272560u;
            goto label_272560;
        }
    }
    ctx->pc = 0x272554u;
label_272554:
    // 0x272554: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272558: 0xc084964  jal         func_212590
    ctx->pc = 0x272558u;
    SET_GPR_U32(ctx, 31, 0x272560u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272558u, 0x272560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272560u;
label_272560:
    // 0x272560: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x272560u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272564: 0xc067ed0  jal         func_19FB40
    ctx->pc = 0x272564u;
    SET_GPR_U32(ctx, 31, 0x27256Cu);
    ctx->pc = 0x19FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FB40u, 0x272564u, 0x27256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27256Cu;
label_27256c:
    // 0x27256c: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27256Cu;
    {
        const bool branch_taken_0x27256c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27256c) {
            ctx->pc = 0x272554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272554;
        }
    }
    ctx->pc = 0x272574u;
    // 0x272574: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x272574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x272578: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x272578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27257c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x27257cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x272580: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x272580u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272584: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x272584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272588: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x272588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27258c: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x27258cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x272590: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x272590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x272594: 0xc065644  jal         func_195910
    ctx->pc = 0x272594u;
    SET_GPR_U32(ctx, 31, 0x27259Cu);
    ctx->pc = 0x195910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195910u, 0x272594u, 0x27259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27259Cu;
label_27259c:
    // 0x27259c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27259cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2725a0: 0xc0ddd04  jal         func_377410
    ctx->pc = 0x2725A0u;
    SET_GPR_U32(ctx, 31, 0x2725A8u);
    ctx->pc = 0x377410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377410u, 0x2725A0u, 0x2725A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725A8u;
label_2725a8:
    // 0x2725a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2725a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2725ac: 0xc067f00  jal         func_19FC00
    ctx->pc = 0x2725ACu;
    SET_GPR_U32(ctx, 31, 0x2725B4u);
    ctx->pc = 0x19FC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC00u, 0x2725ACu, 0x2725B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725B4u;
label_2725b4:
    // 0x2725b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2725b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2725b8: 0x8c30bb48  lw          $s0, -0x44B8($at)
    ctx->pc = 0x2725b8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB48u));
    // 0x2725bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2725bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2725c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2725c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2725c4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2725c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2725c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2725c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2725cc: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2725ccu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2725d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2725d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2725d4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2725d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2725d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2725d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2725dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2725dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2725e0: 0x8c30bb50  lw          $s0, -0x44B0($at)
    ctx->pc = 0x2725e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB50u));
    // 0x2725e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2725e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2725e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2725e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2725ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2725ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2725f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2725f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2725f4: 0xc084964  jal         func_212590
    ctx->pc = 0x2725F4u;
    SET_GPR_U32(ctx, 31, 0x2725FCu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2725F4u, 0x2725FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725FCu;
label_2725fc:
    // 0x2725fc: 0x24040b4c  addiu       $a0, $zero, 0xB4C
    ctx->pc = 0x2725fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2892));
    // 0x272600: 0xc084964  jal         func_212590
    ctx->pc = 0x272600u;
    SET_GPR_U32(ctx, 31, 0x272608u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272600u, 0x272608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272608u;
label_272608:
    // 0x272608: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27260c: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x27260cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x272610: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x272610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x272614: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x272614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x272618: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27261c: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x27261cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x272620: 0xc084934  jal         func_2124D0
    ctx->pc = 0x272620u;
    SET_GPR_U32(ctx, 31, 0x272628u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x272620u, 0x272628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272628u;
label_272628:
    // 0x272628: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x272628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27262c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27262cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272630: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x272630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x272634: 0x3e00008  jr          $ra
    ctx->pc = 0x272634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27263Cu;
}
