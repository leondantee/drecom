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

// Function: entry_00129acc
// Address: 0x129acc - 0x129b50
void entry_00129acc_0x129acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129acc_0x129acc");
#endif

    switch (ctx->pc) {
        case 0x129afcu: goto label_129afc;
        default: break;
    }

    ctx->pc = 0x129accu;

    // 0x129acc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129ad0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129ad4: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x129ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
    // 0x129ad8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x129ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x129adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129ae0: 0x0  nop
    ctx->pc = 0x129ae0u;
    // NOP
    // 0x129ae4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129ae8: 0x0  nop
    ctx->pc = 0x129ae8u;
    // NOP
    // 0x129aec: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x129AECu;
    {
        const bool branch_taken_0x129aec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129aec) {
            ctx->pc = 0x129B88u;
            return;
        }
    }
    ctx->pc = 0x129AF4u;
    // 0x129af4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x129AF4u;
    SET_GPR_U32(ctx, 31, 0x129AFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129AF4u, 0x129AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AFCu;
label_129afc:
    // 0x129afc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x129b00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x129b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x129b04: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x129B04u;
    {
        const bool branch_taken_0x129b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b04) {
            ctx->pc = 0x129B50u;
            return;
        }
    }
    ctx->pc = 0x129B0Cu;
    // 0x129b0c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x129b0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x129b10: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x129B10u;
    {
        const bool branch_taken_0x129b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b10) {
            ctx->pc = 0x129B80u;
            return;
        }
    }
    ctx->pc = 0x129B18u;
    // 0x129b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129b1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129b24: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x129b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x129b28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129b30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129b38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x129b48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x129B48u;
    {
        const bool branch_taken_0x129b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b48) {
            ctx->pc = 0x129B80u;
            return;
        }
    }
    ctx->pc = 0x129B50u;
}
