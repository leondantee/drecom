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

// Function: entry_001ee94c
// Address: 0x1ee94c - 0x1ee9e0
void entry_001ee94c_0x1ee94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee94c_0x1ee94c");
#endif

    switch (ctx->pc) {
        case 0x1ee99cu: goto label_1ee99c;
        case 0x1ee9b0u: goto label_1ee9b0;
        default: break;
    }

    ctx->pc = 0x1ee94cu;

    // 0x1ee94c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1ee94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1ee950: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee958: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee95c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1ee95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee960: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ee964: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1ee964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1ee968: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1ee968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ee96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee970: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee974: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee978: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ee978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ee97c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee980: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee984: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee988: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x1ee988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x1ee98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee990: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee994: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE994u;
    SET_GPR_U32(ctx, 31, 0x1EE99Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE994u, 0x1EE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE99Cu;
label_1ee99c:
    // 0x1ee99c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ee99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee9a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee9a4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ee9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ee9a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EE9A8u;
    SET_GPR_U32(ctx, 31, 0x1EE9B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EE9A8u, 0x1EE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9B0u;
label_1ee9b0:
    // 0x1ee9b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ee9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ee9b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ee9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ee9b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE9B8u;
    {
        const bool branch_taken_0x1ee9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9b8) {
            ctx->pc = 0x1EE9E0u;
            return;
        }
    }
    ctx->pc = 0x1EE9C0u;
    // 0x1ee9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee9c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee9c8: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x1ee9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ee9cc: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1ee9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x1ee9d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ee9d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee9d4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1ee9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee9d8: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x1ee9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x1ee9dc: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1ee9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    ctx->pc = 0x1ee9e0u;
}
