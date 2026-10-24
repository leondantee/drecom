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

// Function: entry_001b4798
// Address: 0x1b4798 - 0x1b47dc
void entry_001b4798_0x1b4798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4798_0x1b4798");
#endif

    ctx->pc = 0x1b4798u;

    // 0x1b4798: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b4798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b479c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1b479cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1b47a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b47a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b47a4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b47a8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B47A8u;
    {
        const bool branch_taken_0x1b47a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b47a8) {
            ctx->pc = 0x1B47DCu;
            return;
        }
    }
    ctx->pc = 0x1B47B0u;
    // 0x1b47b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b47b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b47b4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1b47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b47b8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1b47b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1b47bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B47BCu;
    {
        const bool branch_taken_0x1b47bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b47bc) {
            ctx->pc = 0x1B47DCu;
            return;
        }
    }
    ctx->pc = 0x1B47C4u;
    // 0x1b47c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b47c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b47c8: 0x8463122c  lh          $v1, 0x122C($v1)
    ctx->pc = 0x1b47c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4652)));
    // 0x1b47cc: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x1b47ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b47d0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1b47d0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1b47d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B47D4u;
    {
        const bool branch_taken_0x1b47d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b47d4) {
            ctx->pc = 0x1B4808u;
            return;
        }
    }
    ctx->pc = 0x1B47DCu;
}
