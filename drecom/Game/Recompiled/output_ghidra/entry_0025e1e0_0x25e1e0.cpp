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

// Function: entry_0025e1e0
// Address: 0x25e1e0 - 0x25e220
void entry_0025e1e0_0x25e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e1e0_0x25e1e0");
#endif

    ctx->pc = 0x25e1e0u;

    // 0x25e1e0: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25e1e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e1e4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25e1e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e1e8: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x25e1e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x25e1ec: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x25E1ECu;
    {
        const bool branch_taken_0x25e1ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e1ec) {
            ctx->pc = 0x25E220u;
            return;
        }
    }
    ctx->pc = 0x25E1F4u;
    // 0x25e1f4: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x25e1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x25e1f8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x25e1f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25e1fc: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x25e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e200: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25e204: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25e204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25e208: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25e208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25e20c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25e20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25e210: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x25e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e214: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25e218: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25e218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25e21c: 0x0  nop
    ctx->pc = 0x25e21cu;
    // NOP
    ctx->pc = 0x25e220u;
}
