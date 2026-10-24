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

// Function: entry_0019ece4
// Address: 0x19ece4 - 0x19ed40
void entry_0019ece4_0x19ece4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ece4_0x19ece4");
#endif

    ctx->pc = 0x19ece4u;

    // 0x19ece4: 0xafb600c8  sw          $s6, 0xC8($sp)
    ctx->pc = 0x19ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 22));
    // 0x19ece8: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ece8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ecec: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x19ececu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x19ecf0: 0xa7a300e0  sh          $v1, 0xE0($sp)
    ctx->pc = 0x19ecf0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ecf4: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ecf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ecf8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19ecf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19ecfc: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x19ecfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x19ed00: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x19ed00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x19ed04: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ed04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ed08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19ed08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19ed0c: 0xa7a300e0  sh          $v1, 0xE0($sp)
    ctx->pc = 0x19ed0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ed10: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19ed14: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19ED14u;
    {
        const bool branch_taken_0x19ed14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19ed14) {
            ctx->pc = 0x19ED40u;
            return;
        }
    }
    ctx->pc = 0x19ED1Cu;
    // 0x19ed1c: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ed1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ed20: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19ed20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19ed24: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x19ed24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19ed28: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19ED28u;
    {
        const bool branch_taken_0x19ed28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed28) {
            ctx->pc = 0x19ED40u;
            return;
        }
    }
    ctx->pc = 0x19ED30u;
    // 0x19ed30: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x19ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x19ed34: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x19ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x19ed38: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x19ED38u;
    SET_GPR_U32(ctx, 31, 0x19ED40u);
    ctx->pc = 0x19FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FD30u, 0x19ED38u, 0x19ED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED40u;
}
