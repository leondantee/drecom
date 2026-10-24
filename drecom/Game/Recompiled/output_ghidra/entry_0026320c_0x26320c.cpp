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

// Function: entry_0026320c
// Address: 0x26320c - 0x263274
void entry_0026320c_0x26320c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026320c_0x26320c");
#endif

    ctx->pc = 0x26320cu;

    // 0x26320c: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x26320cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263210: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x263210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x263214: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x263214u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x263218: 0x1a94821  addu        $t1, $t5, $t1
    ctx->pc = 0x263218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x26321c: 0xc52d0000  lwc1        $f13, 0x0($t1)
    ctx->pc = 0x26321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x263220: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x263220u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x263224: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x263224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x263228: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x263228u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x26322c: 0x1a94821  addu        $t1, $t5, $t1
    ctx->pc = 0x26322cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x263230: 0xc52e0000  lwc1        $f14, 0x0($t1)
    ctx->pc = 0x263230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x263234: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x263234u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263238: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x263238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x26323c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x26323cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x263240: 0x1a94821  addu        $t1, $t5, $t1
    ctx->pc = 0x263240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x263244: 0xc52f0008  lwc1        $f15, 0x8($t1)
    ctx->pc = 0x263244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x263248: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x263248u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x26324c: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x26324cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x263250: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x263250u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x263254: 0x1a84021  addu        $t0, $t5, $t0
    ctx->pc = 0x263254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x263258: 0xc5100004  lwc1        $f16, 0x4($t0)
    ctx->pc = 0x263258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x26325c: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x26325cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263260: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x263260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x263264: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x263264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x263268: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x263268u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x26326c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26326Cu;
    {
        const bool branch_taken_0x26326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26326c) {
            ctx->pc = 0x2632D0u;
            return;
        }
    }
    ctx->pc = 0x263274u;
}
