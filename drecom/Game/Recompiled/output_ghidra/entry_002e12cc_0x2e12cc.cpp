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

// Function: entry_002e12cc
// Address: 0x2e12cc - 0x2e1330
void entry_002e12cc_0x2e12cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e12cc_0x2e12cc");
#endif

    switch (ctx->pc) {
        case 0x2e12ecu: goto label_2e12ec;
        case 0x2e12f4u: goto label_2e12f4;
        case 0x2e131cu: goto label_2e131c;
        case 0x2e1328u: goto label_2e1328;
        default: break;
    }

    ctx->pc = 0x2e12ccu;

    // 0x2e12cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e12d0: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x2e12d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x2e12d4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e12d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2e12d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e12dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e12dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e12e0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e12e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e12e4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E12E4u;
    SET_GPR_U32(ctx, 31, 0x2E12ECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E12ECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E12ECu) { return; }
    ctx->pc = 0x2E12ECu;
label_2e12ec:
    // 0x2e12ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E12ECu;
    SET_GPR_U32(ctx, 31, 0x2E12F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E12ECu, 0x2E12F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E12F4u;
label_2e12f4:
    // 0x2e12f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e12f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e12f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e12f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e12fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E12FCu;
    {
        const bool branch_taken_0x2e12fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e12fc) {
            ctx->pc = 0x2E1330u;
            return;
        }
    }
    ctx->pc = 0x2E1304u;
    // 0x2e1304: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2e1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2e1308: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e1308u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e130c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e130cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e1310: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2e1310u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1314: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E1314u;
    SET_GPR_U32(ctx, 31, 0x2E131Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E1314u, 0x2E131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E131Cu;
label_2e131c:
    // 0x2e131c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e131cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e1320: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E1320u;
    SET_GPR_U32(ctx, 31, 0x2E1328u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E1320u, 0x2E1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1328u;
label_2e1328:
    // 0x2e1328: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2E1328u;
    {
        const bool branch_taken_0x2e1328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1328) {
            ctx->pc = 0x2E1408u;
            return;
        }
    }
    ctx->pc = 0x2E1330u;
}
