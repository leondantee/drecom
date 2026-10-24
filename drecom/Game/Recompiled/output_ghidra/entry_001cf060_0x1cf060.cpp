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

// Function: entry_001cf060
// Address: 0x1cf060 - 0x1cf09c
void entry_001cf060_0x1cf060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf060_0x1cf060");
#endif

    ctx->pc = 0x1cf060u;

    // 0x1cf060: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cf060u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf064: 0x95040a00  lhu         $a0, 0xA00($t0)
    ctx->pc = 0x1cf064u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2560)));
    // 0x1cf068: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1cf068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1cf06c: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x1cf06cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cf070: 0x146003c9  bnez        $v1, . + 4 + (0x3C9 << 2)
    ctx->pc = 0x1CF070u;
    {
        const bool branch_taken_0x1cf070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf070) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF078u;
    // 0x1cf078: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x1cf078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1cf07c: 0x30c30040  andi        $v1, $a2, 0x40
    ctx->pc = 0x1cf07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x1cf080: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF080u;
    {
        const bool branch_taken_0x1cf080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf080) {
            ctx->pc = 0x1CF09Cu;
            return;
        }
    }
    ctx->pc = 0x1CF088u;
    // 0x1cf088: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf08c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cf08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cf090: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cf090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cf094: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cf094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cf098: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cf098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1cf09cu;
}
