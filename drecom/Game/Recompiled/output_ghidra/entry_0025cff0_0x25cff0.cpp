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

// Function: entry_0025cff0
// Address: 0x25cff0 - 0x25d020
void entry_0025cff0_0x25cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025cff0_0x25cff0");
#endif

    ctx->pc = 0x25cff0u;

    // 0x25cff0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cff4: 0x944409e0  lhu         $a0, 0x9E0($v0)
    ctx->pc = 0x25cff4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25cff8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x25cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25cffc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25cffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25d000: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D000u;
    {
        const bool branch_taken_0x25d000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d000) {
            ctx->pc = 0x25D020u;
            return;
        }
    }
    ctx->pc = 0x25D008u;
    // 0x25d008: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25d008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25d00c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25d00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d010: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25d010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d014: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25d014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d018: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25d018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x25d01c: 0x0  nop
    ctx->pc = 0x25d01cu;
    // NOP
    ctx->pc = 0x25d020u;
}
