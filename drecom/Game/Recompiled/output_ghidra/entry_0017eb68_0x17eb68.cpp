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

// Function: entry_0017eb68
// Address: 0x17eb68 - 0x17ec08
void entry_0017eb68_0x17eb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb68_0x17eb68");
#endif

    switch (ctx->pc) {
        case 0x17eb7cu: goto label_17eb7c;
        case 0x17eb9cu: goto label_17eb9c;
        case 0x17ebacu: goto label_17ebac;
        default: break;
    }

    ctx->pc = 0x17eb68u;

    // 0x17eb68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17eb6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17eb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17eb70: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x17eb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17eb74: 0xc040c8c  jal         func_103230
    ctx->pc = 0x17EB74u;
    SET_GPR_U32(ctx, 31, 0x17EB7Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17EB7Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17EB7Cu) { return; }
    ctx->pc = 0x17EB7Cu;
label_17eb7c:
    // 0x17eb7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17eb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17eb80: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17eb84: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x17eb88: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17eb8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17eb90: 0x2446f110  addiu       $a2, $v0, -0xEF0
    ctx->pc = 0x17eb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963472));
    // 0x17eb94: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17EB94u;
    SET_GPR_U32(ctx, 31, 0x17EB9Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17EB9Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17EB9Cu) { return; }
    ctx->pc = 0x17EB9Cu;
label_17eb9c:
    // 0x17eb9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17eb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17eba0: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17eba4: 0xc056518  jal         func_159460
    ctx->pc = 0x17EBA4u;
    SET_GPR_U32(ctx, 31, 0x17EBACu);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x17EBA4u, 0x17EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBACu;
label_17ebac:
    // 0x17ebac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebb0: 0x8c6300a0  lw          $v1, 0xA0($v1)
    ctx->pc = 0x17ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x17ebb4: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x17EBB4u;
    {
        const bool branch_taken_0x17ebb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ebb4) {
            ctx->pc = 0x17EC60u;
            return;
        }
    }
    ctx->pc = 0x17EBBCu;
    // 0x17ebbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebc0: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x17ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x17ebc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ebc8: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x17ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
    // 0x17ebcc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebd0: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x17ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x17ebd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebd8: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x17ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x17ebdc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17EBDCu;
    {
        const bool branch_taken_0x17ebdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ebdc) {
            ctx->pc = 0x17EC08u;
            return;
        }
    }
    ctx->pc = 0x17EBE4u;
    // 0x17ebe4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebe8: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x17ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x17ebec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebf0: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x17ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x17ebf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebf8: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x17ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ebfc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ebfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ec00: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17EC00u;
    {
        const bool branch_taken_0x17ec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ec00) {
            ctx->pc = 0x17EC4Cu;
            return;
        }
    }
    ctx->pc = 0x17EC08u;
}
