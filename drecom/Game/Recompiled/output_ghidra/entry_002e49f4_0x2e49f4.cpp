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

// Function: entry_002e49f4
// Address: 0x2e49f4 - 0x2e4a48
void entry_002e49f4_0x2e49f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e49f4_0x2e49f4");
#endif

    ctx->pc = 0x2e49f4u;

    // 0x2e49f4: 0x8e1302d0  lw          $s3, 0x2D0($s0)
    ctx->pc = 0x2e49f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2e49f8: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x2e49f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e49fc: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x2e49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x2e4a00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e4a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e4a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a08: 0x0  nop
    ctx->pc = 0x2e4a08u;
    // NOP
    // 0x2e4a0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4a10: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x2e4a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x2e4a14: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x2e4a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4a18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e4a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a20: 0x0  nop
    ctx->pc = 0x2e4a20u;
    // NOP
    // 0x2e4a24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4a28: 0x0  nop
    ctx->pc = 0x2e4a28u;
    // NOP
    // 0x2e4a2c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4A2Cu;
    {
        const bool branch_taken_0x2e4a2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4a2c) {
            ctx->pc = 0x2E4A48u;
            return;
        }
    }
    ctx->pc = 0x2E4A34u;
    // 0x2e4a34: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e4a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a3c: 0x0  nop
    ctx->pc = 0x2e4a3cu;
    // NOP
    // 0x2e4a40: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x2e4a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x2e4a44: 0x0  nop
    ctx->pc = 0x2e4a44u;
    // NOP
    ctx->pc = 0x2e4a48u;
}
