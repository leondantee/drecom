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

// Function: entry_0015b294
// Address: 0x15b294 - 0x15b2fc
void entry_0015b294_0x15b294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b294_0x15b294");
#endif

    switch (ctx->pc) {
        case 0x15b2f4u: goto label_15b2f4;
        default: break;
    }

    ctx->pc = 0x15b294u;

    // 0x15b294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b298: 0x904211ed  lbu         $v0, 0x11ED($v0)
    ctx->pc = 0x15b298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4589)));
    // 0x15b29c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x15B29Cu;
    {
        const bool branch_taken_0x15b29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b29c) {
            ctx->pc = 0x15B340u;
            return;
        }
    }
    ctx->pc = 0x15B2A4u;
    // 0x15b2a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b2a8: 0x906211ec  lbu         $v0, 0x11EC($v1)
    ctx->pc = 0x15b2a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x15b2ac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x15b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x15b2b0: 0xa06211ec  sb          $v0, 0x11EC($v1)
    ctx->pc = 0x15b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b2b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b2b8: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x15b2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x15b2bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b2c0: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x15b2c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x15b2c4: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x15B2C4u;
    {
        const bool branch_taken_0x15b2c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b2c4) {
            ctx->pc = 0x15B2FCu;
            return;
        }
    }
    ctx->pc = 0x15B2CCu;
    // 0x15b2cc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x15b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b2d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b2d4: 0xa04311ec  sb          $v1, 0x11EC($v0)
    ctx->pc = 0x15b2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 3));
    // 0x15b2d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x15b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b2dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b2e0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b2e4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15b2e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b2e8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x15b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15b2ec: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x15B2ECu;
    SET_GPR_U32(ctx, 31, 0x15B2F4u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x15B2ECu, 0x15B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B2F4u;
label_15b2f4:
    // 0x15b2f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15B2F4u;
    {
        const bool branch_taken_0x15b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b2f4) {
            ctx->pc = 0x15B318u;
            return;
        }
    }
    ctx->pc = 0x15B2FCu;
}
