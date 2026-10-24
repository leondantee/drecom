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

// Function: Em06_R1_br_run
// Address: 0x198520 - 0x1985d4
void Em06_R1_br_run_0x198520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_br_run_0x198520");
#endif

    ctx->pc = 0x198520u;

    // 0x198520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198524: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x198524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x198528: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x198528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19852c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x19852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198530: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x198530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x198534: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x198534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x198538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19853c: 0x0  nop
    ctx->pc = 0x19853cu;
    // NOP
    // 0x198540: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198544: 0x0  nop
    ctx->pc = 0x198544u;
    // NOP
    // 0x198548: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x198548u;
    {
        const bool branch_taken_0x198548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198548) {
            ctx->pc = 0x198580u;
            goto label_198580;
        }
    }
    ctx->pc = 0x198550u;
    // 0x198550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198554: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x198554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198558: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19855c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19855cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198560: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x198560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198564: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198568: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x198568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19856c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19856cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198570: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x198570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198574: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198578: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x198578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19857c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19857cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_198580:
    // 0x198580: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198584: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x198588: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x198588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x19858c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19858cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x198590: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x198590u;
    {
        const bool branch_taken_0x198590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198590) {
            ctx->pc = 0x1985C8u;
            goto label_1985c8;
        }
    }
    ctx->pc = 0x198598u;
    // 0x198598: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19859c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x19859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1985a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1985a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1985a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1985a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1985acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1985b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1985b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1985b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1985b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1985b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1985bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1985c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1985c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1985c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1985c8:
    // 0x1985c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1985c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1985cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1985CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1985CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1985D4u;
}
