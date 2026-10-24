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

// Function: entry_00210638
// Address: 0x210638 - 0x210660
void entry_00210638_0x210638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210638_0x210638");
#endif

    ctx->pc = 0x210638u;

    // 0x210638: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x21063c: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x21063cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x210640: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x210640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x210644: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x210644u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x210648: 0x28a10028  slti        $at, $a1, 0x28
    ctx->pc = 0x210648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x21064c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x21064Cu;
    {
        const bool branch_taken_0x21064c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21064c) {
            ctx->pc = 0x210660u;
            return;
        }
    }
    ctx->pc = 0x210654u;
    // 0x210654: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x210654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x210658: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x21065c: 0xac239538  sw          $v1, -0x6AC8($at)
    ctx->pc = 0x21065cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    ctx->pc = 0x210660u;
}
