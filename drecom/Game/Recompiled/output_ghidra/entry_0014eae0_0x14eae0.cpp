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

// Function: entry_0014eae0
// Address: 0x14eae0 - 0x14eb2c
void entry_0014eae0_0x14eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eae0_0x14eae0");
#endif

    switch (ctx->pc) {
        case 0x14eb0cu: goto label_14eb0c;
        case 0x14eb24u: goto label_14eb24;
        default: break;
    }

    ctx->pc = 0x14eae0u;

    // 0x14eae0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14eae4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14eae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14eae8: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x14EAE8u;
    {
        const bool branch_taken_0x14eae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eae8) {
            ctx->pc = 0x14EC98u;
            return;
        }
    }
    ctx->pc = 0x14EAF0u;
    // 0x14eaf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eaf4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14eaf8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14eaf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14eafc: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14eafcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14eb00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14eb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14eb04: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EB04u;
    SET_GPR_U32(ctx, 31, 0x14EB0Cu);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EB04u, 0x14EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB0Cu;
label_14eb0c:
    // 0x14eb0c: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14eb0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14eb10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14eb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14eb14: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14eb14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14eb18: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14eb18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14eb1c: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EB1Cu;
    SET_GPR_U32(ctx, 31, 0x14EB24u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EB1Cu, 0x14EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB24u;
label_14eb24:
    // 0x14eb24: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x14EB24u;
    {
        const bool branch_taken_0x14eb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb24) {
            ctx->pc = 0x14EC98u;
            return;
        }
    }
    ctx->pc = 0x14EB2Cu;
}
