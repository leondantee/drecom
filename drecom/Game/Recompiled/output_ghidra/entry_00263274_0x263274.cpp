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

// Function: entry_00263274
// Address: 0x263274 - 0x2632a4
void entry_00263274_0x263274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263274_0x263274");
#endif

    ctx->pc = 0x263274u;

    // 0x263274: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x263274u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x263278: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x263278u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x26327c: 0x31080002  andi        $t0, $t0, 0x2
    ctx->pc = 0x26327cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x263280: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x263280u;
    {
        const bool branch_taken_0x263280 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x263280) {
            ctx->pc = 0x2632A4u;
            return;
        }
    }
    ctx->pc = 0x263288u;
    // 0x263288: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x263288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26328c: 0x461000c  bgez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26328Cu;
    {
        const bool branch_taken_0x26328c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26328c) {
            ctx->pc = 0x2632C0u;
            return;
        }
    }
    ctx->pc = 0x263294u;
    // 0x263294: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x263294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x263298: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x263298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26329c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26329Cu;
    {
        const bool branch_taken_0x26329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26329c) {
            ctx->pc = 0x2632C0u;
            return;
        }
    }
    ctx->pc = 0x2632A4u;
}
