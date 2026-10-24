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

// Function: entry_00330a24
// Address: 0x330a24 - 0x330a88
void entry_00330a24_0x330a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00330a24_0x330a24");
#endif

    ctx->pc = 0x330a24u;

    // 0x330a24: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x330a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x330a28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x330a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x330a2c: 0x0  nop
    ctx->pc = 0x330a2cu;
    // NOP
    // 0x330a30: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x330a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x330a34: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x330a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x330a38: 0xc7a10284  lwc1        $f1, 0x284($sp)
    ctx->pc = 0x330a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330a3c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x330a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x330a40: 0xc42026f0  lwc1        $f0, 0x26F0($at)
    ctx->pc = 0x330a40u;
    { uint32_t bits = FAST_READ32(0x8926F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x330a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x330a48: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x330a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
    // 0x330a4c: 0xc7a10288  lwc1        $f1, 0x288($sp)
    ctx->pc = 0x330a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330a50: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x330a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x330a54: 0xc42026f4  lwc1        $f0, 0x26F4($at)
    ctx->pc = 0x330a54u;
    { uint32_t bits = FAST_READ32(0x8926F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x330a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x330a5c: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x330a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x330a60: 0x92c20007  lbu         $v0, 0x7($s6)
    ctx->pc = 0x330a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x330a64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x330a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x330a68: 0x10400312  beqz        $v0, . + 4 + (0x312 << 2)
    ctx->pc = 0x330A68u;
    {
        const bool branch_taken_0x330a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330a68) {
            ctx->pc = 0x3316B4u;
            return;
        }
    }
    ctx->pc = 0x330A70u;
    // 0x330a70: 0x17c00005  bnez        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x330A70u;
    {
        const bool branch_taken_0x330a70 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x330a70) {
            ctx->pc = 0x330A88u;
            return;
        }
    }
    ctx->pc = 0x330A78u;
    // 0x330a78: 0x8fa6028c  lw          $a2, 0x28C($sp)
    ctx->pc = 0x330a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x330a7c: 0x10c0030d  beqz        $a2, . + 4 + (0x30D << 2)
    ctx->pc = 0x330A7Cu;
    {
        const bool branch_taken_0x330a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x330a7c) {
            ctx->pc = 0x3316B4u;
            return;
        }
    }
    ctx->pc = 0x330A84u;
    // 0x330a84: 0x0  nop
    ctx->pc = 0x330a84u;
    // NOP
    ctx->pc = 0x330a88u;
}
