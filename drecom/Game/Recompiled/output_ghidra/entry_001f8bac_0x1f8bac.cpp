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

// Function: entry_001f8bac
// Address: 0x1f8bac - 0x1f8bf0
void entry_001f8bac_0x1f8bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8bac_0x1f8bac");
#endif

    ctx->pc = 0x1f8bacu;

    // 0x1f8bac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f8bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f8bb0: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f8bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f8bb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8bb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8bbc: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8BBCu;
    {
        const bool branch_taken_0x1f8bbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8bbc) {
            ctx->pc = 0x1F8BF0u;
            return;
        }
    }
    ctx->pc = 0x1F8BC4u;
    // 0x1f8bc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8bc8: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f8bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f8bcc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f8bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f8bd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8bd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8bd4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1f8bd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1f8bd8: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1f8bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f8bdc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f8bdcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f8be0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8be4: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8be4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8be8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f8bec: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8becu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f8bf0u;
}
