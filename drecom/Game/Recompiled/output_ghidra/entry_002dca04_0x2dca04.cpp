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

// Function: entry_002dca04
// Address: 0x2dca04 - 0x2dca74
void entry_002dca04_0x2dca04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dca04_0x2dca04");
#endif

    ctx->pc = 0x2dca04u;

    // 0x2dca04: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dca08: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2dca08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2dca0c: 0x1060013a  beqz        $v1, . + 4 + (0x13A << 2)
    ctx->pc = 0x2DCA0Cu;
    {
        const bool branch_taken_0x2dca0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dca0c) {
            ctx->pc = 0x2DCEF8u;
            return;
        }
    }
    ctx->pc = 0x2DCA14u;
    // 0x2dca14: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dca18: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x2dca18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2dca1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dca20: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x2dca20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dca24: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2dca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dca28: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2dca28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2dca2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dca2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dca30: 0x0  nop
    ctx->pc = 0x2dca30u;
    // NOP
    // 0x2dca34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dca34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dca38: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2dca38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2dca3c: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2dca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dca40: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2dca40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2dca44: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2dca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2dca48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dca48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dca4c: 0x0  nop
    ctx->pc = 0x2dca4cu;
    // NOP
    // 0x2dca50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dca50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dca54: 0x0  nop
    ctx->pc = 0x2dca54u;
    // NOP
    // 0x2dca58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCA58u;
    {
        const bool branch_taken_0x2dca58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dca58) {
            ctx->pc = 0x2DCA74u;
            return;
        }
    }
    ctx->pc = 0x2DCA60u;
    // 0x2dca60: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2dca60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2dca64: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2dca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2dca68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dca68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dca6c: 0x0  nop
    ctx->pc = 0x2dca6cu;
    // NOP
    // 0x2dca70: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2dca70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    ctx->pc = 0x2dca74u;
}
