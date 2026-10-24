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

// Function: entry_00345280
// Address: 0x345280 - 0x3452d4
void entry_00345280_0x345280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345280_0x345280");
#endif

    ctx->pc = 0x345280u;

    // 0x345280: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345284: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x345284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345288: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x345288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34528c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34528cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345290: 0x0  nop
    ctx->pc = 0x345290u;
    // NOP
    // 0x345294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x345294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345298: 0x0  nop
    ctx->pc = 0x345298u;
    // NOP
    // 0x34529c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x34529Cu;
    {
        const bool branch_taken_0x34529c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34529c) {
            ctx->pc = 0x3452D4u;
            return;
        }
    }
    ctx->pc = 0x3452A4u;
    // 0x3452a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3452a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3452a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3452acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3452b0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3452b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3452b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3452b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3452bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3452c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3452c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3452c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3452cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3452d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3452d4u;
}
