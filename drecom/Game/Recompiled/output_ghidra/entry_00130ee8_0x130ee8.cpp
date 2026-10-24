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

// Function: entry_00130ee8
// Address: 0x130ee8 - 0x130f78
void entry_00130ee8_0x130ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130ee8_0x130ee8");
#endif

    switch (ctx->pc) {
        case 0x130f38u: goto label_130f38;
        default: break;
    }

    ctx->pc = 0x130ee8u;

    // 0x130ee8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130eec: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x130eecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x130ef0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x130ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x130ef4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x130ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x130ef8: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x130EF8u;
    {
        const bool branch_taken_0x130ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130ef8) {
            ctx->pc = 0x130FE4u;
            return;
        }
    }
    ctx->pc = 0x130F00u;
    // 0x130f00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f04: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x130f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130f08: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x130f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x130f0c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x130f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x130f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x130f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130f14: 0x0  nop
    ctx->pc = 0x130f14u;
    // NOP
    // 0x130f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130f1c: 0x0  nop
    ctx->pc = 0x130f1cu;
    // NOP
    // 0x130f20: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x130F20u;
    {
        const bool branch_taken_0x130f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130f20) {
            ctx->pc = 0x130FE4u;
            return;
        }
    }
    ctx->pc = 0x130F28u;
    // 0x130f28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x130f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130f30: 0xc05d25c  jal         func_174970
    ctx->pc = 0x130F30u;
    SET_GPR_U32(ctx, 31, 0x130F38u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x130F30u, 0x130F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F38u;
label_130f38:
    // 0x130f38: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x130F38u;
    {
        const bool branch_taken_0x130f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130f38) {
            ctx->pc = 0x130FE4u;
            return;
        }
    }
    ctx->pc = 0x130F40u;
    // 0x130f40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130f44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x130f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x130f4c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x130f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x130f50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x130f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130f58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130f60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130f64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130f68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x130f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x130f70: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x130F70u;
    {
        const bool branch_taken_0x130f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130f70) {
            ctx->pc = 0x130FE4u;
            return;
        }
    }
    ctx->pc = 0x130F78u;
}
