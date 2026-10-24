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

// Function: entry_0031fe7c
// Address: 0x31fe7c - 0x31febc
void entry_0031fe7c_0x31fe7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fe7c_0x31fe7c");
#endif

    ctx->pc = 0x31fe7cu;

    // 0x31fe7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe80: 0x8c630270  lw          $v1, 0x270($v1)
    ctx->pc = 0x31fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x31fe84: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x31fe84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x31fe88: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x31FE88u;
    {
        const bool branch_taken_0x31fe88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fe88) {
            ctx->pc = 0x31FEBCu;
            return;
        }
    }
    ctx->pc = 0x31FE90u;
    // 0x31fe90: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe94: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x31fe94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x31fe98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31fe98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fe9c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31FE9Cu;
    {
        const bool branch_taken_0x31fe9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fe9c) {
            ctx->pc = 0x31FEBCu;
            return;
        }
    }
    ctx->pc = 0x31FEA4u;
    // 0x31fea4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fea8: 0x8c640358  lw          $a0, 0x358($v1)
    ctx->pc = 0x31fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 856)));
    // 0x31feac: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x31feacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31feb0: 0xac650358  sw          $a1, 0x358($v1)
    ctx->pc = 0x31feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 5));
    // 0x31feb4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x31FEB4u;
    {
        const bool branch_taken_0x31feb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31feb4) {
            ctx->pc = 0x320060u;
            return;
        }
    }
    ctx->pc = 0x31FEBCu;
}
