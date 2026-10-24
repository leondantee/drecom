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

// Function: entry_001d77fc
// Address: 0x1d77fc - 0x1d7870
void entry_001d77fc_0x1d77fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d77fc_0x1d77fc");
#endif

    ctx->pc = 0x1d77fcu;

    // 0x1d77fc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1d77fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7800: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d7800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7804: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7804u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7808: 0x0  nop
    ctx->pc = 0x1d7808u;
    // NOP
    // 0x1d780c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1D780Cu;
    {
        const bool branch_taken_0x1d780c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d780c) {
            ctx->pc = 0x1D7870u;
            return;
        }
    }
    ctx->pc = 0x1D7814u;
    // 0x1d7814: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1d7814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7818: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d7818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d781c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d781cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7820: 0x0  nop
    ctx->pc = 0x1d7820u;
    // NOP
    // 0x1d7824: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7824u;
    {
        const bool branch_taken_0x1d7824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7824) {
            ctx->pc = 0x1D7870u;
            return;
        }
    }
    ctx->pc = 0x1D782Cu;
    // 0x1d782c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1d782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7830: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7834: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7838: 0x0  nop
    ctx->pc = 0x1d7838u;
    // NOP
    // 0x1d783c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1D783Cu;
    {
        const bool branch_taken_0x1d783c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d783c) {
            ctx->pc = 0x1D7870u;
            return;
        }
    }
    ctx->pc = 0x1D7844u;
    // 0x1d7844: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d7844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7848: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x1d7848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1d784c: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x1d784cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d7850: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d7850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d7854: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d7854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d7858: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d7858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d785c: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x1d785cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d7860: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x1d7860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d7864: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d7864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7868: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1d7868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d786c: 0x0  nop
    ctx->pc = 0x1d786cu;
    // NOP
    ctx->pc = 0x1d7870u;
}
