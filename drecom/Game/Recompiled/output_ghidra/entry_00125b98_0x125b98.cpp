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

// Function: entry_00125b98
// Address: 0x125b98 - 0x125bfc
void entry_00125b98_0x125b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125b98_0x125b98");
#endif

    ctx->pc = 0x125b98u;

    // 0x125b98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b9c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125ba0: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x125ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
    // 0x125ba4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x125ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x125ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125bac: 0x0  nop
    ctx->pc = 0x125bacu;
    // NOP
    // 0x125bb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125bb4: 0x0  nop
    ctx->pc = 0x125bb4u;
    // NOP
    // 0x125bb8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x125BB8u;
    {
        const bool branch_taken_0x125bb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125bb8) {
            ctx->pc = 0x125C04u;
            return;
        }
    }
    ctx->pc = 0x125BC0u;
    // 0x125bc0: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x125bc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125bc4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x125BC4u;
    {
        const bool branch_taken_0x125bc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125bc4) {
            ctx->pc = 0x125BFCu;
            return;
        }
    }
    ctx->pc = 0x125BCCu;
    // 0x125bcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125bd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125bd4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125bd8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x125bdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125be0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125be4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125be8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125bec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125bf0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125bf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125bf8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x125bfcu;
}
