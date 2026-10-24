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

// Function: entry_0025bf80
// Address: 0x25bf80 - 0x25bfb0
void entry_0025bf80_0x25bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025bf80_0x25bf80");
#endif

    ctx->pc = 0x25bf80u;

    // 0x25bf80: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bf84: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25bf84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25bf88: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25bf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25bf8c: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x25bf8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25bf90: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BF90u;
    {
        const bool branch_taken_0x25bf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf90) {
            ctx->pc = 0x25BFB0u;
            return;
        }
    }
    ctx->pc = 0x25BF98u;
    // 0x25bf98: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25bf9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25bf9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25bfa0: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bfa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25bfa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25bfa8: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25bfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x25bfac: 0x0  nop
    ctx->pc = 0x25bfacu;
    // NOP
    ctx->pc = 0x25bfb0u;
}
