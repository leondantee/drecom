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

// Function: entry_00210660
// Address: 0x210660 - 0x210688
void entry_00210660_0x210660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210660_0x210660");
#endif

    ctx->pc = 0x210660u;

    // 0x210660: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210664: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x210664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x210668: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x210668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x21066c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x21066cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x210670: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x210670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x210674: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x210674u;
    {
        const bool branch_taken_0x210674 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210674) {
            ctx->pc = 0x210688u;
            return;
        }
    }
    ctx->pc = 0x21067Cu;
    // 0x21067c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x21067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x210680: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210684: 0xac239538  sw          $v1, -0x6AC8($at)
    ctx->pc = 0x210684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    ctx->pc = 0x210688u;
}
