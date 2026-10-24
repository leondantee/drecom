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

// Function: entry_00275360
// Address: 0x275360 - 0x2753f0
void entry_00275360_0x275360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275360_0x275360");
#endif

    switch (ctx->pc) {
        case 0x27537cu: goto label_27537c;
        case 0x27538cu: goto label_27538c;
        case 0x2753a8u: goto label_2753a8;
        case 0x2753c0u: goto label_2753c0;
        case 0x2753d0u: goto label_2753d0;
        default: break;
    }

    ctx->pc = 0x275360u;

    // 0x275360: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x275360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x275364: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x275364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x275368: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x275368u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27536c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x275370: 0xc46c1830  lwc1        $f12, 0x1830($v1)
    ctx->pc = 0x275370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275374: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x275374u;
    SET_GPR_U32(ctx, 31, 0x27537Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x275374u, 0x27537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27537Cu;
label_27537c:
    // 0x27537c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x27537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x275380: 0x8e641bf0  lw          $a0, 0x1BF0($s3)
    ctx->pc = 0x275380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x275384: 0xc040044  jal         func_100110
    ctx->pc = 0x275384u;
    SET_GPR_U32(ctx, 31, 0x27538Cu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x275384u, 0x27538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27538Cu;
label_27538c:
    // 0x27538c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x27538cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x275390: 0x3c064095  lui         $a2, 0x4095
    ctx->pc = 0x275390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16533 << 16));
    // 0x275394: 0x34c3b800  ori         $v1, $a2, 0xB800
    ctx->pc = 0x275394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)47104);
    // 0x275398: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x275398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x27539c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x27539cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2753a0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x2753A0u;
    SET_GPR_U32(ctx, 31, 0x2753A8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2753A0u, 0x2753A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753A8u;
label_2753a8:
    // 0x2753a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2753a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2753ac: 0x3c04402e  lui         $a0, 0x402E
    ctx->pc = 0x2753acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16430 << 16));
    // 0x2753b0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2753b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2753b4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2753b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2753b8: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x2753B8u;
    SET_GPR_U32(ctx, 31, 0x2753C0u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x2753B8u, 0x2753C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753C0u;
label_2753c0:
    // 0x2753c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2753c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2753c4: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x2753c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2753c8: 0xc040048  jal         func_100120
    ctx->pc = 0x2753C8u;
    SET_GPR_U32(ctx, 31, 0x2753D0u);
    ctx->pc = 0x100120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100120u, 0x2753C8u, 0x2753D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753D0u;
label_2753d0:
    // 0x2753d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2753d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2753d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2753D4u;
    {
        const bool branch_taken_0x2753d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2753d4) {
            ctx->pc = 0x2753F0u;
            return;
        }
    }
    ctx->pc = 0x2753DCu;
    // 0x2753dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2753dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2753e0: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x2753e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2753e4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2753e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2753e8: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x2753e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2753ec: 0xa0c71b30  sb          $a3, 0x1B30($a2)
    ctx->pc = 0x2753ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6960), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x2753f0u;
}
