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

// Function: entry_003021d4
// Address: 0x3021d4 - 0x30221c
void entry_003021d4_0x3021d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003021d4_0x3021d4");
#endif

    ctx->pc = 0x3021d4u;

    // 0x3021d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3021d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3021d8: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x3021d8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x3021dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3021dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3021e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3021e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3021e4: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3021E4u;
    {
        const bool branch_taken_0x3021e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3021e4) {
            ctx->pc = 0x30221Cu;
            return;
        }
    }
    ctx->pc = 0x3021ECu;
    // 0x3021ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3021ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3021f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3021f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3021f8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3021f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3021fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302200: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302204: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302208: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30220c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30220cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302210: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302214: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302218: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30221cu;
}
