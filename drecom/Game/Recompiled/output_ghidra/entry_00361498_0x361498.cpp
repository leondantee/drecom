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

// Function: entry_00361498
// Address: 0x361498 - 0x3614cc
void entry_00361498_0x361498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361498_0x361498");
#endif

    ctx->pc = 0x361498u;

    // 0x361498: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x361498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36149c: 0x906211ec  lbu         $v0, 0x11EC($v1)
    ctx->pc = 0x36149cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x3614a0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3614a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3614a4: 0xa06211ec  sb          $v0, 0x11EC($v1)
    ctx->pc = 0x3614a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x3614a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3614a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3614ac: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x3614acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x3614b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3614b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3614b4: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x3614b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x3614b8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3614B8u;
    {
        const bool branch_taken_0x3614b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3614b8) {
            ctx->pc = 0x3614CCu;
            return;
        }
    }
    ctx->pc = 0x3614C0u;
    // 0x3614c0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3614c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3614c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3614c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3614c8: 0xa04311ec  sb          $v1, 0x11EC($v0)
    ctx->pc = 0x3614c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3614ccu;
}
