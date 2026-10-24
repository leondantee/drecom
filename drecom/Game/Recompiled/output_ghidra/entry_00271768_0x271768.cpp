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

// Function: entry_00271768
// Address: 0x271768 - 0x2717f4
void entry_00271768_0x271768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271768_0x271768");
#endif

    switch (ctx->pc) {
        case 0x2717bcu: goto label_2717bc;
        case 0x2717ccu: goto label_2717cc;
        case 0x2717dcu: goto label_2717dc;
        case 0x2717ecu: goto label_2717ec;
        default: break;
    }

    ctx->pc = 0x271768u;

    // 0x271768: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x271768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27176c: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x27176cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x271770: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x271770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x271774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x271774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271778: 0x0  nop
    ctx->pc = 0x271778u;
    // NOP
    // 0x27177c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27177cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271780: 0x0  nop
    ctx->pc = 0x271780u;
    // NOP
    // 0x271784: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x271784u;
    {
        const bool branch_taken_0x271784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271784) {
            ctx->pc = 0x2717F4u;
            return;
        }
    }
    ctx->pc = 0x27178Cu;
    // 0x27178c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27178cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271790: 0x8c24fd58  lw          $a0, -0x2A8($at)
    ctx->pc = 0x271790u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD58u));
    // 0x271794: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271798: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x271798u;
    {
        const bool branch_taken_0x271798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271798) {
            ctx->pc = 0x271854u;
            return;
        }
    }
    ctx->pc = 0x2717A0u;
    // 0x2717a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2717a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2717a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2717a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2717a8: 0xac22fd58  sw          $v0, -0x2A8($at)
    ctx->pc = 0x2717a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD58u, _value); } while (0);
    // 0x2717ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2717acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2717b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2717b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2717b4: 0xc050018  jal         func_140060
    ctx->pc = 0x2717B4u;
    SET_GPR_U32(ctx, 31, 0x2717BCu);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x2717B4u, 0x2717BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717BCu;
label_2717bc:
    // 0x2717bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2717bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2717c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2717c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2717c4: 0xc050018  jal         func_140060
    ctx->pc = 0x2717C4u;
    SET_GPR_U32(ctx, 31, 0x2717CCu);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x2717C4u, 0x2717CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717CCu;
label_2717cc:
    // 0x2717cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2717ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2717d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2717d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2717d4: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x2717D4u;
    SET_GPR_U32(ctx, 31, 0x2717DCu);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x2717D4u, 0x2717DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717DCu;
label_2717dc:
    // 0x2717dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2717dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2717e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2717e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2717e4: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x2717E4u;
    SET_GPR_U32(ctx, 31, 0x2717ECu);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x2717E4u, 0x2717ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717ECu;
label_2717ec:
    // 0x2717ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2717ECu;
    {
        const bool branch_taken_0x2717ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2717ec) {
            ctx->pc = 0x271854u;
            return;
        }
    }
    ctx->pc = 0x2717F4u;
}
