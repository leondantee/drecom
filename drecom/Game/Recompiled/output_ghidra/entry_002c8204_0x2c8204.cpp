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

// Function: entry_002c8204
// Address: 0x2c8204 - 0x2c8248
void entry_002c8204_0x2c8204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8204_0x2c8204");
#endif

    ctx->pc = 0x2c8204u;

    // 0x2c8204: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8208: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c8208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c820c: 0x80830039  lb          $v1, 0x39($a0)
    ctx->pc = 0x2c820cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x2c8210: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2c8210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2c8214: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x2c8214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8218: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c821c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8220: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c8220u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c8224: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c8224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c8228: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c8228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c822c: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x2c822cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2c8230: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8230u;
    {
        const bool branch_taken_0x2c8230 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8230) {
            ctx->pc = 0x2C8248u;
            return;
        }
    }
    ctx->pc = 0x2C8238u;
    // 0x2c8238: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2c8238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c823c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8240: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8244: 0xa0640039  sb          $a0, 0x39($v1)
    ctx->pc = 0x2c8244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2c8248u;
}
