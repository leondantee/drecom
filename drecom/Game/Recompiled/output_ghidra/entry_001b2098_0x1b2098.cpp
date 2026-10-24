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

// Function: entry_001b2098
// Address: 0x1b2098 - 0x1b2130
void entry_001b2098_0x1b2098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2098_0x1b2098");
#endif

    ctx->pc = 0x1b2098u;

    // 0x1b2098: 0x2a410005  slti        $at, $s2, 0x5
    ctx->pc = 0x1b2098u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b209c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B209Cu;
    {
        const bool branch_taken_0x1b209c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b209c) {
            ctx->pc = 0x1B2130u;
            return;
        }
    }
    ctx->pc = 0x1B20A4u;
    // 0x1b20a4: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b20a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b20ac: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b20b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b20b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b20b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b20b8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1b20b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b20bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b20bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b20c0: 0x0  nop
    ctx->pc = 0x1b20c0u;
    // NOP
    // 0x1b20c4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1B20C4u;
    {
        const bool branch_taken_0x1b20c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b20c4) {
            ctx->pc = 0x1B2130u;
            return;
        }
    }
    ctx->pc = 0x1B20CCu;
    // 0x1b20cc: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1b20ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b20d0: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b20d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b20d8: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b20dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b20e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b20e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b20e4: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x1b20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1b20e8: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b20ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b20f0: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b20f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b20f8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1b20f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1b20fc: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b2100: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2104: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b210c: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x1b210cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x1b2110: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b2110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b2114: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2118: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b211c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2120: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1b2120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b2124: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1b2124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b2128: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2128u;
    SET_GPR_U32(ctx, 31, 0x1B2130u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2130u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2130u) { return; }
    ctx->pc = 0x1B2130u;
}
