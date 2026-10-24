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

// Function: entry_0030648c
// Address: 0x30648c - 0x306508
void entry_0030648c_0x30648c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030648c_0x30648c");
#endif

    ctx->pc = 0x30648cu;

    // 0x30648c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30648cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306490: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x306490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x306494: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x306494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x306498: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x306498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30649c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x30649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3064a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3064a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3064a4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x3064a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3064a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3064a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3064ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3064acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3064b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3064b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3064b4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3064b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3064b8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3064b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3064bc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3064bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3064c0: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x3064c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3064c4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3064c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3064c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3064c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3064cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3064ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3064d0: 0x0  nop
    ctx->pc = 0x3064d0u;
    // NOP
    // 0x3064d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3064d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3064d8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3064d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3064dc: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x3064dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3064e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3064e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3064e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3064e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3064e8: 0x0  nop
    ctx->pc = 0x3064e8u;
    // NOP
    // 0x3064ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3064ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3064f0: 0x0  nop
    ctx->pc = 0x3064f0u;
    // NOP
    // 0x3064f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3064F4u;
    {
        const bool branch_taken_0x3064f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3064f4) {
            ctx->pc = 0x306508u;
            return;
        }
    }
    ctx->pc = 0x3064FCu;
    // 0x3064fc: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x3064fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x306500: 0x3083fff7  andi        $v1, $a0, 0xFFF7
    ctx->pc = 0x306500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65527);
    // 0x306504: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x306504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x306508u;
}
