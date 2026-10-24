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

// Function: entry_001ed5a0
// Address: 0x1ed5a0 - 0x1ed644
void entry_001ed5a0_0x1ed5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed5a0_0x1ed5a0");
#endif

    ctx->pc = 0x1ed5a0u;

    // 0x1ed5a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed5a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed5a8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ed5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed5ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed5acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed5b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed5b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed5b8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ed5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1ed5bc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ed5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1ed5c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed5c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed5c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed5cc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ed5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ed5d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ed5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed5d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed5dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed5e0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ed5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ed5e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ed5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ed5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed5ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed5f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed5f4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ed5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ed5f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed5fc: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed600: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ed600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed604: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ed604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ed608: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED608u;
    {
        const bool branch_taken_0x1ed608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed608) {
            ctx->pc = 0x1ED644u;
            return;
        }
    }
    ctx->pc = 0x1ED610u;
    // 0x1ed610: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed614: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed618: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1ed618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed61c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ed61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ed620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed624: 0x0  nop
    ctx->pc = 0x1ed624u;
    // NOP
    // 0x1ed628: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ed628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ed62c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ed62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ed630: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ed630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed63c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed640: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ed640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x1ed644u;
}
