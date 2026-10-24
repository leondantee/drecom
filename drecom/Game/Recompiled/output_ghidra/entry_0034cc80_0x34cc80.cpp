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

// Function: entry_0034cc80
// Address: 0x34cc80 - 0x34cca8
void entry_0034cc80_0x34cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034cc80_0x34cc80");
#endif

    ctx->pc = 0x34cc80u;

    // 0x34cc80: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc84: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cc88: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x34cc88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cc8c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc90: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x34cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34cc94: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34cc94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cc98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cc9c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cca0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cca4: 0xa0850072  sb          $a1, 0x72($a0)
    ctx->pc = 0x34cca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x34cca8u;
}
