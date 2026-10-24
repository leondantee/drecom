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

// Function: entry_001094d8
// Address: 0x1094d8 - 0x109530
void entry_001094d8_0x1094d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001094d8_0x1094d8");
#endif

    switch (ctx->pc) {
        case 0x1094d8u: goto label_1094d8;
        case 0x1094dcu: goto label_1094dc;
        case 0x1094e0u: goto label_1094e0;
        case 0x1094e4u: goto label_1094e4;
        case 0x1094e8u: goto label_1094e8;
        case 0x1094ecu: goto label_1094ec;
        case 0x1094f0u: goto label_1094f0;
        case 0x1094f4u: goto label_1094f4;
        case 0x1094f8u: goto label_1094f8;
        case 0x1094fcu: goto label_1094fc;
        case 0x109500u: goto label_109500;
        case 0x109504u: goto label_109504;
        case 0x109508u: goto label_109508;
        case 0x10950cu: goto label_10950c;
        case 0x109510u: goto label_109510;
        case 0x109514u: goto label_109514;
        case 0x109518u: goto label_109518;
        case 0x10951cu: goto label_10951c;
        case 0x109520u: goto label_109520;
        case 0x109524u: goto label_109524;
        case 0x109528u: goto label_109528;
        case 0x10952cu: goto label_10952c;
        default: break;
    }

    ctx->pc = 0x1094d8u;

label_1094d8:
    // 0x1094d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1094d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1094dc:
    // 0x1094dc: 0xc042446  jal         func_109118
label_1094e0:
    if (ctx->pc == 0x1094E0u) {
        ctx->pc = 0x1094E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094DCu;
        // 0x1094e0: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1094E4u;
        goto label_1094e4;
    }
    ctx->pc = 0x1094DCu;
    SET_GPR_U32(ctx, 31, 0x1094E4u);
    ctx->pc = 0x1094E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094DCu;
    // 0x1094e0: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109118u, 0x1094DCu, 0x1094E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094E4u;
label_1094e4:
    // 0x1094e4: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1094e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1094e8:
    // 0x1094e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1094e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1094ec:
    // 0x1094ec: 0xc042446  jal         func_109118
label_1094f0:
    if (ctx->pc == 0x1094F0u) {
        ctx->pc = 0x1094F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094ECu;
        // 0x1094f0: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1094F4u;
        goto label_1094f4;
    }
    ctx->pc = 0x1094ECu;
    SET_GPR_U32(ctx, 31, 0x1094F4u);
    ctx->pc = 0x1094F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094ECu;
    // 0x1094f0: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109118u, 0x1094ECu, 0x1094F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094F4u;
label_1094f4:
    // 0x1094f4: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x1094f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_1094f8:
    // 0x1094f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1094f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1094fc:
    // 0x1094fc: 0x8e48003c  lw          $t0, 0x3C($s2)
    ctx->pc = 0x1094fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_109500:
    // 0x109500: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x109500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_109504:
    // 0x109504: 0xffa30090  sd          $v1, 0x90($sp)
    ctx->pc = 0x109504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
label_109508:
    // 0x109508: 0xde430030  ld          $v1, 0x30($s2)
    ctx->pc = 0x109508u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_10950c:
    // 0x10950c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x10950cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_109510:
    // 0x109510: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x109510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_109514:
    // 0x109514: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x109514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_109518:
    // 0x109518: 0xafa8008c  sw          $t0, 0x8C($sp)
    ctx->pc = 0x109518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 8));
label_10951c:
    // 0x10951c: 0xe0f809  jalr        $a3
label_109520:
    if (ctx->pc == 0x109520u) {
        ctx->pc = 0x109520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10951Cu;
        // 0x109520: 0xffa30098  sd          $v1, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109524u;
        goto label_109524;
    }
    ctx->pc = 0x10951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x109524u);
        ctx->pc = 0x109520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10951Cu;
        // 0x109520: 0xffa30098  sd          $v1, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10951Cu, 0x109524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109524u;
label_109524:
    // 0x109524: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x109524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109528:
    // 0x109528: 0x10000019  b           . + 4 + (0x19 << 2)
label_10952c:
    if (ctx->pc == 0x10952Cu) {
        ctx->pc = 0x10952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109528u;
        // 0x10952c: 0x8ec40048  lw          $a0, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109530u;
        goto label_fallthrough_0x109528;
    }
    ctx->pc = 0x109528u;
    {
        const bool branch_taken_0x109528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109528u;
        // 0x10952c: 0x8ec40048  lw          $a0, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109528) {
            ctx->pc = 0x109590u;
            return;
        }
    }
label_fallthrough_0x109528:
    ctx->pc = 0x109530u;
}
