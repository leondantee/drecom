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

// Function: entry_002a275c
// Address: 0x2a275c - 0x2a27c8
void entry_002a275c_0x2a275c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a275c_0x2a275c");
#endif

    ctx->pc = 0x2a275cu;

    // 0x2a275c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2760: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a2760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a2764: 0x10600107  beqz        $v1, . + 4 + (0x107 << 2)
    ctx->pc = 0x2A2764u;
    {
        const bool branch_taken_0x2a2764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2764) {
            ctx->pc = 0x2A2B84u;
            return;
        }
    }
    ctx->pc = 0x2A276Cu;
    // 0x2a276c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2770: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2a2770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2774: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2a2774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a2778: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2a2778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2a277c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2a277cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2a2780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a2780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2784: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2788: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a2788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a278c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2a278cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a2790: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2794: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a2794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2798: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a279c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a279cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a27a0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a27a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a27a8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a27acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a27b0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2a27b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a27b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a27b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a27bc: 0xa4640044  sh          $a0, 0x44($v1)
    ctx->pc = 0x2a27bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a27c0: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2A27C0u;
    {
        const bool branch_taken_0x2a27c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a27c0) {
            ctx->pc = 0x2A2B84u;
            return;
        }
    }
    ctx->pc = 0x2A27C8u;
}
