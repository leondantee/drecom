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

// Function: entry_001f860c
// Address: 0x1f860c - 0x1f8650
void entry_001f860c_0x1f860c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f860c_0x1f860c");
#endif

    ctx->pc = 0x1f860cu;

    // 0x1f860c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f860cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f8610: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f8610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f8614: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8618: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f861c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F861Cu;
    {
        const bool branch_taken_0x1f861c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f861c) {
            ctx->pc = 0x1F8650u;
            return;
        }
    }
    ctx->pc = 0x1F8624u;
    // 0x1f8624: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8628: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f8628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f862c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f8630: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8630u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8634: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1f8634u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1f8638: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1f8638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f863c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f863cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f8640: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8644: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8644u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8648: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f864c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f864cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f8650u;
}
