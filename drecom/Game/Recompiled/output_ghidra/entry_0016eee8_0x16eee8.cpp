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

// Function: entry_0016eee8
// Address: 0x16eee8 - 0x16ef40
void entry_0016eee8_0x16eee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eee8_0x16eee8");
#endif

    switch (ctx->pc) {
        case 0x16ef38u: goto label_16ef38;
        default: break;
    }

    ctx->pc = 0x16eee8u;

    // 0x16eee8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16eeec: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x16eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16eef0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16eef4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16eef8: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x16eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x16eefc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ef00: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x16ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
    // 0x16ef04: 0xae1500a8  sw          $s5, 0xA8($s0)
    ctx->pc = 0x16ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 21));
    // 0x16ef08: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x16ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16ef0c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x16ef0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16ef10: 0x14a7000b  bne         $a1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x16EF10u;
    {
        const bool branch_taken_0x16ef10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x16ef10) {
            ctx->pc = 0x16EF40u;
            return;
        }
    }
    ctx->pc = 0x16EF18u;
    // 0x16ef18: 0x8fa800b4  lw          $t0, 0xB4($sp)
    ctx->pc = 0x16ef18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ef1c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x16ef1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x16ef20: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x16ef20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x16ef24: 0x24062700  addiu       $a2, $zero, 0x2700
    ctx->pc = 0x16ef24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9984));
    // 0x16ef28: 0x73c03e28  paddub      $a3, $fp, $zero
    ctx->pc = 0x16ef28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x16ef2c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x16ef2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ef30: 0xc05e858  jal         func_17A160
    ctx->pc = 0x16EF30u;
    SET_GPR_U32(ctx, 31, 0x16EF38u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x16EF30u, 0x16EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF38u;
label_16ef38:
    // 0x16ef38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16EF38u;
    {
        const bool branch_taken_0x16ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef38) {
            ctx->pc = 0x16EF60u;
            return;
        }
    }
    ctx->pc = 0x16EF40u;
}
