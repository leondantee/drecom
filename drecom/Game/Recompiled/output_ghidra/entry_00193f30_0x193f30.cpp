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

// Function: entry_00193f30
// Address: 0x193f30 - 0x194070
void entry_00193f30_0x193f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193f30_0x193f30");
#endif

    ctx->pc = 0x193f30u;

    // 0x193f30: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x193f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193f34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x193f34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193f38: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193f3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193f44: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x193f44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x193f48: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x193f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193f4c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x193f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193f50: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193f58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f5c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193f60: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x193f60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x193f64: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x193f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193f68: 0xc6c00150  lwc1        $f0, 0x150($s6)
    ctx->pc = 0x193f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f6c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x193f6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193f70: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x193f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193f74: 0xc6c00154  lwc1        $f0, 0x154($s6)
    ctx->pc = 0x193f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x193f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193f7c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193f80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193f88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x193f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f8c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x193f8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x193f90: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193f94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f98: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193f9c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193fa0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193fa4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193fa8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193fac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x193facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193fb0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x193fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x193fb4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193fb8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193fbc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193fc0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x193fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x193fc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193fcc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193fd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193fd4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193fd8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x193fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x193fdc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193fe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193fe4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193fe8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193fec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x193fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ff0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x193ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x193ff4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193ff8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193ffc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194000: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x194000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x194004: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x194004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x194008: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19400c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194010: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194014: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x194014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x194018: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x194018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19401c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19401cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x194020: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194028: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19402c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x19402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x194030: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x194030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194034: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19403c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19403cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194044: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194048: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x194048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x19404c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x194050: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194054: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x194054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x194058: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x194058u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x19405c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19405cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194064: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x194064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x194068: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x194068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x19406c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19406cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x194070u;
}
