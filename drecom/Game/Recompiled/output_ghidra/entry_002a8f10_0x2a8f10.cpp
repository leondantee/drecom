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

// Function: entry_002a8f10
// Address: 0x2a8f10 - 0x2a8f90
void entry_002a8f10_0x2a8f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8f10_0x2a8f10");
#endif

    ctx->pc = 0x2a8f10u;

    // 0x2a8f10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f18: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8f1c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A8F1Cu;
    {
        const bool branch_taken_0x2a8f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8f1c) {
            ctx->pc = 0x2A8F90u;
            return;
        }
    }
    ctx->pc = 0x2A8F24u;
    // 0x2a8f24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a8f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8f30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8f3c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A8F3Cu;
    {
        const bool branch_taken_0x2a8f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a8f3c) {
            ctx->pc = 0x2A8F90u;
            return;
        }
    }
    ctx->pc = 0x2A8F44u;
    // 0x2a8f44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f48: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8f50: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2a8f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f54: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a8f58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8f64: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2a8f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f68: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a8f6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8f78: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2a8f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f7c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a8f80: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a8f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8f88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f8c: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2a8f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    ctx->pc = 0x2a8f90u;
}
