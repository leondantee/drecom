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

// Function: entry_00364480
// Address: 0x364480 - 0x3644dc
void entry_00364480_0x364480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364480_0x364480");
#endif

    ctx->pc = 0x364480u;

    // 0x364480: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364484: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364488: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36448c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x364490: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x364490u;
    {
        const bool branch_taken_0x364490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364490) {
            ctx->pc = 0x3644DCu;
            return;
        }
    }
    ctx->pc = 0x364498u;
    // 0x364498: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36449c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x36449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3644a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3644a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3644a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3644a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3644a8: 0x0  nop
    ctx->pc = 0x3644a8u;
    // NOP
    // 0x3644ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3644acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3644b0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3644b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3644b4: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x3644b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3644b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3644b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3644bc: 0x0  nop
    ctx->pc = 0x3644bcu;
    // NOP
    // 0x3644c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3644c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3644c4: 0x0  nop
    ctx->pc = 0x3644c4u;
    // NOP
    // 0x3644c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3644C8u;
    {
        const bool branch_taken_0x3644c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3644c8) {
            ctx->pc = 0x3644DCu;
            return;
        }
    }
    ctx->pc = 0x3644D0u;
    // 0x3644d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3644d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3644d4: 0x0  nop
    ctx->pc = 0x3644d4u;
    // NOP
    // 0x3644d8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3644d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->pc = 0x3644dcu;
}
