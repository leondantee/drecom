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

// Function: entry_0029d108
// Address: 0x29d108 - 0x29d190
void entry_0029d108_0x29d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d108_0x29d108");
#endif

    ctx->pc = 0x29d108u;

    // 0x29d108: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29d108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d10c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d110: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d114: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d118: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x29d118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d11c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d120: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d124: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d128: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d12c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d130: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d134: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x29d134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d138: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x29d138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x29d13c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x29d13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x29d140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29d140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d144: 0x0  nop
    ctx->pc = 0x29d144u;
    // NOP
    // 0x29d148: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d14c: 0x0  nop
    ctx->pc = 0x29d14cu;
    // NOP
    // 0x29d150: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x29D150u;
    {
        const bool branch_taken_0x29d150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d150) {
            ctx->pc = 0x29D210u;
            return;
        }
    }
    ctx->pc = 0x29D158u;
    // 0x29d158: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29d158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d15c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d160: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d164: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29d164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d168: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d16c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29d16cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d170: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d174: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d178: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d17c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d17cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d180: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d184: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d188: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x29D188u;
    {
        const bool branch_taken_0x29d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d188) {
            ctx->pc = 0x29D210u;
            return;
        }
    }
    ctx->pc = 0x29D190u;
}
