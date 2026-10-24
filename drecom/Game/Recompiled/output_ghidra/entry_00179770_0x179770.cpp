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

// Function: entry_00179770
// Address: 0x179770 - 0x1797bc
void entry_00179770_0x179770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179770_0x179770");
#endif

    ctx->pc = 0x179770u;

    // 0x179770: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179774: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x179774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x179778: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x179778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17977c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179780: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x179780u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x179784: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x179784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179788: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x179788u;
    {
        const bool branch_taken_0x179788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179788) {
            ctx->pc = 0x179684u;
            return;
        }
    }
    ctx->pc = 0x179790u;
    // 0x179790: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179794: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x179794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x179798: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x179798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17979c: 0x244300ff  addiu       $v1, $v0, 0xFF
    ctx->pc = 0x17979cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x1797a0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1797a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1797a4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1797a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1797a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1797a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1797ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1797acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1797b0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1797b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1797b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1797B4u;
    {
        const bool branch_taken_0x1797b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1797b4) {
            ctx->pc = 0x1797C8u;
            return;
        }
    }
    ctx->pc = 0x1797BCu;
}
