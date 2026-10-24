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

// Function: entry_0036d8dc
// Address: 0x36d8dc - 0x36d924
void entry_0036d8dc_0x36d8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d8dc_0x36d8dc");
#endif

    switch (ctx->pc) {
        case 0x36d910u: goto label_36d910;
        case 0x36d91cu: goto label_36d91c;
        default: break;
    }

    ctx->pc = 0x36d8dcu;

    // 0x36d8dc: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x36d8dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36d8e0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x36d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36d8e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36d8e8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x36d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x36d8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d8f0: 0x0  nop
    ctx->pc = 0x36d8f0u;
    // NOP
    // 0x36d8f4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x36d8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x36d8f8: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x36d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x36d8fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36d8fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36d900: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x36d900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36d904: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36d904u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36d908: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x36D908u;
    SET_GPR_U32(ctx, 31, 0x36D910u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36D908u, 0x36D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D910u;
label_36d910:
    // 0x36d910: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36d910u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36d914: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x36D914u;
    SET_GPR_U32(ctx, 31, 0x36D91Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36D914u, 0x36D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D91Cu;
label_36d91c:
    // 0x36d91c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x36D91Cu;
    {
        const bool branch_taken_0x36d91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d91c) {
            ctx->pc = 0x36DC18u;
            return;
        }
    }
    ctx->pc = 0x36D924u;
}
