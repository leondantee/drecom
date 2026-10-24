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

// Function: entry_0019837c
// Address: 0x19837c - 0x1983e4
void entry_0019837c_0x19837c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019837c_0x19837c");
#endif

    ctx->pc = 0x19837cu;

    // 0x19837c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198380: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x198380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198384: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x198384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x198388: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x198388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x19838c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19838cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198390: 0x0  nop
    ctx->pc = 0x198390u;
    // NOP
    // 0x198394: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198398: 0x0  nop
    ctx->pc = 0x198398u;
    // NOP
    // 0x19839c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x19839Cu;
    {
        const bool branch_taken_0x19839c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19839c) {
            ctx->pc = 0x1983E4u;
            return;
        }
    }
    ctx->pc = 0x1983A4u;
    // 0x1983a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1983a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1983a8: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x1983a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x1983ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1983ACu;
    {
        const bool branch_taken_0x1983ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1983ac) {
            ctx->pc = 0x1983E4u;
            return;
        }
    }
    ctx->pc = 0x1983B4u;
    // 0x1983b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1983b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1983b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1983b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1983bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1983bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1983c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1983c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1983c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1983c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1983c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1983c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1983cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1983ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1983d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1983d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1983d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1983d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1983d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1983d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1983dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1983dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1983e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1983e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1983e4u;
}
