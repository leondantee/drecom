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

// Function: entry_00257ebc
// Address: 0x257ebc - 0x257ee8
void entry_00257ebc_0x257ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257ebc_0x257ebc");
#endif

    switch (ctx->pc) {
        case 0x257ec8u: goto label_257ec8;
        case 0x257ee0u: goto label_257ee0;
        default: break;
    }

    ctx->pc = 0x257ebcu;

    // 0x257ebc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x257ebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257ec0: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x257EC0u;
    SET_GPR_U32(ctx, 31, 0x257EC8u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x257EC8u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257EC8u) { return; }
    ctx->pc = 0x257EC8u;
label_257ec8:
    // 0x257ec8: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x257ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257ecc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257ed0: 0x2444e550  addiu       $a0, $v0, -0x1AB0
    ctx->pc = 0x257ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x257ed4: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x257ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x257ed8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257ED8u;
    SET_GPR_U32(ctx, 31, 0x257EE0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257EE0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257EE0u) { return; }
    ctx->pc = 0x257EE0u;
label_257ee0:
    // 0x257ee0: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x257ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257ee4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x257ee8u;
}
