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

// Function: entry_00220768
// Address: 0x220768 - 0x2207e0
void entry_00220768_0x220768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220768_0x220768");
#endif

    switch (ctx->pc) {
        case 0x220784u: goto label_220784;
        case 0x2207a4u: goto label_2207a4;
        case 0x2207b4u: goto label_2207b4;
        case 0x2207ccu: goto label_2207cc;
        default: break;
    }

    ctx->pc = 0x220768u;

    // 0x220768: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x220768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22076c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220770: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x220770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x220774: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x220774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x220778: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x220778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22077c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x22077Cu;
    SET_GPR_U32(ctx, 31, 0x220784u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x22077Cu, 0x220784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220784u;
label_220784:
    // 0x220784: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x220784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x220788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22078c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x22078cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x220790: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x220790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220794: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x220794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x220798: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x220798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x22079c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x22079Cu;
    SET_GPR_U32(ctx, 31, 0x2207A4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x22079Cu, 0x2207A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2207A4u;
label_2207a4:
    // 0x2207a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2207a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207a8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2207a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207ac: 0xc040c24  jal         func_103090
    ctx->pc = 0x2207ACu;
    SET_GPR_U32(ctx, 31, 0x2207B4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2207B4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2207B4u) { return; }
    ctx->pc = 0x2207B4u;
label_2207b4:
    // 0x2207b4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2207b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2207b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2207b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2207bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2207bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207c0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2207c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207c4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2207C4u;
    SET_GPR_U32(ctx, 31, 0x2207CCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2207CCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2207CCu) { return; }
    ctx->pc = 0x2207CCu;
label_2207cc:
    // 0x2207cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2207ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2207d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207d4: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x2207d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2207d8: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2207d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2207dc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2207dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2207e0u;
}
