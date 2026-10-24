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

// Function: entry_0025e0a0
// Address: 0x25e0a0 - 0x25e0c8
void entry_0025e0a0_0x25e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e0a0_0x25e0a0");
#endif

    ctx->pc = 0x25e0a0u;

    // 0x25e0a0: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25e0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e0a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e0a8: 0x30560004  andi        $s6, $v0, 0x4
    ctx->pc = 0x25e0a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25e0ac: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E0ACu;
    {
        const bool branch_taken_0x25e0ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e0ac) {
            ctx->pc = 0x25E0C8u;
            return;
        }
    }
    ctx->pc = 0x25E0B4u;
    // 0x25e0b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25e0b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25e0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25e0bc: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x25e0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e0c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25e0c4: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x25e0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    ctx->pc = 0x25e0c8u;
}
