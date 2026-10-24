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

// Function: entry_003731c0
// Address: 0x3731c0 - 0x373200
void entry_003731c0_0x3731c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003731c0_0x3731c0");
#endif

    ctx->pc = 0x3731c0u;

    // 0x3731c0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3731c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3731c4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x3731c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x3731c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3731c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3731cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3731ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3731d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3731D0u;
    {
        const bool branch_taken_0x3731d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3731d0) {
            ctx->pc = 0x373200u;
            return;
        }
    }
    ctx->pc = 0x3731D8u;
    // 0x3731d8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3731d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3731dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3731dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3731e0: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x3731e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3731e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3731e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3731e8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3731e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3731ec: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3731ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3731f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3731f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3731f4: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x3731f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3731f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3731f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3731fc: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x3731fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    ctx->pc = 0x373200u;
}
