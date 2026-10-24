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

// Function: entry_001ca1c0
// Address: 0x1ca1c0 - 0x1ca238
void entry_001ca1c0_0x1ca1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca1c0_0x1ca1c0");
#endif

    switch (ctx->pc) {
        case 0x1ca204u: goto label_1ca204;
        case 0x1ca230u: goto label_1ca230;
        default: break;
    }

    ctx->pc = 0x1ca1c0u;

    // 0x1ca1c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca1c4: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x1ca1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1ca1c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA1C8u;
    {
        const bool branch_taken_0x1ca1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1c8) {
            ctx->pc = 0x1CA238u;
            return;
        }
    }
    ctx->pc = 0x1CA1D0u;
    // 0x1ca1d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca1d4: 0x8443127e  lh          $v1, 0x127E($v0)
    ctx->pc = 0x1ca1d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1ca1d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ca1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ca1dc: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1ca1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ca1e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca1e4: 0xc4611290  lwc1        $f1, 0x1290($v1)
    ctx->pc = 0x1ca1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca1e8: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1ca1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1ca1ec: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ca1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ca1f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca1f4: 0x0  nop
    ctx->pc = 0x1ca1f4u;
    // NOP
    // 0x1ca1f8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1ca1f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ca1fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1CA1FCu;
    SET_GPR_U32(ctx, 31, 0x1CA204u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1CA1FCu, 0x1CA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA204u;
label_1ca204:
    // 0x1ca204: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca208: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x1ca208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x1ca20c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca210: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ca210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca214: 0x3c053c49  lui         $a1, 0x3C49
    ctx->pc = 0x1ca214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15433 << 16));
    // 0x1ca218: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x1ca218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1ca21c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca21cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca220: 0x0  nop
    ctx->pc = 0x1ca220u;
    // NOP
    // 0x1ca224: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1ca224u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ca228: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1CA228u;
    SET_GPR_U32(ctx, 31, 0x1CA230u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1CA228u, 0x1CA230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA230u;
label_1ca230:
    // 0x1ca230: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca234: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1ca234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    ctx->pc = 0x1ca238u;
}
