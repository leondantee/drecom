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

// Function: entry_00127b8c
// Address: 0x127b8c - 0x127c08
void entry_00127b8c_0x127b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127b8c_0x127b8c");
#endif

    ctx->pc = 0x127b8cu;

    // 0x127b8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127b90: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x127b90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x127b94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x127b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x127b98: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x127b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x127b9c: 0x1060012f  beqz        $v1, . + 4 + (0x12F << 2)
    ctx->pc = 0x127B9Cu;
    {
        const bool branch_taken_0x127b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b9c) {
            ctx->pc = 0x12805Cu;
            return;
        }
    }
    ctx->pc = 0x127BA4u;
    // 0x127ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127ba8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127bac: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x127bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x127bb0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x127bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x127bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127bb8: 0x0  nop
    ctx->pc = 0x127bb8u;
    // NOP
    // 0x127bbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127bc0: 0x0  nop
    ctx->pc = 0x127bc0u;
    // NOP
    // 0x127bc4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x127BC4u;
    {
        const bool branch_taken_0x127bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127bc4) {
            ctx->pc = 0x127C10u;
            return;
        }
    }
    ctx->pc = 0x127BCCu;
    // 0x127bcc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x127bccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x127bd0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x127BD0u;
    {
        const bool branch_taken_0x127bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127bd0) {
            ctx->pc = 0x127C08u;
            return;
        }
    }
    ctx->pc = 0x127BD8u;
    // 0x127bd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127bdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127be0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127be4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x127be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x127be8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127bec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127bf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127bf4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127bf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127bfc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127c00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127c04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x127c08u;
}
