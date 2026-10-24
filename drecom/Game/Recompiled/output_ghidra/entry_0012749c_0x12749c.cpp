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

// Function: entry_0012749c
// Address: 0x12749c - 0x127518
void entry_0012749c_0x12749c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012749c_0x12749c");
#endif

    ctx->pc = 0x12749cu;

    // 0x12749c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1274a0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1274a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1274a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1274a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1274a8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1274a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1274ac: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x1274ACu;
    {
        const bool branch_taken_0x1274ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1274ac) {
            ctx->pc = 0x127718u;
            return;
        }
    }
    ctx->pc = 0x1274B4u;
    // 0x1274b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1274b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1274b8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1274b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1274bc: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x1274bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x1274c0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1274c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1274c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1274c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1274c8: 0x0  nop
    ctx->pc = 0x1274c8u;
    // NOP
    // 0x1274cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1274ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1274d0: 0x0  nop
    ctx->pc = 0x1274d0u;
    // NOP
    // 0x1274d4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1274D4u;
    {
        const bool branch_taken_0x1274d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1274d4) {
            ctx->pc = 0x127520u;
            return;
        }
    }
    ctx->pc = 0x1274DCu;
    // 0x1274dc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1274dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1274e0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1274E0u;
    {
        const bool branch_taken_0x1274e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1274e0) {
            ctx->pc = 0x127518u;
            return;
        }
    }
    ctx->pc = 0x1274E8u;
    // 0x1274e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1274e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1274ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1274ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1274f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1274f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1274f4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1274f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1274f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1274f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1274fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1274fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127500: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127504: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127508: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12750c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12750cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127510: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127514: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x127518u;
}
