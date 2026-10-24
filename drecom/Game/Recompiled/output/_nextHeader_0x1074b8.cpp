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

// Function: _nextHeader
// Address: 0x1074b8 - 0x1075dc
void _nextHeader_0x1074b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_nextHeader_0x1074b8");
#endif

    switch (ctx->pc) {
        case 0x107508u: goto label_107508;
        case 0x107510u: goto label_107510;
        case 0x107518u: goto label_107518;
        case 0x10755cu: goto label_10755c;
        case 0x10756cu: goto label_10756c;
        case 0x10757cu: goto label_10757c;
        case 0x107594u: goto label_107594;
        default: break;
    }

    ctx->pc = 0x1074b8u;

    // 0x1074b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1074b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1074bc: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1074bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1074c0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1074c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1074c4: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x1074c4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
    // 0x1074c8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1074c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1074cc: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x1074ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x1074d0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1074d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1074d4: 0x241601b3  addiu       $s6, $zero, 0x1B3
    ctx->pc = 0x1074d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x1074d8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1074d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1074dc: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x1074dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1074e0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1074e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1074e4: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x1074e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1074e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1074e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1074ec: 0x241301b7  addiu       $s3, $zero, 0x1B7
    ctx->pc = 0x1074ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x1074f0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1074f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1074f4: 0x241201b8  addiu       $s2, $zero, 0x1B8
    ctx->pc = 0x1074f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x1074f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1074f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1074fc: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1074fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107500: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x107500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x107504: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x107504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107508:
    // 0x107508: 0xc041cf8  jal         func_1073E0
    ctx->pc = 0x107508u;
    SET_GPR_U32(ctx, 31, 0x107510u);
    ctx->pc = 0x1073E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073E0u, 0x107508u, 0x107510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107510u;
label_107510:
    // 0x107510: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107510u;
    SET_GPR_U32(ctx, 31, 0x107518u);
    ctx->pc = 0x107514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107510u;
    // 0x107514: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107510u, 0x107518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107518u;
label_107518:
    // 0x107518: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107518u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10751c: 0x1076000d  beq         $v1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x10751Cu;
    {
        const bool branch_taken_0x10751c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x107520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10751Cu;
        // 0x107520: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10751c) {
            ctx->pc = 0x107554u;
            goto label_107554;
        }
    }
    ctx->pc = 0x107524u;
    // 0x107524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107524u;
    {
        const bool branch_taken_0x107524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107524) {
            ctx->pc = 0x10753Cu;
            goto label_10753c;
        }
    }
    ctx->pc = 0x10752Cu;
    // 0x10752c: 0x10740011  beq         $v1, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x10752Cu;
    {
        const bool branch_taken_0x10752c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x10752c) {
            ctx->pc = 0x107574u;
            goto label_107574;
        }
    }
    ctx->pc = 0x107534u;
    // 0x107534: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x107534u;
    {
        const bool branch_taken_0x107534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107534) {
            ctx->pc = 0x107508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107508;
        }
    }
    ctx->pc = 0x10753Cu;
label_10753c:
    // 0x10753c: 0x1073001b  beq         $v1, $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x10753Cu;
    {
        const bool branch_taken_0x10753c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x107540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10753Cu;
        // 0x107540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10753c) {
            ctx->pc = 0x1075ACu;
            goto label_1075ac;
        }
    }
    ctx->pc = 0x107544u;
    // 0x107544: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x107544u;
    {
        const bool branch_taken_0x107544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x107544) {
            ctx->pc = 0x107564u;
            goto label_107564;
        }
    }
    ctx->pc = 0x10754Cu;
    // 0x10754c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x10754Cu;
    {
        const bool branch_taken_0x10754c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10754c) {
            ctx->pc = 0x107508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107508;
        }
    }
    ctx->pc = 0x107554u;
label_107554:
    // 0x107554: 0xc042b8a  jal         func_10AE28
    ctx->pc = 0x107554u;
    SET_GPR_U32(ctx, 31, 0x10755Cu);
    ctx->pc = 0x10AE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE28u, 0x107554u, 0x10755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10755Cu;
label_10755c:
    // 0x10755c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x10755Cu;
    {
        const bool branch_taken_0x10755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10755c) {
            ctx->pc = 0x107508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107508;
        }
    }
    ctx->pc = 0x107564u;
label_107564:
    // 0x107564: 0xc041eaa  jal         func_107AA8
    ctx->pc = 0x107564u;
    SET_GPR_U32(ctx, 31, 0x10756Cu);
    ctx->pc = 0x107AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107AA8u, 0x107564u, 0x10756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10756Cu;
label_10756c:
    // 0x10756c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x10756Cu;
    {
        const bool branch_taken_0x10756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10756c) {
            ctx->pc = 0x107508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107508;
        }
    }
    ctx->pc = 0x107574u;
label_107574:
    // 0x107574: 0xc041d78  jal         func_1075E0
    ctx->pc = 0x107574u;
    SET_GPR_U32(ctx, 31, 0x10757Cu);
    ctx->pc = 0x1075E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1075E0u, 0x107574u, 0x10757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10757Cu;
label_10757c:
    // 0x10757c: 0x8e243bf4  lw          $a0, 0x3BF4($s1)
    ctx->pc = 0x10757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15348)));
    // 0x107580: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107584: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x107584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x107588: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x107588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10758c: 0xc042914  jal         func_10A450
    ctx->pc = 0x10758Cu;
    SET_GPR_U32(ctx, 31, 0x107594u);
    ctx->pc = 0x107590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10758Cu;
    // 0x107590: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x10758Cu, 0x107594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107594u;
label_107594:
    // 0x107594: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x107594u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x107598: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x107598u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10759c: 0xfee34488  sd          $v1, 0x4488($s7)
    ctx->pc = 0x10759cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 17544), GPR_U64(ctx, 3));
    // 0x1075a0: 0xffc24490  sd          $v0, 0x4490($fp)
    ctx->pc = 0x1075a0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 17552), GPR_U64(ctx, 2));
    // 0x1075a4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1075a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1075a8: 0x8c623d7c  lw          $v0, 0x3D7C($v1)
    ctx->pc = 0x1075a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D7Cu));
label_1075ac:
    // 0x1075ac: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1075acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1075b0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1075b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1075b4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1075b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1075b8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1075b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1075bc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1075bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1075c0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1075c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1075c4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1075c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1075c8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1075c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1075cc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1075ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1075d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1075d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1075d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1075D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1075D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075D4u;
        // 0x1075d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1075D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1075DCu;
}
