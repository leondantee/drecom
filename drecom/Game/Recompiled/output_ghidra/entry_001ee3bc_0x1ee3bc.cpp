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

// Function: entry_001ee3bc
// Address: 0x1ee3bc - 0x1ee434
void entry_001ee3bc_0x1ee3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee3bc_0x1ee3bc");
#endif

    switch (ctx->pc) {
        case 0x1ee3c4u: goto label_1ee3c4;
        case 0x1ee42cu: goto label_1ee42c;
        default: break;
    }

    ctx->pc = 0x1ee3bcu;

    // 0x1ee3bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EE3BCu;
    SET_GPR_U32(ctx, 31, 0x1EE3C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EE3BCu, 0x1EE3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3C4u;
label_1ee3c4:
    // 0x1ee3c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ee3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ee3c8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1ee3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ee3cc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EE3CCu;
    {
        const bool branch_taken_0x1ee3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee3cc) {
            ctx->pc = 0x1EE454u;
            return;
        }
    }
    ctx->pc = 0x1EE3D4u;
    // 0x1ee3d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee3d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee3dc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1ee3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee3e0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ee3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1ee3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee3e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee3ec: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1ee3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee3f0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ee3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1ee3f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee3f8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee3fc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1ee3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1ee400: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ee400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ee404: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE404u;
    {
        const bool branch_taken_0x1ee404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee404) {
            ctx->pc = 0x1EE434u;
            return;
        }
    }
    ctx->pc = 0x1EE40Cu;
    // 0x1ee40c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee410: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee414: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee418: 0x2406780a  addiu       $a2, $zero, 0x780A
    ctx->pc = 0x1ee418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30730));
    // 0x1ee41c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee420: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee424: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE424u;
    SET_GPR_U32(ctx, 31, 0x1EE42Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE424u, 0x1EE42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE42Cu;
label_1ee42c:
    // 0x1ee42c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE42Cu;
    {
        const bool branch_taken_0x1ee42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee42c) {
            ctx->pc = 0x1EE454u;
            return;
        }
    }
    ctx->pc = 0x1EE434u;
}
