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

// Function: entry_001db718
// Address: 0x1db718 - 0x1db770
void entry_001db718_0x1db718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db718_0x1db718");
#endif

    switch (ctx->pc) {
        case 0x1db72cu: goto label_1db72c;
        default: break;
    }

    ctx->pc = 0x1db718u;

    // 0x1db718: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x1db718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1db71c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1db71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db720: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1db720u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1db724: 0xc0768c8  jal         func_1DA320
    ctx->pc = 0x1DB724u;
    SET_GPR_U32(ctx, 31, 0x1DB72Cu);
    ctx->pc = 0x1DA320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA320u, 0x1DB724u, 0x1DB72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB72Cu;
label_1db72c:
    // 0x1db72c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1db72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1db730: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1db730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1db734: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1db734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1db738: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1db738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1db73c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1db73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1db740: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1db740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1db744: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1db744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1db748: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1db748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db74c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1db74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1db750: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1db750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1db754: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1db754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1db758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db75c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1db75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1db760: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1db760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db764: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1db764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db768: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1db768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1db76c: 0x0  nop
    ctx->pc = 0x1db76cu;
    // NOP
    ctx->pc = 0x1db770u;
}
