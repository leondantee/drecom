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

// Function: entry_00364300
// Address: 0x364300 - 0x364360
void entry_00364300_0x364300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364300_0x364300");
#endif

    ctx->pc = 0x364300u;

    // 0x364300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364304: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x364304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364308: 0x3c034538  lui         $v1, 0x4538
    ctx->pc = 0x364308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17720 << 16));
    // 0x36430c: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x36430cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x364310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364314: 0x0  nop
    ctx->pc = 0x364314u;
    // NOP
    // 0x364318: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x364318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36431c: 0x0  nop
    ctx->pc = 0x36431cu;
    // NOP
    // 0x364320: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x364320u;
    {
        const bool branch_taken_0x364320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x364320) {
            ctx->pc = 0x364360u;
            return;
        }
    }
    ctx->pc = 0x364328u;
    // 0x364328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36432c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364330: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x364334: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x364334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364338: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36433c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36433cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364344: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36434c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36434cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364350: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364354: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364358: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x364358u;
    {
        const bool branch_taken_0x364358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364358) {
            ctx->pc = 0x364360u;
            return;
        }
    }
    ctx->pc = 0x364360u;
}
