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

// Function: entry_00345ac4
// Address: 0x345ac4 - 0x345b2c
void entry_00345ac4_0x345ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345ac4_0x345ac4");
#endif

    switch (ctx->pc) {
        case 0x345b08u: goto label_345b08;
        case 0x345b24u: goto label_345b24;
        default: break;
    }

    ctx->pc = 0x345ac4u;

    // 0x345ac4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345ac8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x345ac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x345acc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x345accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x345ad0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x345ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x345ad4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x345AD4u;
    {
        const bool branch_taken_0x345ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345ad4) {
            ctx->pc = 0x345B2Cu;
            return;
        }
    }
    ctx->pc = 0x345ADCu;
    // 0x345adc: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x345adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x345ae0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x345ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x345ae4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x345ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x345ae8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345aec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345af0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x345af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x345af4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x345af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x345af8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x345af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x345afc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x345afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x345b00: 0xc05c848  jal         func_172120
    ctx->pc = 0x345B00u;
    SET_GPR_U32(ctx, 31, 0x345B08u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x345B00u, 0x345B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B08u;
label_345b08:
    // 0x345b08: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x345b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x345b0c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b10: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x345b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345b14: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x345b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345b18: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x345b18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345b1c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x345B1Cu;
    SET_GPR_U32(ctx, 31, 0x345B24u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x345B1Cu, 0x345B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B24u;
label_345b24:
    // 0x345b24: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b28: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x345b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x345b2cu;
}
