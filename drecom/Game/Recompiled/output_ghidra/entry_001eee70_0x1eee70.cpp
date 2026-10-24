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

// Function: entry_001eee70
// Address: 0x1eee70 - 0x1eeefc
void entry_001eee70_0x1eee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eee70_0x1eee70");
#endif

    switch (ctx->pc) {
        case 0x1eeee0u: goto label_1eeee0;
        default: break;
    }

    ctx->pc = 0x1eee70u;

    // 0x1eee70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1eee70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eee74: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1eee74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1eee78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eee7c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1eee7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eee80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eee84: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1eee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eee88: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1eee88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1eee8c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1eee8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1eee90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eee90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eee94: 0x0  nop
    ctx->pc = 0x1eee94u;
    // NOP
    // 0x1eee98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eee98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eee9c: 0x0  nop
    ctx->pc = 0x1eee9cu;
    // NOP
    // 0x1eeea0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EEEA0u;
    {
        const bool branch_taken_0x1eeea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eeea0) {
            ctx->pc = 0x1EEEFCu;
            return;
        }
    }
    ctx->pc = 0x1EEEA8u;
    // 0x1eeea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eeea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeeac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeeb0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1eeeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eeeb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eeeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeeb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeebc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1eeebcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eeec0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeec4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1eeec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eeec8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeecc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1eeeccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eeed0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeed4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eeed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eeed8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EEED8u;
    SET_GPR_U32(ctx, 31, 0x1EEEE0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EEED8u, 0x1EEEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEE0u;
label_1eeee0:
    // 0x1eeee0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1eeee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eeee4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1eeee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1eeee8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1eeee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1eeeec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1eeeecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1eeef0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1eeef0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1eeef4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eeef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeef8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1eeef8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1eeefcu;
}
