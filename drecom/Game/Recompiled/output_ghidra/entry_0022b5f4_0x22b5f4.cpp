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

// Function: entry_0022b5f4
// Address: 0x22b5f4 - 0x22b634
void entry_0022b5f4_0x22b5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b5f4_0x22b5f4");
#endif

    ctx->pc = 0x22b5f4u;

    // 0x22b5f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b5f8: 0x904409db  lbu         $a0, 0x9DB($v0)
    ctx->pc = 0x22b5f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x22b5fc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x22b5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22b600: 0x30430060  andi        $v1, $v0, 0x60
    ctx->pc = 0x22b600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x22b604: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22B604u;
    {
        const bool branch_taken_0x22b604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b604) {
            ctx->pc = 0x22B634u;
            return;
        }
    }
    ctx->pc = 0x22B60Cu;
    // 0x22b60c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b610: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x22b610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x22b614: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x22b614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x22b618: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b61c: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x22b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b620: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22b620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22b624: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x22b624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x22b628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b62c: 0x0  nop
    ctx->pc = 0x22b62cu;
    // NOP
    // 0x22b630: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->pc = 0x22b634u;
}
