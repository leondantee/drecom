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

// Function: entry_0032b11c
// Address: 0x32b11c - 0x32b1ec
void entry_0032b11c_0x32b11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b11c_0x32b11c");
#endif

    ctx->pc = 0x32b11cu;

    // 0x32b11c: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b120: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32b120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32b124: 0xae0328bc  sw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10428), GPR_U32(ctx, 3));
    // 0x32b128: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b12c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b134: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b138: 0xc46128f0  lwc1        $f1, 0x28F0($v1)
    ctx->pc = 0x32b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b13c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b140: 0xc420b340  lwc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b140u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b144: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32b144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32b148: 0xe46028f0  swc1        $f0, 0x28F0($v1)
    ctx->pc = 0x32b148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 10480), bits); }
    // 0x32b14c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b150: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b150u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b158: 0x0  nop
    ctx->pc = 0x32b158u;
    // NOP
    // 0x32b15c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b15cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b160: 0x0  nop
    ctx->pc = 0x32b160u;
    // NOP
    // 0x32b164: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x32B164u;
    {
        const bool branch_taken_0x32b164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b164) {
            ctx->pc = 0x32B1ECu;
            return;
        }
    }
    ctx->pc = 0x32B16Cu;
    // 0x32b16c: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b170: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b178: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b17c: 0xc46128f0  lwc1        $f1, 0x28F0($v1)
    ctx->pc = 0x32b17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b180: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b184: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b18c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b190: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x32b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32b194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b198: 0x0  nop
    ctx->pc = 0x32b198u;
    // NOP
    // 0x32b19c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32b1a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32b1a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b1a4: 0x0  nop
    ctx->pc = 0x32b1a4u;
    // NOP
    // 0x32b1a8: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x32B1A8u;
    {
        const bool branch_taken_0x32b1a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b1a8) {
            ctx->pc = 0x32B264u;
            return;
        }
    }
    ctx->pc = 0x32B1B0u;
    // 0x32b1b0: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b1b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b1b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b1bc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b1c0: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x32b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32b1c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b1c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b1c8: 0x0  nop
    ctx->pc = 0x32b1c8u;
    // NOP
    // 0x32b1cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32b1d0: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b1d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b1d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b1dc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b1e0: 0xe46028f0  swc1        $f0, 0x28F0($v1)
    ctx->pc = 0x32b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 10480), bits); }
    // 0x32b1e4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x32B1E4u;
    {
        const bool branch_taken_0x32b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b1e4) {
            ctx->pc = 0x32B264u;
            return;
        }
    }
    ctx->pc = 0x32B1ECu;
}
