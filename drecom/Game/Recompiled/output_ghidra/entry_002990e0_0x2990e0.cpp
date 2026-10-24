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

// Function: entry_002990e0
// Address: 0x2990e0 - 0x299110
void entry_002990e0_0x2990e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002990e0_0x2990e0");
#endif

    ctx->pc = 0x2990e0u;

    // 0x2990e0: 0x118982  srl         $s1, $s1, 6
    ctx->pc = 0x2990e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x2990e4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2990e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2990e8: 0x94a201a8  lhu         $v0, 0x1A8($a1)
    ctx->pc = 0x2990e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 424)));
    // 0x2990ec: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2990ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2990f0: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x2990f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x2990f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2990F4u;
    {
        const bool branch_taken_0x2990f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2990f4) {
            ctx->pc = 0x299110u;
            return;
        }
    }
    ctx->pc = 0x2990FCu;
    // 0x2990fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2990fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299100: 0x8fb20138  lw          $s2, 0x138($sp)
    ctx->pc = 0x299100u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299104: 0xe64001d4  swc1        $f0, 0x1D4($s2)
    ctx->pc = 0x299104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 468), bits); }
    // 0x299108: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x299108u;
    {
        const bool branch_taken_0x299108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299108) {
            ctx->pc = 0x299150u;
            return;
        }
    }
    ctx->pc = 0x299110u;
}
