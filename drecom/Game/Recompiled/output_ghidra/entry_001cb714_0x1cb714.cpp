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

// Function: entry_001cb714
// Address: 0x1cb714 - 0x1cb7a8
void entry_001cb714_0x1cb714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb714_0x1cb714");
#endif

    ctx->pc = 0x1cb714u;

    // 0x1cb714: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb718: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cb718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb71c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1cb720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb724: 0x0  nop
    ctx->pc = 0x1cb724u;
    // NOP
    // 0x1cb728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb72c: 0x0  nop
    ctx->pc = 0x1cb72cu;
    // NOP
    // 0x1cb730: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x1CB730u;
    {
        const bool branch_taken_0x1cb730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb730) {
            ctx->pc = 0x1CB824u;
            return;
        }
    }
    ctx->pc = 0x1CB738u;
    // 0x1cb738: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb73c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cb73cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cb740: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1CB740u;
    {
        const bool branch_taken_0x1cb740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb740) {
            ctx->pc = 0x1CB824u;
            return;
        }
    }
    ctx->pc = 0x1CB748u;
    // 0x1cb748: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb74c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1cb74cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb750: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cb750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cb754: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1cb754u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cb758: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x1cb758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1cb75c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB75Cu;
    {
        const bool branch_taken_0x1cb75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb75c) {
            ctx->pc = 0x1CB7A8u;
            return;
        }
    }
    ctx->pc = 0x1CB764u;
    // 0x1cb764: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb768: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb76c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cb76cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cb770: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1cb770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1cb774: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1cb774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb778: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x1cb778u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cb77c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1cb77cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb780: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1cb780u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb784: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1cb784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb788: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x1cb788u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb78c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb790: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cb790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cb794: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cb794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb798: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb79c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cb79cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cb7a0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1CB7A0u;
    {
        const bool branch_taken_0x1cb7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7a0) {
            ctx->pc = 0x1CB860u;
            return;
        }
    }
    ctx->pc = 0x1CB7A8u;
}
