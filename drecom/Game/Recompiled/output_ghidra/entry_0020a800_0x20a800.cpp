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

// Function: entry_0020a800
// Address: 0x20a800 - 0x20a8a8
void entry_0020a800_0x20a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a800_0x20a800");
#endif

    switch (ctx->pc) {
        case 0x20a868u: goto label_20a868;
        case 0x20a890u: goto label_20a890;
        default: break;
    }

    ctx->pc = 0x20a800u;

    // 0x20a800: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20a800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20a804: 0x9022ec68  lbu         $v0, -0x1398($at)
    ctx->pc = 0x20a804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x20a808: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x20A808u;
    {
        const bool branch_taken_0x20a808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a808) {
            ctx->pc = 0x20A8A8u;
            return;
        }
    }
    ctx->pc = 0x20A810u;
    // 0x20a810: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a814: 0x8c2294b0  lw          $v0, -0x6B50($at)
    ctx->pc = 0x20a814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6194B0u));
    // 0x20a818: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x20A818u;
    {
        const bool branch_taken_0x20a818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a818) {
            ctx->pc = 0x20A8A8u;
            return;
        }
    }
    ctx->pc = 0x20A820u;
    // 0x20a820: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x20a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a824: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20a824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20a828: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a82c: 0x244293e0  addiu       $v0, $v0, -0x6C20
    ctx->pc = 0x20a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939616));
    // 0x20a830: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20a830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a834: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a838: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x20a838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20a83c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20A83Cu;
    {
        const bool branch_taken_0x20a83c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a83c) {
            ctx->pc = 0x20A8A8u;
            return;
        }
    }
    ctx->pc = 0x20A844u;
    // 0x20a844: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20a844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20a848: 0x24518c70  addiu       $s1, $v0, -0x7390
    ctx->pc = 0x20a848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x20a84c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a850: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20a854: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x20a854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x20a858: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x20a858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x20a85c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x20a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20a860: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20A860u;
    SET_GPR_U32(ctx, 31, 0x20A868u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20A868u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A868u) { return; }
    ctx->pc = 0x20A868u;
label_20a868:
    // 0x20a868: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x20a868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x20a86c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x20a870: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x20a870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20a874: 0x248292c0  addiu       $v0, $a0, -0x6D40
    ctx->pc = 0x20a874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939328));
    // 0x20a878: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20a878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20a87c: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a880: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x20a880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20a884: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x20a884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x20a888: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x20A888u;
    SET_GPR_U32(ctx, 31, 0x20A890u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x20A888u, 0x20A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A890u;
label_20a890:
    // 0x20a890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A890u;
    {
        const bool branch_taken_0x20a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a890) {
            ctx->pc = 0x20A8A8u;
            return;
        }
    }
    ctx->pc = 0x20A898u;
    // 0x20a898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a89c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a8a0: 0xac2494b0  sw          $a0, -0x6B50($at)
    ctx->pc = 0x20a8a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6194B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B0u, _value); } while (0);
    // 0x20a8a4: 0x0  nop
    ctx->pc = 0x20a8a4u;
    // NOP
    ctx->pc = 0x20a8a8u;
}
