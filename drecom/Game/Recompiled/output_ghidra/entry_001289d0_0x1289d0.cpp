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

// Function: entry_001289d0
// Address: 0x1289d0 - 0x128a34
void entry_001289d0_0x1289d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001289d0_0x1289d0");
#endif

    ctx->pc = 0x1289d0u;

    // 0x1289d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1289d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1289d4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1289d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1289d8: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x1289d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x1289dc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1289dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1289e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1289e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1289e4: 0x0  nop
    ctx->pc = 0x1289e4u;
    // NOP
    // 0x1289e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1289e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1289ec: 0x0  nop
    ctx->pc = 0x1289ecu;
    // NOP
    // 0x1289f0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1289F0u;
    {
        const bool branch_taken_0x1289f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1289f0) {
            ctx->pc = 0x128A3Cu;
            return;
        }
    }
    ctx->pc = 0x1289F8u;
    // 0x1289f8: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1289f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1289fc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1289FCu;
    {
        const bool branch_taken_0x1289fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289fc) {
            ctx->pc = 0x128A34u;
            return;
        }
    }
    ctx->pc = 0x128A04u;
    // 0x128a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128a08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128a0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128a10: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x128a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x128a14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128a18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x128a1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128a20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128a24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128a28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x128a2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128a30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x128a34u;
}
