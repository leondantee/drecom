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

// Function: entry_002e1144
// Address: 0x2e1144 - 0x2e1174
void entry_002e1144_0x2e1144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1144_0x2e1144");
#endif

    ctx->pc = 0x2e1144u;

    // 0x2e1144: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1148: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e1148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e114c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e1150: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e1150u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e1154: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2e1154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2e1158: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E1158u;
    {
        const bool branch_taken_0x2e1158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1158) {
            ctx->pc = 0x2E119Cu;
            return;
        }
    }
    ctx->pc = 0x2E1160u;
    // 0x2e1160: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1164: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1168: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2e1168u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e116c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E116Cu;
    {
        const bool branch_taken_0x2e116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e116c) {
            ctx->pc = 0x2E119Cu;
            return;
        }
    }
    ctx->pc = 0x2E1174u;
}
