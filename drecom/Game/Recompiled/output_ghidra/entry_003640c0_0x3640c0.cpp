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

// Function: entry_003640c0
// Address: 0x3640c0 - 0x364138
void entry_003640c0_0x3640c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003640c0_0x3640c0");
#endif

    switch (ctx->pc) {
        case 0x3640f0u: goto label_3640f0;
        default: break;
    }

    ctx->pc = 0x3640c0u;

    // 0x3640c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3640c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3640c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3640c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3640c8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3640C8u;
    {
        const bool branch_taken_0x3640c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3640c8) {
            ctx->pc = 0x364138u;
            return;
        }
    }
    ctx->pc = 0x3640D0u;
    // 0x3640d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3640d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3640d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3640d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3640d8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3640d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3640dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3640dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3640e0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3640E0u;
    {
        const bool branch_taken_0x3640e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3640e0) {
            ctx->pc = 0x364138u;
            return;
        }
    }
    ctx->pc = 0x3640E8u;
    // 0x3640e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3640E8u;
    SET_GPR_U32(ctx, 31, 0x3640F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3640E8u, 0x3640F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640F0u;
label_3640f0:
    // 0x3640f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3640f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3640f4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3640f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3640f8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3640F8u;
    {
        const bool branch_taken_0x3640f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3640f8) {
            ctx->pc = 0x364138u;
            return;
        }
    }
    ctx->pc = 0x364100u;
    // 0x364100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364104: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364108: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36410c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x36410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x364110: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364114: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364118: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36411c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36411cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364120: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364124: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364128: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36412c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36412cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364130: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x364130u;
    {
        const bool branch_taken_0x364130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364130) {
            ctx->pc = 0x364360u;
            return;
        }
    }
    ctx->pc = 0x364138u;
}
