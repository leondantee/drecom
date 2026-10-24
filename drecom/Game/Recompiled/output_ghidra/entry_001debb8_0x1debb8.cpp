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

// Function: entry_001debb8
// Address: 0x1debb8 - 0x1debf0
void entry_001debb8_0x1debb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001debb8_0x1debb8");
#endif

    ctx->pc = 0x1debb8u;

    // 0x1debb8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1debb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1debbc: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x1debbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1debc0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1debc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1debc4: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x1debc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x1debc8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEBC8u;
    {
        const bool branch_taken_0x1debc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1debc8) {
            ctx->pc = 0x1DEBF0u;
            return;
        }
    }
    ctx->pc = 0x1DEBD0u;
    // 0x1debd0: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1debd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1debd4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1debd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1debd8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1debd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1debdc: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x1debdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x1debe0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1debe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1debe4: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x1debe4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x1debe8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1DEBE8u;
    {
        const bool branch_taken_0x1debe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1debe8) {
            ctx->pc = 0x1DEC50u;
            return;
        }
    }
    ctx->pc = 0x1DEBF0u;
}
