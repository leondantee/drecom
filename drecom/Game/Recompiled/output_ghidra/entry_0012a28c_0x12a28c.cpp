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

// Function: entry_0012a28c
// Address: 0x12a28c - 0x12a310
void entry_0012a28c_0x12a28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a28c_0x12a28c");
#endif

    switch (ctx->pc) {
        case 0x12a2bcu: goto label_12a2bc;
        default: break;
    }

    ctx->pc = 0x12a28cu;

    // 0x12a28c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a290: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a294: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x12a294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
    // 0x12a298: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12a298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x12a29c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a29cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a2a0: 0x0  nop
    ctx->pc = 0x12a2a0u;
    // NOP
    // 0x12a2a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a2a8: 0x0  nop
    ctx->pc = 0x12a2a8u;
    // NOP
    // 0x12a2ac: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x12A2ACu;
    {
        const bool branch_taken_0x12a2ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a2ac) {
            ctx->pc = 0x12A348u;
            return;
        }
    }
    ctx->pc = 0x12A2B4u;
    // 0x12a2b4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12A2B4u;
    SET_GPR_U32(ctx, 31, 0x12A2BCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A2B4u, 0x12A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A2BCu;
label_12a2bc:
    // 0x12a2bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a2c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12a2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a2c4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12A2C4u;
    {
        const bool branch_taken_0x12a2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a2c4) {
            ctx->pc = 0x12A310u;
            return;
        }
    }
    ctx->pc = 0x12A2CCu;
    // 0x12a2cc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12a2ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12a2d0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12A2D0u;
    {
        const bool branch_taken_0x12a2d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a2d0) {
            ctx->pc = 0x12A340u;
            return;
        }
    }
    ctx->pc = 0x12A2D8u;
    // 0x12a2d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a2dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a2e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a2e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12a2e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a2ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a2f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a2f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a2f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a2fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a304: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12a308: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12A308u;
    {
        const bool branch_taken_0x12a308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a308) {
            ctx->pc = 0x12A340u;
            return;
        }
    }
    ctx->pc = 0x12A310u;
}
