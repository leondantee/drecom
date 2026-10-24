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

// Function: entry_001bd688
// Address: 0x1bd688 - 0x1bd6ac
void entry_001bd688_0x1bd688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd688_0x1bd688");
#endif

    ctx->pc = 0x1bd688u;

    // 0x1bd688: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bd688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd68c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd690: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1bd690u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bd694: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd698: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1bd698u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bd69c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6a0: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1bd6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd6a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BD6A4u;
    {
        const bool branch_taken_0x1bd6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6a4) {
            ctx->pc = 0x1BD6DCu;
            return;
        }
    }
    ctx->pc = 0x1BD6ACu;
}
