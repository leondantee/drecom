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

// Function: entry_0013d850
// Address: 0x13d850 - 0x13d890
void entry_0013d850_0x13d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d850_0x13d850");
#endif

    ctx->pc = 0x13d850u;

    // 0x13d850: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x13d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13d854: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d858: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x13d858u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x13d85c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13d860: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x13d860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x13d864: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D864u;
    {
        const bool branch_taken_0x13d864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d864) {
            ctx->pc = 0x13D890u;
            return;
        }
    }
    ctx->pc = 0x13D86Cu;
    // 0x13d86c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x13d86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d870: 0xdca40030  ld          $a0, 0x30($a1)
    ctx->pc = 0x13d870u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x13d874: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x13d874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x13d878: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13d878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13d87c: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x13d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x13d880: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13d880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d884: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x13d884u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13d888: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x13d888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x13d88c: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x13d88cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
    ctx->pc = 0x13d890u;
}
