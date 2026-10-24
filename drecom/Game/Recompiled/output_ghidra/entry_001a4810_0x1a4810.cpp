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

// Function: entry_001a4810
// Address: 0x1a4810 - 0x1a485c
void entry_001a4810_0x1a4810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4810_0x1a4810");
#endif

    ctx->pc = 0x1a4810u;

    // 0x1a4810: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4814: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4818: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a4818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a481c: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x1a481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1a4820: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4820u;
    {
        const bool branch_taken_0x1a4820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4820) {
            ctx->pc = 0x1A485Cu;
            return;
        }
    }
    ctx->pc = 0x1A4828u;
    // 0x1a4828: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a482c: 0x90650315  lbu         $a1, 0x315($v1)
    ctx->pc = 0x1a482cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 789)));
    // 0x1a4830: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A4830u;
    {
        const bool branch_taken_0x1a4830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4830) {
            ctx->pc = 0x1A485Cu;
            return;
        }
    }
    ctx->pc = 0x1A4838u;
    // 0x1a4838: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a4838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a483c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4840: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a4840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a4844: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4848: 0xa0600305  sb          $zero, 0x305($v1)
    ctx->pc = 0x1a4848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a484c: 0x263c  dsll32      $a0, $zero, 24
    ctx->pc = 0x1a484cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 24));
    // 0x1a4850: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1a4850u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1a4854: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4858: 0xa0640304  sb          $a0, 0x304($v1)
    ctx->pc = 0x1a4858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a485cu;
}
