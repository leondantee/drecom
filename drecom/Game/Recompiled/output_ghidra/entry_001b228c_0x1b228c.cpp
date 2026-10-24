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

// Function: entry_001b228c
// Address: 0x1b228c - 0x1b2318
void entry_001b228c_0x1b228c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b228c_0x1b228c");
#endif

    switch (ctx->pc) {
        case 0x1b22b4u: goto label_1b22b4;
        case 0x1b22c4u: goto label_1b22c4;
        case 0x1b22e8u: goto label_1b22e8;
        case 0x1b2310u: goto label_1b2310;
        default: break;
    }

    ctx->pc = 0x1b228cu;

    // 0x1b228c: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b228cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b2290: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2294: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2298: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b2298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b229c: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1b229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b22a0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b22a4: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x1b22a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b22a8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1b22a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b22ac: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B22ACu;
    SET_GPR_U32(ctx, 31, 0x1B22B4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B22ACu, 0x1B22B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22B4u;
label_1b22b4:
    // 0x1b22b4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b22b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b22b8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b22b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b22bc: 0xc040c24  jal         func_103090
    ctx->pc = 0x1B22BCu;
    SET_GPR_U32(ctx, 31, 0x1B22C4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1B22C4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B22C4u) { return; }
    ctx->pc = 0x1B22C4u;
label_1b22c4:
    // 0x1b22c4: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b22c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b22cc: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b22d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b22d4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b22d8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b22d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b22dc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1b22dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b22e0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B22E0u;
    SET_GPR_U32(ctx, 31, 0x1B22E8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B22E8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B22E8u) { return; }
    ctx->pc = 0x1B22E8u;
label_1b22e8:
    // 0x1b22e8: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b22ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b22f0: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b22f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b22f8: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1b22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b22fc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1b22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b2300: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1b2300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b2304: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1b2304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b2308: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1B2308u;
    SET_GPR_U32(ctx, 31, 0x1B2310u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1B2308u, 0x1B2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2310u;
label_1b2310:
    // 0x1b2310: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b2310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b2314: 0x0  nop
    ctx->pc = 0x1b2314u;
    // NOP
    ctx->pc = 0x1b2318u;
}
