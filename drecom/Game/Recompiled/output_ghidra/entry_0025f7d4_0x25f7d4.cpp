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

// Function: entry_0025f7d4
// Address: 0x25f7d4 - 0x25f81c
void entry_0025f7d4_0x25f7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f7d4_0x25f7d4");
#endif

    switch (ctx->pc) {
        case 0x25f7ecu: goto label_25f7ec;
        default: break;
    }

    ctx->pc = 0x25f7d4u;

    // 0x25f7d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f7d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f7dc: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x25f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x25f7e0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x25f7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x25f7e4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F7E4u;
    SET_GPR_U32(ctx, 31, 0x25F7ECu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F7ECu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F7ECu) { return; }
    ctx->pc = 0x25F7ECu;
label_25f7ec:
    // 0x25f7ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f7f0: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x25f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25f7f4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F7F4u;
    {
        const bool branch_taken_0x25f7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f7f4) {
            ctx->pc = 0x25F81Cu;
            return;
        }
    }
    ctx->pc = 0x25F7FCu;
    // 0x25f7fc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x25f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f800: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f804: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f808: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25f808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25f80c: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x25f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25f810: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25f810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25f814: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F814u;
    SET_GPR_U32(ctx, 31, 0x25F81Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F81Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F81Cu) { return; }
    ctx->pc = 0x25F81Cu;
}
