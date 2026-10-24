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

// Function: Event_voice_call
// Address: 0x3784e0 - 0x3785cc
void Event_voice_call_0x3784e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_voice_call_0x3784e0");
#endif

    switch (ctx->pc) {
        case 0x378558u: goto label_378558;
        case 0x378584u: goto label_378584;
        case 0x378590u: goto label_378590;
        case 0x37859cu: goto label_37859c;
        case 0x3785b8u: goto label_3785b8;
        default: break;
    }

    ctx->pc = 0x3784e0u;

    // 0x3784e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3784e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3784e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3784e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3784e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3784e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3784ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x3784ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x3784f0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x3784f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x3784f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3784f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3784f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3784f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3784fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3784fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x378500: 0x24425ec0  addiu       $v0, $v0, 0x5EC0
    ctx->pc = 0x378500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x378504: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x378504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378508: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x378508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37850c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x37850cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x378510: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x378510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x378514: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x378514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x378518: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x378518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37851c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x37851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378520: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x378520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x378524: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x378524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x378528: 0x24425ec0  addiu       $v0, $v0, 0x5EC0
    ctx->pc = 0x378528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x37852c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x37852cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378530: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x378530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378534: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x378534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x378538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37853c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x37853cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x378540: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x378540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x378544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378548: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x378548u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37854c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x37854cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378550: 0xc067e6c  jal         func_19F9B0
    ctx->pc = 0x378550u;
    SET_GPR_U32(ctx, 31, 0x378558u);
    ctx->pc = 0x19F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F9B0u, 0x378550u, 0x378558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378558u;
label_378558:
    // 0x378558: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x378558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37855c: 0x8c301a48  lw          $s0, 0x1A48($at)
    ctx->pc = 0x37855cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x378560: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x378560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x378564: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x378564u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x378568: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x378568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x37856c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37856cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x378570: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x378570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x378574: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x378574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x378578: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x378578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x37857c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37857Cu;
    {
        const bool branch_taken_0x37857c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37857c) {
            ctx->pc = 0x378590u;
            goto label_378590;
        }
    }
    ctx->pc = 0x378584u;
label_378584:
    // 0x378584: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x378584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378588: 0xc06750c  jal         func_19D430
    ctx->pc = 0x378588u;
    SET_GPR_U32(ctx, 31, 0x378590u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x378588u, 0x378590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378590u;
label_378590:
    // 0x378590: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x378590u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x378594: 0xc067ed0  jal         func_19FB40
    ctx->pc = 0x378594u;
    SET_GPR_U32(ctx, 31, 0x37859Cu);
    ctx->pc = 0x19FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FB40u, 0x378594u, 0x37859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37859Cu;
label_37859c:
    // 0x37859c: 0x1840fff9  blez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x37859Cu;
    {
        const bool branch_taken_0x37859c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37859c) {
            ctx->pc = 0x378584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378584;
        }
    }
    ctx->pc = 0x3785A4u;
    // 0x3785a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3785a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3785a8: 0xac301a48  sw          $s0, 0x1A48($at)
    ctx->pc = 0x3785a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x3785ac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3785acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3785b0: 0xc067f00  jal         func_19FC00
    ctx->pc = 0x3785B0u;
    SET_GPR_U32(ctx, 31, 0x3785B8u);
    ctx->pc = 0x19FC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC00u, 0x3785B0u, 0x3785B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3785B8u;
label_3785b8:
    // 0x3785b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3785b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3785bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3785bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3785c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3785c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3785c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3785C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3785C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3785CCu;
}
