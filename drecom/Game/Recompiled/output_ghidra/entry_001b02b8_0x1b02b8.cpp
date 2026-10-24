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

// Function: entry_001b02b8
// Address: 0x1b02b8 - 0x1b0318
void entry_001b02b8_0x1b02b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b02b8_0x1b02b8");
#endif

    ctx->pc = 0x1b02b8u;

    // 0x1b02b8: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x1b02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1b02bc: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b02c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b02c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b02c4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b02c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b02c8: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b02c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b02cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b02d0: 0xafa304a4  sw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 3));
    // 0x1b02d4: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1b02d8: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1b02d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
    // 0x1b02dc: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1b02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1b02e0: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b02e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b02e4: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1b02e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b02e8: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b02ec: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B02ECu;
    {
        const bool branch_taken_0x1b02ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b02ec) {
            ctx->pc = 0x1B0318u;
            return;
        }
    }
    ctx->pc = 0x1B02F4u;
    // 0x1b02f4: 0x33c500ff  andi        $a1, $fp, 0xFF
    ctx->pc = 0x1b02f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x1b02f8: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b02fc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b02fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b0300: 0x8fa304ac  lw          $v1, 0x4AC($sp)
    ctx->pc = 0x1b0300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
    // 0x1b0304: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b0304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b0308: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1b0308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b030c: 0x8fa304ac  lw          $v1, 0x4AC($sp)
    ctx->pc = 0x1b030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
    // 0x1b0310: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0314: 0xafa304ac  sw          $v1, 0x4AC($sp)
    ctx->pc = 0x1b0314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 3));
    ctx->pc = 0x1b0318u;
}
