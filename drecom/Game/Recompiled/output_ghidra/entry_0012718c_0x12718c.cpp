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

// Function: entry_0012718c
// Address: 0x12718c - 0x1271f0
void entry_0012718c_0x12718c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012718c_0x12718c");
#endif

    ctx->pc = 0x12718cu;

    // 0x12718c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127190: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127194: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x127194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
    // 0x127198: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x127198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x12719c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12719cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1271a0: 0x0  nop
    ctx->pc = 0x1271a0u;
    // NOP
    // 0x1271a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1271a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1271a8: 0x0  nop
    ctx->pc = 0x1271a8u;
    // NOP
    // 0x1271ac: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1271ACu;
    {
        const bool branch_taken_0x1271ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1271ac) {
            ctx->pc = 0x1271F8u;
            return;
        }
    }
    ctx->pc = 0x1271B4u;
    // 0x1271b4: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1271b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1271b8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1271B8u;
    {
        const bool branch_taken_0x1271b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271b8) {
            ctx->pc = 0x1271F0u;
            return;
        }
    }
    ctx->pc = 0x1271C0u;
    // 0x1271c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1271c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1271c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1271c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1271c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1271cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1271ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1271d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1271d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1271d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1271d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1271dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1271dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1271e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1271e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1271e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1271e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1271ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1271ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1271f0u;
}
