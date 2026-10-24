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

// Function: entry_0023ac48
// Address: 0x23ac48 - 0x23ac88
void entry_0023ac48_0x23ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ac48_0x23ac48");
#endif

    switch (ctx->pc) {
        case 0x23ac50u: goto label_23ac50;
        default: break;
    }

    ctx->pc = 0x23ac48u;

    // 0x23ac48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AC48u;
    SET_GPR_U32(ctx, 31, 0x23AC50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AC48u, 0x23AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC50u;
label_23ac50:
    // 0x23ac50: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23ac50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23ac54: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x23ac54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x23ac58: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23AC58u;
    {
        const bool branch_taken_0x23ac58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ac58) {
            ctx->pc = 0x23AC88u;
            return;
        }
    }
    ctx->pc = 0x23AC60u;
    // 0x23ac60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac64: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x23ac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ac68: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x23ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x23ac6c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x23ac6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x23ac70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23ac70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ac74: 0x0  nop
    ctx->pc = 0x23ac74u;
    // NOP
    // 0x23ac78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ac78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ac7c: 0x0  nop
    ctx->pc = 0x23ac7cu;
    // NOP
    // 0x23ac80: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x23AC80u;
    {
        const bool branch_taken_0x23ac80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ac80) {
            ctx->pc = 0x23ACB8u;
            return;
        }
    }
    ctx->pc = 0x23AC88u;
}
