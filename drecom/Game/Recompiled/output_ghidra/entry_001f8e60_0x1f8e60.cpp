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

// Function: entry_001f8e60
// Address: 0x1f8e60 - 0x1f8ea4
void entry_001f8e60_0x1f8e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8e60_0x1f8e60");
#endif

    ctx->pc = 0x1f8e60u;

    // 0x1f8e60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f8e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f8e64: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f8e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f8e68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8e6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8e70: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8E70u;
    {
        const bool branch_taken_0x1f8e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8e70) {
            ctx->pc = 0x1F8EA4u;
            return;
        }
    }
    ctx->pc = 0x1F8E78u;
    // 0x1f8e78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8e7c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f8e7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f8e80: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f8e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f8e84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8e84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8e88: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1f8e88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1f8e8c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1f8e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f8e90: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f8e90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f8e94: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8e98: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8e9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f8ea0: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f8ea4u;
}
