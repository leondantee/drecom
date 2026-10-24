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

// Function: entry_0025cf00
// Address: 0x25cf00 - 0x25cf40
void entry_0025cf00_0x25cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025cf00_0x25cf00");
#endif

    ctx->pc = 0x25cf00u;

    // 0x25cf00: 0x8fb20168  lw          $s2, 0x168($sp)
    ctx->pc = 0x25cf00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cf04: 0x964309e0  lhu         $v1, 0x9E0($s2)
    ctx->pc = 0x25cf04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2528)));
    // 0x25cf08: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25cf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25cf0c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25cf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25cf10: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x25CF10u;
    {
        const bool branch_taken_0x25cf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cf10) {
            ctx->pc = 0x25CF40u;
            return;
        }
    }
    ctx->pc = 0x25CF18u;
    // 0x25cf18: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25cf1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25cf1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25cf20: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x25cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cf24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25cf24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25cf28: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25cf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x25cf2c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x25cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x25cf30: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25cf30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25cf34: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x25cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cf38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25cf38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25cf3c: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25cf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    ctx->pc = 0x25cf40u;
}
