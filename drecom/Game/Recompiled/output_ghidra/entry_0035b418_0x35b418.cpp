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

// Function: entry_0035b418
// Address: 0x35b418 - 0x35b474
void entry_0035b418_0x35b418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b418_0x35b418");
#endif

    ctx->pc = 0x35b418u;

    // 0x35b418: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b41c: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x35b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x35b420: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35b420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35b424: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x35b424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    // 0x35b428: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x35b428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b42c: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x35B42Cu;
    {
        const bool branch_taken_0x35b42c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b42c) {
            ctx->pc = 0x35B474u;
            return;
        }
    }
    ctx->pc = 0x35B434u;
    // 0x35b434: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35b438: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b43c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35b43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b444: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35b444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b448: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b44c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35b44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b450: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b454: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35b454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b458: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b45c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35b460: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b464: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b468: 0xa06411ec  sb          $a0, 0x11EC($v1)
    ctx->pc = 0x35b468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b46c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b470: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x35b470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    ctx->pc = 0x35b474u;
}
