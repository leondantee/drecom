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

// Function: entry_002dbff8
// Address: 0x2dbff8 - 0x2dc080
void entry_002dbff8_0x2dbff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbff8_0x2dbff8");
#endif

    switch (ctx->pc) {
        case 0x2dc02cu: goto label_2dc02c;
        default: break;
    }

    ctx->pc = 0x2dbff8u;

    // 0x2dbff8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbffc: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dbffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dc000: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc004: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2dc004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2dc008: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DC008u;
    {
        const bool branch_taken_0x2dc008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc008) {
            ctx->pc = 0x2DC080u;
            return;
        }
    }
    ctx->pc = 0x2DC010u;
    // 0x2dc010: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2dc010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2dc014: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc018: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2dc018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc01c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DC01Cu;
    {
        const bool branch_taken_0x2dc01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc01c) {
            ctx->pc = 0x2DC080u;
            return;
        }
    }
    ctx->pc = 0x2DC024u;
    // 0x2dc024: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DC024u;
    SET_GPR_U32(ctx, 31, 0x2DC02Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DC024u, 0x2DC02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC02Cu;
label_2dc02c:
    // 0x2dc02c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2dc02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dc030: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dc030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dc034: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DC034u;
    {
        const bool branch_taken_0x2dc034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc034) {
            ctx->pc = 0x2DC080u;
            return;
        }
    }
    ctx->pc = 0x2DC03Cu;
    // 0x2dc03c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc044: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc048: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2dc048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dc04c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc050: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dc050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc054: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc058: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc05c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc060: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc064: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc068: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dc06c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2dc06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc074: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2dc074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc078: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC078u;
    {
        const bool branch_taken_0x2dc078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc078) {
            ctx->pc = 0x2DC0BCu;
            return;
        }
    }
    ctx->pc = 0x2DC080u;
}
