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

// Function: entry_0026fd2c
// Address: 0x26fd2c - 0x26fd90
void entry_0026fd2c_0x26fd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026fd2c_0x26fd2c");
#endif

    switch (ctx->pc) {
        case 0x26fd40u: goto label_26fd40;
        case 0x26fd4cu: goto label_26fd4c;
        default: break;
    }

    ctx->pc = 0x26fd2cu;

    // 0x26fd2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fd2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fd30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fd34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fd34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fd38: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26FD38u;
    SET_GPR_U32(ctx, 31, 0x26FD40u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26FD38u, 0x26FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD40u;
label_26fd40:
    // 0x26fd40: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26fd40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fd44: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26FD44u;
    SET_GPR_U32(ctx, 31, 0x26FD4Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26FD44u, 0x26FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD4Cu;
label_26fd4c:
    // 0x26fd4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fd50: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x26fd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fd54: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x26fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x26fd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26fd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fd5c: 0x0  nop
    ctx->pc = 0x26fd5cu;
    // NOP
    // 0x26fd60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26fd60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fd64: 0x0  nop
    ctx->pc = 0x26fd64u;
    // NOP
    // 0x26fd68: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x26FD68u;
    {
        const bool branch_taken_0x26fd68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fd68) {
            ctx->pc = 0x26FD90u;
            return;
        }
    }
    ctx->pc = 0x26FD70u;
    // 0x26fd70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fd74: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26fd74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26fd78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FD78u;
    {
        const bool branch_taken_0x26fd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fd78) {
            ctx->pc = 0x26FD90u;
            return;
        }
    }
    ctx->pc = 0x26FD80u;
    // 0x26fd80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fd84: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26fd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26fd88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26fd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26fd8c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26fd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x26fd90u;
}
