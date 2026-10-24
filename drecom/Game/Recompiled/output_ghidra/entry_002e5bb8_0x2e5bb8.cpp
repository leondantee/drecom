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

// Function: entry_002e5bb8
// Address: 0x2e5bb8 - 0x2e5c30
void entry_002e5bb8_0x2e5bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5bb8_0x2e5bb8");
#endif

    switch (ctx->pc) {
        case 0x2e5be4u: goto label_2e5be4;
        case 0x2e5c00u: goto label_2e5c00;
        default: break;
    }

    ctx->pc = 0x2e5bb8u;

    // 0x2e5bb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5bbc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2e5bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5bc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5bc4: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2e5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2e5bc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e5bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e5bcc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e5bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e5bd0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2e5bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2e5bd4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2e5bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5bd8: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2e5bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2e5bdc: 0xc05c848  jal         func_172120
    ctx->pc = 0x2E5BDCu;
    SET_GPR_U32(ctx, 31, 0x2E5BE4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2E5BDCu, 0x2E5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5BE4u;
label_2e5be4:
    // 0x2e5be4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e5be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e5be8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5bec: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2e5becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5bf0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e5bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5bf4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e5bf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5bf8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E5BF8u;
    SET_GPR_U32(ctx, 31, 0x2E5C00u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E5BF8u, 0x2E5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C00u;
label_2e5c00:
    // 0x2e5c00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c04: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e5c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e5c08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c0c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e5c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e5c10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e5c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e5c14: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e5c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e5c18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5C18u;
    {
        const bool branch_taken_0x2e5c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5c18) {
            ctx->pc = 0x2E5C30u;
            return;
        }
    }
    ctx->pc = 0x2E5C20u;
    // 0x2e5c20: 0x3c024070  lui         $v0, 0x4070
    ctx->pc = 0x2e5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16496 << 16));
    // 0x2e5c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5c28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c2c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e5c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x2e5c30u;
}
