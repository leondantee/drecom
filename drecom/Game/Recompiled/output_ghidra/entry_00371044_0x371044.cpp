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

// Function: entry_00371044
// Address: 0x371044 - 0x3710ac
void entry_00371044_0x371044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371044_0x371044");
#endif

    switch (ctx->pc) {
        case 0x371088u: goto label_371088;
        case 0x3710a4u: goto label_3710a4;
        default: break;
    }

    ctx->pc = 0x371044u;

    // 0x371044: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371048: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x371048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x37104c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x371050: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x371050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x371054: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x371054u;
    {
        const bool branch_taken_0x371054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371054) {
            ctx->pc = 0x3710ACu;
            return;
        }
    }
    ctx->pc = 0x37105Cu;
    // 0x37105c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x37105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371064: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x371064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x371068: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x371068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x37106c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x37106cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x371070: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x371070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x371074: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x371074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x371078: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x371078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37107c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x37107cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x371080: 0xc05c848  jal         func_172120
    ctx->pc = 0x371080u;
    SET_GPR_U32(ctx, 31, 0x371088u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x371080u, 0x371088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371088u;
label_371088:
    // 0x371088: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x37108c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371090: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x371090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371094: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x371094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371098: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x371098u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37109c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x37109Cu;
    SET_GPR_U32(ctx, 31, 0x3710A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x37109Cu, 0x3710A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710A4u;
label_3710a4:
    // 0x3710a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3710a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710a8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3710a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x3710acu;
}
