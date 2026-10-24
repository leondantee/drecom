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

// Function: entry_0025e944
// Address: 0x25e944 - 0x25e964
void entry_0025e944_0x25e944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e944_0x25e944");
#endif

    ctx->pc = 0x25e944u;

    // 0x25e944: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e948: 0xa060107a  sb          $zero, 0x107A($v1)
    ctx->pc = 0x25e948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4218), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e94c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e950: 0xa060107b  sb          $zero, 0x107B($v1)
    ctx->pc = 0x25e950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4219), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e954: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e958: 0xa060107e  sb          $zero, 0x107E($v1)
    ctx->pc = 0x25e958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4222), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e95c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e960: 0xa060107f  sb          $zero, 0x107F($v1)
    ctx->pc = 0x25e960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4223), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x25e964u;
}
