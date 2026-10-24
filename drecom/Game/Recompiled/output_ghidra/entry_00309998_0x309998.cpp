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

// Function: entry_00309998
// Address: 0x309998 - 0x309a04
void entry_00309998_0x309998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309998_0x309998");
#endif

    ctx->pc = 0x309998u;

    // 0x309998: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30999c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x30999cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x3099a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3099a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3099a4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3099a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3099a8: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x3099A8u;
    {
        const bool branch_taken_0x3099a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3099a8) {
            ctx->pc = 0x309B00u;
            return;
        }
    }
    ctx->pc = 0x3099B0u;
    // 0x3099b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3099b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3099b4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3099b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3099b8: 0x24703200  addiu       $s0, $v1, 0x3200
    ctx->pc = 0x3099b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12800));
    // 0x3099bc: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x3099bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3099c0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3099c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3099c4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3099c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3099c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3099c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3099cc: 0x0  nop
    ctx->pc = 0x3099ccu;
    // NOP
    // 0x3099d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3099d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3099d4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3099d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3099d8: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x3099d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3099dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3099dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3099e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3099e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3099e4: 0x0  nop
    ctx->pc = 0x3099e4u;
    // NOP
    // 0x3099e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3099e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3099ec: 0x0  nop
    ctx->pc = 0x3099ecu;
    // NOP
    // 0x3099f0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3099F0u;
    {
        const bool branch_taken_0x3099f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3099f0) {
            ctx->pc = 0x309A04u;
            return;
        }
    }
    ctx->pc = 0x3099F8u;
    // 0x3099f8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3099f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3099fc: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x3099fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x309a00: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x309a00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x309a04u;
}
