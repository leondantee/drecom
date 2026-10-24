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

// Function: entry_00215994
// Address: 0x215994 - 0x2159a4
void entry_00215994_0x215994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215994_0x215994");
#endif

    ctx->pc = 0x215994u;

    // 0x215994: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x215994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x215998: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x215998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x21599c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x21599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2159a0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x2159a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x2159a4u;
}
