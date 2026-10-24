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

// Function: entry_001ffca8
// Address: 0x1ffca8 - 0x1ffce8
void entry_001ffca8_0x1ffca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffca8_0x1ffca8");
#endif

    ctx->pc = 0x1ffca8u;

    // 0x1ffca8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffcac: 0x90a60348  lbu         $a2, 0x348($a1)
    ctx->pc = 0x1ffcacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ffcb0: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1ffcb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffcb4: 0xf0082b  sltu        $at, $a3, $s0
    ctx->pc = 0x1ffcb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ffcb8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FFCB8u;
    {
        const bool branch_taken_0x1ffcb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffcb8) {
            ctx->pc = 0x1FFC6Cu;
            return;
        }
    }
    ctx->pc = 0x1FFCC0u;
    // 0x1ffcc0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffcc4: 0x90660348  lbu         $a2, 0x348($v1)
    ctx->pc = 0x1ffcc4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffcc8: 0x30de00ff  andi        $fp, $a2, 0xFF
    ctx->pc = 0x1ffcc8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffccc: 0x17c000ac  bnez        $fp, . + 4 + (0xAC << 2)
    ctx->pc = 0x1FFCCCu;
    {
        const bool branch_taken_0x1ffccc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffccc) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFCD4u;
    // 0x1ffcd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ffcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffcd8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffcdc: 0xac650358  sw          $a1, 0x358($v1)
    ctx->pc = 0x1ffcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 5));
    // 0x1ffce0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1FFCE0u;
    {
        const bool branch_taken_0x1ffce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffce0) {
            ctx->pc = 0x1FFFA0u;
            return;
        }
    }
    ctx->pc = 0x1FFCE8u;
}
