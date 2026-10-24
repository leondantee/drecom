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

// Function: entry_0025b8b8
// Address: 0x25b8b8 - 0x25b8f8
void entry_0025b8b8_0x25b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b8b8_0x25b8b8");
#endif

    ctx->pc = 0x25b8b8u;

    // 0x25b8b8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b8bc: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25b8bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25b8c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25b8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25b8c4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25b8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25b8c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x25B8C8u;
    {
        const bool branch_taken_0x25b8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b8c8) {
            ctx->pc = 0x25B8F8u;
            return;
        }
    }
    ctx->pc = 0x25B8D0u;
    // 0x25b8d0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25b8d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b8d8: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x25b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b8dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25b8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25b8e0: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25b8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x25b8e4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25b8e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b8ec: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x25b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b8f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25b8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25b8f4: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25b8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    ctx->pc = 0x25b8f8u;
}
