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

// Function: entry_00262ea8
// Address: 0x262ea8 - 0x262f2c
void entry_00262ea8_0x262ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262ea8_0x262ea8");
#endif

    ctx->pc = 0x262ea8u;

    // 0x262ea8: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x262ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x262eac: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x262eacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262eb0: 0x25cc0002  addiu       $t4, $t6, 0x2
    ctx->pc = 0x262eb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x262eb4: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x262eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262eb8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x262eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x262ebc: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x262ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x262ec0: 0x246d0002  addiu       $t5, $v1, 0x2
    ctx->pc = 0x262ec0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x262ec4: 0x25a80003  addiu       $t0, $t5, 0x3
    ctx->pc = 0x262ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x262ec8: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x262ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x262ecc: 0x1036824  and         $t5, $t0, $v1
    ctx->pc = 0x262eccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x262ed0: 0x3148ffff  andi        $t0, $t2, 0xFFFF
    ctx->pc = 0x262ed0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262ed4: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x262ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x262ed8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x262ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x262edc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x262edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262ee0: 0x1a37021  addu        $t6, $t5, $v1
    ctx->pc = 0x262ee0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x262ee4: 0x3149ffff  andi        $t1, $t2, 0xFFFF
    ctx->pc = 0x262ee4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262ee8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x262ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262eec: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x262eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262ef0: 0x0  nop
    ctx->pc = 0x262ef0u;
    // NOP
    // 0x262ef4: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x262EF4u;
    {
        const bool branch_taken_0x262ef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262ef4) {
            ctx->pc = 0x262FF8u;
            return;
        }
    }
    ctx->pc = 0x262EFCu;
    // 0x262efc: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x262efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262f00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262f04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x262f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x262f08: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x262f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x262f0c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x262f0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262f10: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x262F10u;
    {
        const bool branch_taken_0x262f10 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x262f10) {
            ctx->pc = 0x262F2Cu;
            return;
        }
    }
    ctx->pc = 0x262F18u;
    // 0x262f18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x262f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262f1c: 0x0  nop
    ctx->pc = 0x262f1cu;
    // NOP
    // 0x262f20: 0x468002e0  cvt.s.w     $f11, $f0
    ctx->pc = 0x262f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x262f24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262F24u;
    {
        const bool branch_taken_0x262f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262f24) {
            ctx->pc = 0x262F48u;
            return;
        }
    }
    ctx->pc = 0x262F2Cu;
}
