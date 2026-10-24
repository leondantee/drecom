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

// Function: entry_001d7c0c
// Address: 0x1d7c0c - 0x1d7c80
void entry_001d7c0c_0x1d7c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7c0c_0x1d7c0c");
#endif

    ctx->pc = 0x1d7c0cu;

    // 0x1d7c0c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1d7c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7c10: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d7c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7c14: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7c14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7c18: 0x0  nop
    ctx->pc = 0x1d7c18u;
    // NOP
    // 0x1d7c1c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1D7C1Cu;
    {
        const bool branch_taken_0x1d7c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7c1c) {
            ctx->pc = 0x1D7C80u;
            return;
        }
    }
    ctx->pc = 0x1D7C24u;
    // 0x1d7c24: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1d7c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7c28: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d7c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7c2c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7c2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7c30: 0x0  nop
    ctx->pc = 0x1d7c30u;
    // NOP
    // 0x1d7c34: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7C34u;
    {
        const bool branch_taken_0x1d7c34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7c34) {
            ctx->pc = 0x1D7C80u;
            return;
        }
    }
    ctx->pc = 0x1D7C3Cu;
    // 0x1d7c3c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1d7c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7c40: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d7c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7c44: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7c44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7c48: 0x0  nop
    ctx->pc = 0x1d7c48u;
    // NOP
    // 0x1d7c4c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1D7C4Cu;
    {
        const bool branch_taken_0x1d7c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7c4c) {
            ctx->pc = 0x1D7C80u;
            return;
        }
    }
    ctx->pc = 0x1D7C54u;
    // 0x1d7c54: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d7c54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c58: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x1d7c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1d7c5c: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x1d7c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d7c60: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d7c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d7c64: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d7c68: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d7c6c: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x1d7c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d7c70: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x1d7c70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d7c74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7c78: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1d7c78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7c7c: 0x0  nop
    ctx->pc = 0x1d7c7cu;
    // NOP
    ctx->pc = 0x1d7c80u;
}
