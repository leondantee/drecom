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

// Function: entry_00194de8
// Address: 0x194de8 - 0x194f10
void entry_00194de8_0x194de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194de8_0x194de8");
#endif

    ctx->pc = 0x194de8u;

    // 0x194de8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194dec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x194decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x194df0: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x194df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x194df4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194dfc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x194dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x194e00: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x194e00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x194e04: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x194e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194e08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x194e08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194e0c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e14: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e18: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x194e18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x194e1c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x194e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194e20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x194e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194e24: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194e2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e34: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x194e34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x194e38: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e40: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x194e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194e48: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x194e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x194e4c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e54: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e58: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x194e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x194e5c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e64: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e68: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x194e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194e6c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x194e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x194e70: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e78: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x194e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194e80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194e88: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e90: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e94: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x194e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x194e98: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194ea0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194ea4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194ea8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x194ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194eac: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x194eacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x194eb0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194eb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194eb8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194ebc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194ec0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x194ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x194ec4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194ec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194ecc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194ed0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194ed4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x194ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194ed8: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x194ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x194edc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194ee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194ee4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194ee8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194eec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x194eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194ef0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194ef8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194f00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194f04: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194f08: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x194f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x194f0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x194f10u;
}
