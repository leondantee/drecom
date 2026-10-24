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

// Function: entry_00319078
// Address: 0x319078 - 0x3190cc
void entry_00319078_0x319078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00319078_0x319078");
#endif

    switch (ctx->pc) {
        case 0x319098u: goto label_319098;
        default: break;
    }

    ctx->pc = 0x319078u;

    // 0x319078: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x319078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31907c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x31907cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x319080: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x319080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x319084: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x319084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319088: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x319088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x31908c: 0x2447ae80  addiu       $a3, $v0, -0x5180
    ctx->pc = 0x31908cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
    // 0x319090: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x319090u;
    SET_GPR_U32(ctx, 31, 0x319098u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x319090u, 0x319098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319098u;
label_319098:
    // 0x319098: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x319098u;
    {
        const bool branch_taken_0x319098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319098) {
            ctx->pc = 0x31910Cu;
            return;
        }
    }
    ctx->pc = 0x3190A0u;
    // 0x3190a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3190a4: 0x8c631294  lw          $v1, 0x1294($v1)
    ctx->pc = 0x3190a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4756)));
    // 0x3190a8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3190A8u;
    {
        const bool branch_taken_0x3190a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3190a8) {
            ctx->pc = 0x3190CCu;
            return;
        }
    }
    ctx->pc = 0x3190B0u;
    // 0x3190b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3190b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3190b4: 0x9023edae  lbu         $v1, -0x1252($at)
    ctx->pc = 0x3190b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x3190b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3190B8u;
    {
        const bool branch_taken_0x3190b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3190b8) {
            ctx->pc = 0x3190CCu;
            return;
        }
    }
    ctx->pc = 0x3190C0u;
    // 0x3190c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3190c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3190c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3190c8: 0xac6412a0  sw          $a0, 0x12A0($v1)
    ctx->pc = 0x3190c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 4));
    ctx->pc = 0x3190ccu;
}
