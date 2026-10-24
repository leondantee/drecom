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

// Function: entry_0023e990
// Address: 0x23e990 - 0x23e9d0
void entry_0023e990_0x23e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e990_0x23e990");
#endif

    switch (ctx->pc) {
        case 0x23e998u: goto label_23e998;
        default: break;
    }

    ctx->pc = 0x23e990u;

    // 0x23e990: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E990u;
    SET_GPR_U32(ctx, 31, 0x23E998u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E990u, 0x23E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E998u;
label_23e998:
    // 0x23e998: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23e998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e99c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x23e99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x23e9a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23E9A0u;
    {
        const bool branch_taken_0x23e9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e9a0) {
            ctx->pc = 0x23E9D0u;
            return;
        }
    }
    ctx->pc = 0x23E9A8u;
    // 0x23e9a8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e9ac: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x23e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e9b0: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x23e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x23e9b4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x23e9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x23e9b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e9b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e9bc: 0x0  nop
    ctx->pc = 0x23e9bcu;
    // NOP
    // 0x23e9c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e9c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e9c4: 0x0  nop
    ctx->pc = 0x23e9c4u;
    // NOP
    // 0x23e9c8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x23E9C8u;
    {
        const bool branch_taken_0x23e9c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e9c8) {
            ctx->pc = 0x23EA00u;
            return;
        }
    }
    ctx->pc = 0x23E9D0u;
}
