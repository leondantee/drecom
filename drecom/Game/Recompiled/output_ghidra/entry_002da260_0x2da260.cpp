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

// Function: entry_002da260
// Address: 0x2da260 - 0x2da2c4
void entry_002da260_0x2da260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da260_0x2da260");
#endif

    ctx->pc = 0x2da260u;

    // 0x2da260: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da268: 0x0  nop
    ctx->pc = 0x2da268u;
    // NOP
    // 0x2da26c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da26cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da270: 0x0  nop
    ctx->pc = 0x2da270u;
    // NOP
    // 0x2da274: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2DA274u;
    {
        const bool branch_taken_0x2da274 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da274) {
            ctx->pc = 0x2DA2DCu;
            return;
        }
    }
    ctx->pc = 0x2DA27Cu;
    // 0x2da27c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da280: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2da280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2da284: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2da288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da28c: 0x0  nop
    ctx->pc = 0x2da28cu;
    // NOP
    // 0x2da290: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da294: 0x0  nop
    ctx->pc = 0x2da294u;
    // NOP
    // 0x2da298: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2DA298u;
    {
        const bool branch_taken_0x2da298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da298) {
            ctx->pc = 0x2DA2C4u;
            return;
        }
    }
    ctx->pc = 0x2DA2A0u;
    // 0x2da2a0: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da2a4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2da2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2da2a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2da2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da2b0: 0x0  nop
    ctx->pc = 0x2da2b0u;
    // NOP
    // 0x2da2b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da2b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da2b8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da2bc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2DA2BCu;
    {
        const bool branch_taken_0x2da2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da2bc) {
            ctx->pc = 0x2DA470u;
            return;
        }
    }
    ctx->pc = 0x2DA2C4u;
}
