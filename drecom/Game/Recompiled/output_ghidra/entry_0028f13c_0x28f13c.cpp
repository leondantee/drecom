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

// Function: entry_0028f13c
// Address: 0x28f13c - 0x28f178
void entry_0028f13c_0x28f13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f13c_0x28f13c");
#endif

    ctx->pc = 0x28f13cu;

    // 0x28f13c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f140: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f144: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f148: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28f148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28f14c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F14Cu;
    {
        const bool branch_taken_0x28f14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f14c) {
            ctx->pc = 0x28F178u;
            return;
        }
    }
    ctx->pc = 0x28F154u;
    // 0x28f154: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f158: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f158u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f15c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f160: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x28f160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x28f164: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F164u;
    {
        const bool branch_taken_0x28f164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f164) {
            ctx->pc = 0x28F178u;
            return;
        }
    }
    ctx->pc = 0x28F16Cu;
    // 0x28f16c: 0x92035dfc  lbu         $v1, 0x5DFC($s0)
    ctx->pc = 0x28f16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24060)));
    // 0x28f170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28f174: 0xa2035dfc  sb          $v1, 0x5DFC($s0)
    ctx->pc = 0x28f174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24060), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x28f178u;
}
