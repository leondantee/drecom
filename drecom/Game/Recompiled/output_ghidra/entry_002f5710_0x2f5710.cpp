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

// Function: entry_002f5710
// Address: 0x2f5710 - 0x2f5758
void entry_002f5710_0x2f5710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5710_0x2f5710");
#endif

    switch (ctx->pc) {
        case 0x2f5750u: goto label_2f5750;
        default: break;
    }

    ctx->pc = 0x2f5710u;

    // 0x2f5710: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5714: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f5714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f5718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f5718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f571c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F571Cu;
    {
        const bool branch_taken_0x2f571c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f571c) {
            ctx->pc = 0x2F5758u;
            return;
        }
    }
    ctx->pc = 0x2F5724u;
    // 0x2f5724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f5724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f5728: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f5728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f572c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f572cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f5730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f5730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5734: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f5734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f5738: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f5738u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f573c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2f573cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f5740: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2f5740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5744: 0x24090096  addiu       $t1, $zero, 0x96
    ctx->pc = 0x2f5744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f5748: 0xc0c474c  jal         func_311D30
    ctx->pc = 0x2F5748u;
    SET_GPR_U32(ctx, 31, 0x2F5750u);
    ctx->pc = 0x311D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311D30u, 0x2F5748u, 0x2F5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5750u;
label_2f5750:
    // 0x2f5750: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5754: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x2f5754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
    ctx->pc = 0x2f5758u;
}
