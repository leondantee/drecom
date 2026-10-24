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

// Function: entry_0029e684
// Address: 0x29e684 - 0x29e6ac
void entry_0029e684_0x29e684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e684_0x29e684");
#endif

    ctx->pc = 0x29e684u;

    // 0x29e684: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29e688: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e68c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29E68Cu;
    {
        const bool branch_taken_0x29e68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e68c) {
            ctx->pc = 0x29E6ACu;
            return;
        }
    }
    ctx->pc = 0x29E694u;
    // 0x29e694: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x29e694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x29e698: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x29e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x29e69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e6a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29e6a8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29e6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x29e6acu;
}
