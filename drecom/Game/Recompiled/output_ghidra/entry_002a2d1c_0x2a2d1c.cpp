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

// Function: entry_002a2d1c
// Address: 0x2a2d1c - 0x2a2dd0
void entry_002a2d1c_0x2a2d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2d1c_0x2a2d1c");
#endif

    switch (ctx->pc) {
        case 0x2a2d2cu: goto label_2a2d2c;
        case 0x2a2d70u: goto label_2a2d70;
        case 0x2a2d8cu: goto label_2a2d8c;
        default: break;
    }

    ctx->pc = 0x2a2d1cu;

    // 0x2a2d1c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2d20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2d24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A2D24u;
    SET_GPR_U32(ctx, 31, 0x2A2D2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A2D24u, 0x2A2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D2Cu;
label_2a2d2c:
    // 0x2a2d2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d30: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2a2d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2a2d34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a2d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2d38: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2a2d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2a2d3c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A2D3Cu;
    {
        const bool branch_taken_0x2a2d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d3c) {
            ctx->pc = 0x2A2DD0u;
            return;
        }
    }
    ctx->pc = 0x2A2D44u;
    // 0x2a2d44: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2a2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2a2d48: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a2d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a2d4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a2d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2d50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d58: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a2d5c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a2d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2d60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a2d64: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a2d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a2d68: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A2D68u;
    SET_GPR_U32(ctx, 31, 0x2A2D70u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A2D68u, 0x2A2D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D70u;
label_2a2d70:
    // 0x2a2d70: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a2d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a2d74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d78: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a2d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2d7c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a2d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2d80: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2d80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2d84: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A2D84u;
    SET_GPR_U32(ctx, 31, 0x2A2D8Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A2D84u, 0x2A2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D8Cu;
label_2a2d8c:
    // 0x2a2d8c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d90: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a2d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a2d94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d98: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2d9c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2a2d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2da0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2da4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2a2da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2da8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2dac: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2a2dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2a2db0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2db4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2a2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2db8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2a2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2a2dbc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2a2dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2a2dc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2dc4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2a2dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2dc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2dcc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2a2dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x2a2dd0u;
}
