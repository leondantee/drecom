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

// Function: entry_00193ac0
// Address: 0x193ac0 - 0x193bd8
void entry_00193ac0_0x193ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193ac0_0x193ac0");
#endif

    ctx->pc = 0x193ac0u;

    // 0x193ac0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x193ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193ac4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x193ac4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193ac8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193acc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193ad0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193ad4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x193ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x193ad8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x193ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193adc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x193adcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193ae0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193ae4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193ae8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193aec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193af0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x193af0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x193af4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193af8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x193af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193afc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x193afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193b00: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b08: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x193b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b10: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x193b10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x193b14: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b1c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b20: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193b24: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b2c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x193b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x193b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x193b38: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b44: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x193b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x193b48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193b50: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b58: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b5c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x193b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x193b60: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193b68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b6c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x193b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b74: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x193b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x193b78: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193b80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b88: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193b8c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193b94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b98: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x193b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ba0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193ba4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193bac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193bb0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193bb4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x193bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x193bb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193bc0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193bc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193bc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193bcc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193bd0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x193bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x193bd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x193bd8u;
}
