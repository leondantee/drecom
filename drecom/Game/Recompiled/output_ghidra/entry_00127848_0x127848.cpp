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

// Function: entry_00127848
// Address: 0x127848 - 0x1278ac
void entry_00127848_0x127848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127848_0x127848");
#endif

    ctx->pc = 0x127848u;

    // 0x127848: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12784c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127850: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x127850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
    // 0x127854: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x127854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x127858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12785c: 0x0  nop
    ctx->pc = 0x12785cu;
    // NOP
    // 0x127860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127864: 0x0  nop
    ctx->pc = 0x127864u;
    // NOP
    // 0x127868: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x127868u;
    {
        const bool branch_taken_0x127868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127868) {
            ctx->pc = 0x1278B4u;
            return;
        }
    }
    ctx->pc = 0x127870u;
    // 0x127870: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x127870u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x127874: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x127874u;
    {
        const bool branch_taken_0x127874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127874) {
            ctx->pc = 0x1278ACu;
            return;
        }
    }
    ctx->pc = 0x12787Cu;
    // 0x12787c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127880: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127884: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127888: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x127888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12788c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127890: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127894: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127898: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12789c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1278a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1278a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1278a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1278a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1278a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1278a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1278acu;
}
