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

// Function: entry_002e1114
// Address: 0x2e1114 - 0x2e1144
void entry_002e1114_0x2e1114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1114_0x2e1114");
#endif

    ctx->pc = 0x2e1114u;

    // 0x2e1114: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1118: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x2e1118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e111c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2e111cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2e1120: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e1120u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e1124: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e1124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e1128: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E1128u;
    {
        const bool branch_taken_0x2e1128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1128) {
            ctx->pc = 0x2E119Cu;
            return;
        }
    }
    ctx->pc = 0x2E1130u;
    // 0x2e1130: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1134: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1138: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2e1138u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e113c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E113Cu;
    {
        const bool branch_taken_0x2e113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e113c) {
            ctx->pc = 0x2E119Cu;
            return;
        }
    }
    ctx->pc = 0x2E1144u;
}
