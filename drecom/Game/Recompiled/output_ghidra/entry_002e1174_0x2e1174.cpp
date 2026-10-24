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

// Function: entry_002e1174
// Address: 0x2e1174 - 0x2e119c
void entry_002e1174_0x2e1174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1174_0x2e1174");
#endif

    ctx->pc = 0x2e1174u;

    // 0x2e1174: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1178: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e1178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e117c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e1180: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e1180u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e1184: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2e1184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2e1188: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1188u;
    {
        const bool branch_taken_0x2e1188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1188) {
            ctx->pc = 0x2E119Cu;
            return;
        }
    }
    ctx->pc = 0x2E1190u;
    // 0x2e1190: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1194: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1198: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2e1198u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2e119cu;
}
