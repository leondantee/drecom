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

// Function: caseD_1
// Address: 0x309bac - 0x309c0c
void caseD_1_0x309bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x309bac");
#endif

    switch (ctx->pc) {
        case 0x309bf0u: goto label_309bf0;
        case 0x309c04u: goto label_309c04;
        default: break;
    }

    ctx->pc = 0x309bacu;

    // 0x309bac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309bb0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x309bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x309bb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x309bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x309bb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x309bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x309bbc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x309BBCu;
    {
        const bool branch_taken_0x309bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309bbc) {
            ctx->pc = 0x309C0Cu;
            return;
        }
    }
    ctx->pc = 0x309BC4u;
    // 0x309bc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309bc8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x309bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309bcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309bd0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x309bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x309bd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x309bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x309bd8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x309bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x309bdc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x309bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x309be0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x309be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309be4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x309be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x309be8: 0xc05c848  jal         func_172120
    ctx->pc = 0x309BE8u;
    SET_GPR_U32(ctx, 31, 0x309BF0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x309BE8u, 0x309BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309BF0u;
label_309bf0:
    // 0x309bf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309bf4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x309bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309bf8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x309bf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309bfc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x309BFCu;
    SET_GPR_U32(ctx, 31, 0x309C04u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x309BFCu, 0x309C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C04u;
label_309c04:
    // 0x309c04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x309c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x309c0cu;
}
