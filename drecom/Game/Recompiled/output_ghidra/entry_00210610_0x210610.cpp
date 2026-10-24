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

// Function: entry_00210610
// Address: 0x210610 - 0x210638
void entry_00210610_0x210610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210610_0x210610");
#endif

    ctx->pc = 0x210610u;

    // 0x210610: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x210610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210614: 0x84861278  lh          $a2, 0x1278($a0)
    ctx->pc = 0x210614u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x210618: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x210618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x21061c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x21061cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x210620: 0x28610050  slti        $at, $v1, 0x50
    ctx->pc = 0x210620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x210624: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x210624u;
    {
        const bool branch_taken_0x210624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210624) {
            ctx->pc = 0x210638u;
            return;
        }
    }
    ctx->pc = 0x21062Cu;
    // 0x21062c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x21062cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x210630: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210634: 0xac339538  sw          $s3, -0x6AC8($at)
    ctx->pc = 0x210634u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    ctx->pc = 0x210638u;
}
