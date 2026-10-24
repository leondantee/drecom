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

// Function: entry_003266c8
// Address: 0x3266c8 - 0x3266f4
void entry_003266c8_0x3266c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003266c8_0x3266c8");
#endif

    ctx->pc = 0x3266c8u;

    // 0x3266c8: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3266c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3266cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3266ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3266d0: 0x90420b1c  lbu         $v0, 0xB1C($v0)
    ctx->pc = 0x3266d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2844)));
    // 0x3266d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3266d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3266d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3266d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3266dc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3266dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3266e0: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x3266e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3266e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3266e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3266e8: 0xa0430b1d  sb          $v1, 0xB1D($v0)
    ctx->pc = 0x3266e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2845), (uint8_t)GPR_U32(ctx, 3));
    // 0x3266ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3266ECu;
    {
        const bool branch_taken_0x3266ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3266ec) {
            ctx->pc = 0x32670Cu;
            return;
        }
    }
    ctx->pc = 0x3266F4u;
}
