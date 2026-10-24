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

// Function: entry_001d07e0
// Address: 0x1d07e0 - 0x1d0874
void entry_001d07e0_0x1d07e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d07e0_0x1d07e0");
#endif

    ctx->pc = 0x1d07e0u;

    // 0x1d07e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d07e4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1d07e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d07e8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1d07e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d07ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d07f0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1d07f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1d07f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d07f8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d07fc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1d07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1d0800: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d0800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d0804: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D0804u;
    {
        const bool branch_taken_0x1d0804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0804) {
            ctx->pc = 0x1D0890u;
            return;
        }
    }
    ctx->pc = 0x1D080Cu;
    // 0x1d080c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0810: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0814: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d0814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0818: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d0818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d081c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0820: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1d0820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0824: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0828: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d0828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d082c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0830: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d0830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0834: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0838: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d0838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d083c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0840: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0844: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1d0844u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0848: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d084c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d084cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0850: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0854: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1d0854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
    // 0x1d0858: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d0858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d085c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0860: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0860u;
    {
        const bool branch_taken_0x1d0860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0860) {
            ctx->pc = 0x1D0874u;
            return;
        }
    }
    ctx->pc = 0x1D0868u;
    // 0x1d0868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d086c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x1d086cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0870: 0xa203156d  sb          $v1, 0x156D($s0)
    ctx->pc = 0x1d0870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5485), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1d0874u;
}
