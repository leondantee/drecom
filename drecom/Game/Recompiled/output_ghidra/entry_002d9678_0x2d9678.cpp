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

// Function: entry_002d9678
// Address: 0x2d9678 - 0x2d96b8
void entry_002d9678_0x2d9678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9678_0x2d9678");
#endif

    ctx->pc = 0x2d9678u;

    // 0x2d9678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d9678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2d967c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2d967cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2d9680: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d9680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d9684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d9684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d9688: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2d9688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d968c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d9690: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d9690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d9694: 0xac600204  sw          $zero, 0x204($v1)
    ctx->pc = 0x2d9694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 516), GPR_U32(ctx, 0));
    // 0x2d9698: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d9698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2d969c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2d969cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2d96a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d96a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d96a8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2d96a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d96ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d96acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d96b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d96b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d96b4: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2d96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
    ctx->pc = 0x2d96b8u;
}
