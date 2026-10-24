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

// Function: entry_00109590
// Address: 0x109590 - 0x1095f0
void entry_00109590_0x109590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109590_0x109590");
#endif

    switch (ctx->pc) {
        case 0x109590u: goto label_109590;
        case 0x109594u: goto label_109594;
        case 0x109598u: goto label_109598;
        case 0x10959cu: goto label_10959c;
        case 0x1095a0u: goto label_1095a0;
        case 0x1095a4u: goto label_1095a4;
        case 0x1095a8u: goto label_1095a8;
        case 0x1095acu: goto label_1095ac;
        case 0x1095b0u: goto label_1095b0;
        case 0x1095b4u: goto label_1095b4;
        case 0x1095b8u: goto label_1095b8;
        case 0x1095bcu: goto label_1095bc;
        case 0x1095c0u: goto label_1095c0;
        case 0x1095c4u: goto label_1095c4;
        case 0x1095c8u: goto label_1095c8;
        case 0x1095ccu: goto label_1095cc;
        case 0x1095d0u: goto label_1095d0;
        case 0x1095d4u: goto label_1095d4;
        case 0x1095d8u: goto label_1095d8;
        case 0x1095dcu: goto label_1095dc;
        case 0x1095e0u: goto label_1095e0;
        case 0x1095e4u: goto label_1095e4;
        case 0x1095e8u: goto label_1095e8;
        case 0x1095ecu: goto label_1095ec;
        default: break;
    }

    ctx->pc = 0x109590u;

label_109590:
    // 0x109590: 0x16640017  bne         $s3, $a0, . + 4 + (0x17 << 2)
label_109594:
    if (ctx->pc == 0x109594u) {
        ctx->pc = 0x109594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109590u;
        // 0x109594: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109598u;
        goto label_109598;
    }
    ctx->pc = 0x109590u;
    {
        const bool branch_taken_0x109590 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x109594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109590u;
        // 0x109594: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109590) {
            ctx->pc = 0x1095F0u;
            return;
        }
    }
    ctx->pc = 0x109598u;
label_109598:
    // 0x109598: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_10959c:
    if (ctx->pc == 0x10959Cu) {
        ctx->pc = 0x10959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109598u;
        // 0x10959c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095A0u;
        goto label_1095a0;
    }
    ctx->pc = 0x109598u;
    {
        const bool branch_taken_0x109598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109598u;
        // 0x10959c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109598) {
            ctx->pc = 0x1095F0u;
            return;
        }
    }
    ctx->pc = 0x1095A0u;
label_1095a0:
    // 0x1095a0: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x1095a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1095a4:
    // 0x1095a4: 0xc042446  jal         func_109118
label_1095a8:
    if (ctx->pc == 0x1095A8u) {
        ctx->pc = 0x1095A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095A4u;
        // 0x1095a8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095ACu;
        goto label_1095ac;
    }
    ctx->pc = 0x1095A4u;
    SET_GPR_U32(ctx, 31, 0x1095ACu);
    ctx->pc = 0x1095A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095A4u;
    // 0x1095a8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109118u, 0x1095A4u, 0x1095ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095ACu;
label_1095ac:
    // 0x1095ac: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1095acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1095b0:
    // 0x1095b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1095b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1095b4:
    // 0x1095b4: 0xc042446  jal         func_109118
label_1095b8:
    if (ctx->pc == 0x1095B8u) {
        ctx->pc = 0x1095B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095B4u;
        // 0x1095b8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095BCu;
        goto label_1095bc;
    }
    ctx->pc = 0x1095B4u;
    SET_GPR_U32(ctx, 31, 0x1095BCu);
    ctx->pc = 0x1095B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095B4u;
    // 0x1095b8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109118u, 0x1095B4u, 0x1095BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095BCu;
label_1095bc:
    // 0x1095bc: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x1095bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_1095c0:
    // 0x1095c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1095c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1095c4:
    // 0x1095c4: 0x8e47003c  lw          $a3, 0x3C($s2)
    ctx->pc = 0x1095c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1095c8:
    // 0x1095c8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1095c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1095cc:
    // 0x1095cc: 0xffa30090  sd          $v1, 0x90($sp)
    ctx->pc = 0x1095ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
label_1095d0:
    // 0x1095d0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1095d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1095d4:
    // 0x1095d4: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x1095d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_1095d8:
    // 0x1095d8: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x1095d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1095dc:
    // 0x1095dc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1095dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1095e0:
    // 0x1095e0: 0xafa7008c  sw          $a3, 0x8C($sp)
    ctx->pc = 0x1095e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 7));
label_1095e4:
    // 0x1095e4: 0x60f809  jalr        $v1
label_1095e8:
    if (ctx->pc == 0x1095E8u) {
        ctx->pc = 0x1095E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095E4u;
        // 0x1095e8: 0xffa20098  sd          $v0, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095ECu;
        goto label_1095ec;
    }
    ctx->pc = 0x1095E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1095ECu);
        ctx->pc = 0x1095E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095E4u;
        // 0x1095e8: 0xffa20098  sd          $v0, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1095E4u, 0x1095ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1095ECu;
label_1095ec:
    // 0x1095ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1095ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1095f0u;
}
