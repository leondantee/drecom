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

// Function: entry_001a4390
// Address: 0x1a4390 - 0x1a43bc
void entry_001a4390_0x1a4390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4390_0x1a4390");
#endif

    ctx->pc = 0x1a4390u;

    // 0x1a4390: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4394: 0x8c64030c  lw          $a0, 0x30C($v1)
    ctx->pc = 0x1a4394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a4398: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a439c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a439cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a43a0: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1a43a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a43a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a43a8: 0x2464cca0  addiu       $a0, $v1, -0x3360
    ctx->pc = 0x1a43a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a43ac: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1a43acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a43b0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a43b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a43b4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A43B4u;
    {
        const bool branch_taken_0x1a43b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a43b4) {
            ctx->pc = 0x1A4428u;
            return;
        }
    }
    ctx->pc = 0x1A43BCu;
}
