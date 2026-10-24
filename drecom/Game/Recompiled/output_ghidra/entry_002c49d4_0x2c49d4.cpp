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

// Function: entry_002c49d4
// Address: 0x2c49d4 - 0x2c4a4c
void entry_002c49d4_0x2c49d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c49d4_0x2c49d4");
#endif

    ctx->pc = 0x2c49d4u;

    // 0x2c49d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c49d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c49dc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c49dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c49e0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2c49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2c49e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c49e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c49e8: 0x0  nop
    ctx->pc = 0x2c49e8u;
    // NOP
    // 0x2c49ec: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c49ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c49f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c49f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c49f8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c49f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c49fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c49fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4a00: 0x0  nop
    ctx->pc = 0x2c4a00u;
    // NOP
    // 0x2c4a04: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2C4A04u;
    {
        const bool branch_taken_0x2c4a04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4a04) {
            ctx->pc = 0x2C4A4Cu;
            return;
        }
    }
    ctx->pc = 0x2C4A0Cu;
    // 0x2c4a0c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4a10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4a14: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c4a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4a18: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2c4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2c4a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4a20: 0x0  nop
    ctx->pc = 0x2c4a20u;
    // NOP
    // 0x2c4a24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c4a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c4a28: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4a2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4a30: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c4a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c4a34: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4a38: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c4a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4a3c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c4a40: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2c4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c4a44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c4a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c4a48: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x2c4a4cu;
}
