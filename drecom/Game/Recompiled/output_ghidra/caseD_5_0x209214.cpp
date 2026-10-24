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

// Function: caseD_5
// Address: 0x209214 - 0x209250
void caseD_5_0x209214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x209214");
#endif

    ctx->pc = 0x209214u;

    // 0x209214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209218: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x209218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20921c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209220: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x209220u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x209224: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x209224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x209228: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x209228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20922c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x209230: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x209230u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x209234: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x209234u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x209238: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x209238u;
    {
        const bool branch_taken_0x209238 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x209238) {
            ctx->pc = 0x209250u;
            return;
        }
    }
    ctx->pc = 0x209240u;
    // 0x209240: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209244: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x209244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x209248: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20924c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20924cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x209250u;
}
