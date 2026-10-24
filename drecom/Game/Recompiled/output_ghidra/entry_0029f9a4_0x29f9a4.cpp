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

// Function: entry_0029f9a4
// Address: 0x29f9a4 - 0x29fa0c
void entry_0029f9a4_0x29f9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f9a4_0x29f9a4");
#endif

    switch (ctx->pc) {
        case 0x29f9e8u: goto label_29f9e8;
        case 0x29fa04u: goto label_29fa04;
        default: break;
    }

    ctx->pc = 0x29f9a4u;

    // 0x29f9a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f9a8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x29f9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x29f9ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f9b0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x29f9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x29f9b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29F9B4u;
    {
        const bool branch_taken_0x29f9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f9b4) {
            ctx->pc = 0x29FA0Cu;
            return;
        }
    }
    ctx->pc = 0x29F9BCu;
    // 0x29f9bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f9c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f9c4: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x29f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x29f9c8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29f9cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29f9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29f9d0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29f9d4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x29f9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f9d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29f9dc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29f9e0: 0xc05c848  jal         func_172120
    ctx->pc = 0x29F9E0u;
    SET_GPR_U32(ctx, 31, 0x29F9E8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x29F9E0u, 0x29F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9E8u;
label_29f9e8:
    // 0x29f9e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x29f9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x29f9ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f9f0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x29f9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f9f4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x29f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f9f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x29f9f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29f9fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29F9FCu;
    SET_GPR_U32(ctx, 31, 0x29FA04u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29F9FCu, 0x29FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA04u;
label_29fa04:
    // 0x29fa04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29fa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x29fa0cu;
}
