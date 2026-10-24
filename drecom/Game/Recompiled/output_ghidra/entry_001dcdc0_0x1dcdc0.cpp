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

// Function: entry_001dcdc0
// Address: 0x1dcdc0 - 0x1dce00
void entry_001dcdc0_0x1dcdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcdc0_0x1dcdc0");
#endif

    ctx->pc = 0x1dcdc0u;

    // 0x1dcdc0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dcdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcdc4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dcdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dcdc8: 0x9423cc88  lhu         $v1, -0x3378($at)
    ctx->pc = 0x1dcdc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x1dcdcc: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x1dcdccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dcdd0: 0x1456000b  bne         $v0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCDD0u;
    {
        const bool branch_taken_0x1dcdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1dcdd0) {
            ctx->pc = 0x1DCE00u;
            return;
        }
    }
    ctx->pc = 0x1DCDD8u;
    // 0x1dcdd8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dcdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dcddc: 0x9423cc8a  lhu         $v1, -0x3376($at)
    ctx->pc = 0x1dcddcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x1dcde0: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1dcde0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dcde4: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dcde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcde8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dcde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dcdec: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x1dcdecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1dcdf0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dcdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dcdf4: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1DCDF4u;
    {
        const bool branch_taken_0x1dcdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dcdf4) {
            ctx->pc = 0x1DCF78u;
            return;
        }
    }
    ctx->pc = 0x1DCDFCu;
    // 0x1dcdfc: 0x0  nop
    ctx->pc = 0x1dcdfcu;
    // NOP
    ctx->pc = 0x1dce00u;
}
