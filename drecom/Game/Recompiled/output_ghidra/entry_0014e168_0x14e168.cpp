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

// Function: entry_0014e168
// Address: 0x14e168 - 0x14e1e4
void entry_0014e168_0x14e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e168_0x14e168");
#endif

    switch (ctx->pc) {
        case 0x14e18cu: goto label_14e18c;
        case 0x14e1bcu: goto label_14e1bc;
        case 0x14e1d0u: goto label_14e1d0;
        default: break;
    }

    ctx->pc = 0x14e168u;

    // 0x14e168: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e16c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e170: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x14e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x14e174: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e17c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14e17cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14e180: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e180u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14e184: 0xc0d868c  jal         func_361A30
    ctx->pc = 0x14E184u;
    SET_GPR_U32(ctx, 31, 0x14E18Cu);
    ctx->pc = 0x361A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361A30u, 0x14E184u, 0x14E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E18Cu;
label_14e18c:
    // 0x14e18c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x14e18cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14e190: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x14E190u;
    {
        const bool branch_taken_0x14e190 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e190) {
            ctx->pc = 0x14E1E4u;
            return;
        }
    }
    ctx->pc = 0x14E198u;
    // 0x14e198: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14e198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e19c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x14e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x14e1a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14e1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14e1a4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14E1A4u;
    {
        const bool branch_taken_0x14e1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e1a4) {
            ctx->pc = 0x14E1E4u;
            return;
        }
    }
    ctx->pc = 0x14E1ACu;
    // 0x14e1ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14e1b0: 0xc68c00d4  lwc1        $f12, 0xD4($s4)
    ctx->pc = 0x14e1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14e1b4: 0xc067844  jal         func_19E110
    ctx->pc = 0x14E1B4u;
    SET_GPR_U32(ctx, 31, 0x14E1BCu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x14E1B4u, 0x14E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1BCu;
label_14e1bc:
    // 0x14e1bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14e1c0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14e1c4: 0x26860180  addiu       $a2, $s4, 0x180
    ctx->pc = 0x14e1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
    // 0x14e1c8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x14E1C8u;
    SET_GPR_U32(ctx, 31, 0x14E1D0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x14E1D0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14E1D0u) { return; }
    ctx->pc = 0x14E1D0u;
label_14e1d0:
    // 0x14e1d0: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x14e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x14e1d4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x14e1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x14e1d8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x14e1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14e1dc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x14E1DCu;
    SET_GPR_U32(ctx, 31, 0x14E1E4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x14E1DCu, 0x14E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1E4u;
}
