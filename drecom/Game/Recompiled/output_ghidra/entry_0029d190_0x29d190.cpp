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

// Function: entry_0029d190
// Address: 0x29d190 - 0x29d210
void entry_0029d190_0x29d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d190_0x29d190");
#endif

    ctx->pc = 0x29d190u;

    // 0x29d190: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29d190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d194: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d198: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d19c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x29d1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d1a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d1ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d1b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d1bc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x29d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d1c0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x29d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x29d1c4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x29d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x29d1c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29d1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d1cc: 0x0  nop
    ctx->pc = 0x29d1ccu;
    // NOP
    // 0x29d1d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d1d4: 0x0  nop
    ctx->pc = 0x29d1d4u;
    // NOP
    // 0x29d1d8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x29D1D8u;
    {
        const bool branch_taken_0x29d1d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d1d8) {
            ctx->pc = 0x29D210u;
            return;
        }
    }
    ctx->pc = 0x29D1E0u;
    // 0x29d1e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d1e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d1ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d1f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29d1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d1f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d200: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d204: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d204u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d208: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d20c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29d210u;
}
