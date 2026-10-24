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

// Function: entry_003652bc
// Address: 0x3652bc - 0x365318
void entry_003652bc_0x3652bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003652bc_0x3652bc");
#endif

    ctx->pc = 0x3652bcu;

    // 0x3652bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3652bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3652c0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3652c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3652c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3652c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3652c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3652c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3652cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3652CCu;
    {
        const bool branch_taken_0x3652cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3652cc) {
            ctx->pc = 0x365318u;
            return;
        }
    }
    ctx->pc = 0x3652D4u;
    // 0x3652d4: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x3652d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3652d8: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x3652d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x3652dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3652dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3652e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3652e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3652e4: 0x0  nop
    ctx->pc = 0x3652e4u;
    // NOP
    // 0x3652e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3652e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3652ec: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3652ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3652f0: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x3652f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3652f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3652f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3652f8: 0x0  nop
    ctx->pc = 0x3652f8u;
    // NOP
    // 0x3652fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3652fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x365300: 0x0  nop
    ctx->pc = 0x365300u;
    // NOP
    // 0x365304: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x365304u;
    {
        const bool branch_taken_0x365304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x365304) {
            ctx->pc = 0x365318u;
            return;
        }
    }
    ctx->pc = 0x36530Cu;
    // 0x36530c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36530cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365310: 0x0  nop
    ctx->pc = 0x365310u;
    // NOP
    // 0x365314: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x365314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->pc = 0x365318u;
}
