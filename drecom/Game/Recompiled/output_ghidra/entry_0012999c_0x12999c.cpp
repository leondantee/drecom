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

// Function: entry_0012999c
// Address: 0x12999c - 0x129a10
void entry_0012999c_0x12999c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012999c_0x12999c");
#endif

    ctx->pc = 0x12999cu;

    // 0x12999c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1299a0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1299a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1299a4: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x1299a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x1299a8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1299a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1299ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1299acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1299b0: 0x0  nop
    ctx->pc = 0x1299b0u;
    // NOP
    // 0x1299b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1299b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1299b8: 0x0  nop
    ctx->pc = 0x1299b8u;
    // NOP
    // 0x1299bc: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x1299BCu;
    {
        const bool branch_taken_0x1299bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1299bc) {
            ctx->pc = 0x129ACCu;
            return;
        }
    }
    ctx->pc = 0x1299C4u;
    // 0x1299c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1299c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1299c8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1299c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1299cc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1299ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1299d0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1299D0u;
    {
        const bool branch_taken_0x1299d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1299d0) {
            ctx->pc = 0x129A10u;
            return;
        }
    }
    ctx->pc = 0x1299D8u;
    // 0x1299d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1299d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1299dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1299dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1299e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1299e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1299e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1299e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1299e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1299e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1299ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1299ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1299f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1299f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1299f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1299f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1299f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1299f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1299fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1299fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129a00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129a04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x129a08: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x129A08u;
    {
        const bool branch_taken_0x129a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a08) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x129A10u;
}
