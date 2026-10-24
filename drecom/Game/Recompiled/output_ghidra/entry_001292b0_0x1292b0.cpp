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

// Function: entry_001292b0
// Address: 0x1292b0 - 0x129334
void entry_001292b0_0x1292b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001292b0_0x1292b0");
#endif

    switch (ctx->pc) {
        case 0x1292e0u: goto label_1292e0;
        default: break;
    }

    ctx->pc = 0x1292b0u;

    // 0x1292b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1292b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1292b4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1292b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1292b8: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x1292b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
    // 0x1292bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1292bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1292c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1292c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1292c4: 0x0  nop
    ctx->pc = 0x1292c4u;
    // NOP
    // 0x1292c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1292c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1292cc: 0x0  nop
    ctx->pc = 0x1292ccu;
    // NOP
    // 0x1292d0: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x1292D0u;
    {
        const bool branch_taken_0x1292d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1292d0) {
            ctx->pc = 0x1293A4u;
            return;
        }
    }
    ctx->pc = 0x1292D8u;
    // 0x1292d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1292D8u;
    SET_GPR_U32(ctx, 31, 0x1292E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1292D8u, 0x1292E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292E0u;
label_1292e0:
    // 0x1292e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1292e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1292e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1292e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1292e8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1292E8u;
    {
        const bool branch_taken_0x1292e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292e8) {
            ctx->pc = 0x129334u;
            return;
        }
    }
    ctx->pc = 0x1292F0u;
    // 0x1292f0: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1292f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1292f4: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1292F4u;
    {
        const bool branch_taken_0x1292f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292f4) {
            ctx->pc = 0x12939Cu;
            return;
        }
    }
    ctx->pc = 0x1292FCu;
    // 0x1292fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1292fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129304: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129308: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x129308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12930c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129310: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129318: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12931c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129320: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129324: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129328: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12932c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x12932Cu;
    {
        const bool branch_taken_0x12932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12932c) {
            ctx->pc = 0x12939Cu;
            return;
        }
    }
    ctx->pc = 0x129334u;
}
