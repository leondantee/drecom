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

// Function: entry_002e6484
// Address: 0x2e6484 - 0x2e64e8
void entry_002e6484_0x2e6484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6484_0x2e6484");
#endif

    switch (ctx->pc) {
        case 0x2e64a4u: goto label_2e64a4;
        case 0x2e64bcu: goto label_2e64bc;
        default: break;
    }

    ctx->pc = 0x2e6484u;

    // 0x2e6484: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6488: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e648c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e6490: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x2e6490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x2e6494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6498: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e6498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e649c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E649Cu;
    SET_GPR_U32(ctx, 31, 0x2E64A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E649Cu, 0x2E64A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64A4u;
label_2e64a4:
    // 0x2e64a4: 0x3c02c14c  lui         $v0, 0xC14C
    ctx->pc = 0x2e64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49484 << 16));
    // 0x2e64a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e64a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e64ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e64acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e64b0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e64b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2e64b4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E64B4u;
    SET_GPR_U32(ctx, 31, 0x2E64BCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E64B4u, 0x2E64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64BCu;
label_2e64bc:
    // 0x2e64bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e64bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e64c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e64c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e64c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E64C4u;
    {
        const bool branch_taken_0x2e64c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e64c4) {
            ctx->pc = 0x2E64E8u;
            return;
        }
    }
    ctx->pc = 0x2E64CCu;
    // 0x2e64cc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2e64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2e64d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e64d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e64d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e64d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e64d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e64dc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e64dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e64e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E64E0u;
    {
        const bool branch_taken_0x2e64e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e64e0) {
            ctx->pc = 0x2E64FCu;
            return;
        }
    }
    ctx->pc = 0x2E64E8u;
}
