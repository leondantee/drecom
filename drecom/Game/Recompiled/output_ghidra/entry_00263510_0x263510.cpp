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

// Function: entry_00263510
// Address: 0x263510 - 0x263550
void entry_00263510_0x263510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263510_0x263510");
#endif

    ctx->pc = 0x263510u;

    // 0x263510: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x263510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x263514: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x263514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263518: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x263518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26351c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x26351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x263520: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x263520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263524: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x263524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x263528: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263528u;
    {
        const bool branch_taken_0x263528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x263528) {
            ctx->pc = 0x263550u;
            return;
        }
    }
    ctx->pc = 0x263530u;
    // 0x263530: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x263530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263534: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26353c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26353cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263540: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263544: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x263544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263548: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x263548u;
    {
        const bool branch_taken_0x263548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263548) {
            ctx->pc = 0x2638E0u;
            return;
        }
    }
    ctx->pc = 0x263550u;
}
