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

// Function: entry_002f7800
// Address: 0x2f7800 - 0x2f7820
void entry_002f7800_0x2f7800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7800_0x2f7800");
#endif

    ctx->pc = 0x2f7800u;

    // 0x2f7800: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x2f7800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2f7804: 0x8fb100f8  lw          $s1, 0xF8($sp)
    ctx->pc = 0x2f7804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7808: 0xa2230100  sb          $v1, 0x100($s1)
    ctx->pc = 0x2f7808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f780c: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x2f780cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7810: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7814: 0xa0910101  sb          $s1, 0x101($a0)
    ctx->pc = 0x2f7814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 17));
    // 0x2f7818: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x2F7818u;
    {
        const bool branch_taken_0x2f7818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7818) {
            ctx->pc = 0x2F7CF0u;
            return;
        }
    }
    ctx->pc = 0x2F7820u;
}
