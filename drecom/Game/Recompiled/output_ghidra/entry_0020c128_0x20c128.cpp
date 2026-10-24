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

// Function: entry_0020c128
// Address: 0x20c128 - 0x20c174
void entry_0020c128_0x20c128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c128_0x20c128");
#endif

    ctx->pc = 0x20c128u;

    // 0x20c128: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c12c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20c12cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20c130: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20C130u;
    {
        const bool branch_taken_0x20c130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c130) {
            ctx->pc = 0x20C174u;
            return;
        }
    }
    ctx->pc = 0x20C138u;
    // 0x20c138: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20c138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c13c: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x20c13cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x20c140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20c144: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x20c144u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x20c148: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20c148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20c14c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c14cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20c150: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20c150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20c154: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c154u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20c158: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x20c158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20c15c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C15Cu;
    {
        const bool branch_taken_0x20c15c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c15c) {
            ctx->pc = 0x20C174u;
            return;
        }
    }
    ctx->pc = 0x20C164u;
    // 0x20c164: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20c164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c168: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20c168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20c16c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20c170: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20c170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x20c174u;
}
