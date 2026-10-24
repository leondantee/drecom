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

// Function: entry_00200fc8
// Address: 0x200fc8 - 0x200ff8
void entry_00200fc8_0x200fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200fc8_0x200fc8");
#endif

    switch (ctx->pc) {
        case 0x200fd8u: goto label_200fd8;
        default: break;
    }

    ctx->pc = 0x200fc8u;

    // 0x200fc8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x200fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x200fcc: 0x24440cf0  addiu       $a0, $v0, 0xCF0
    ctx->pc = 0x200fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x200fd0: 0xc046760  jal         func_119D80
    ctx->pc = 0x200FD0u;
    SET_GPR_U32(ctx, 31, 0x200FD8u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x200FD8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200FD8u) { return; }
    ctx->pc = 0x200FD8u;
label_200fd8:
    // 0x200fd8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200fdc: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x200fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200fe0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x200fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x200fe4: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x200fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x200fe8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200fec: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x200fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200ff0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x200ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x200ff4: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x200ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    ctx->pc = 0x200ff8u;
}
