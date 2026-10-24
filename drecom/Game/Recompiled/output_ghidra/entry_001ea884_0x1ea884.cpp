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

// Function: entry_001ea884
// Address: 0x1ea884 - 0x1ea8c8
void entry_001ea884_0x1ea884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea884_0x1ea884");
#endif

    ctx->pc = 0x1ea884u;

    // 0x1ea884: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ea888: 0x90250e05  lbu         $a1, 0xE05($at)
    ctx->pc = 0x1ea888u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1ea88c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1ea88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ea890: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ea890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea894: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EA894u;
    {
        const bool branch_taken_0x1ea894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ea894) {
            ctx->pc = 0x1EA8C8u;
            return;
        }
    }
    ctx->pc = 0x1EA89Cu;
    // 0x1ea89c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8a0: 0x84a210a6  lh          $v0, 0x10A6($a1)
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4262)));
    // 0x1ea8a4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1ea8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ea8a8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ea8a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ea8ac: 0x53043  sra         $a2, $a1, 1
    ctx->pc = 0x1ea8acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1ea8b0: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1ea8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1ea8b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ea8b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ea8b8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8bc: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ea8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ea8c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea8c4: 0xa48210a6  sh          $v0, 0x10A6($a0)
    ctx->pc = 0x1ea8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ea8c8u;
}
