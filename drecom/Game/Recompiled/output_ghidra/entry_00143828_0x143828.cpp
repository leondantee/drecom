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

// Function: entry_00143828
// Address: 0x143828 - 0x1438a4
void entry_00143828_0x143828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143828_0x143828");
#endif

    switch (ctx->pc) {
        case 0x143840u: goto label_143840;
        case 0x143854u: goto label_143854;
        default: break;
    }

    ctx->pc = 0x143828u;

    // 0x143828: 0x8e4301ec  lw          $v1, 0x1EC($s2)
    ctx->pc = 0x143828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x14382c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x14382Cu;
    {
        const bool branch_taken_0x14382c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14382c) {
            ctx->pc = 0x1438A4u;
            return;
        }
    }
    ctx->pc = 0x143834u;
    // 0x143834: 0x8e4401ec  lw          $a0, 0x1EC($s2)
    ctx->pc = 0x143834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x143838: 0xc0794b0  jal         func_1E52C0
    ctx->pc = 0x143838u;
    SET_GPR_U32(ctx, 31, 0x143840u);
    ctx->pc = 0x1E52C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52C0u, 0x143838u, 0x143840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143840u;
label_143840:
    // 0x143840: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143844: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x143844u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x143848: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x143848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14384c: 0xc079534  jal         func_1E54D0
    ctx->pc = 0x14384Cu;
    SET_GPR_U32(ctx, 31, 0x143854u);
    ctx->pc = 0x1E54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54D0u, 0x14384Cu, 0x143854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143854u;
label_143854:
    // 0x143854: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143858: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x143858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x14385c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14385cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x143860: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x143860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x143864: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x143864u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x143868: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x143868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14386c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14386cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x143870: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x143870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x143874: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x143874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x143878: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x143878u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x14387c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x14387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x143880: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x143880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143884: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x143884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x143888: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x143888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14388c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x14388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x143890: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x143890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143894: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x143894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x143898: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x143898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14389c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x14389cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1438a0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1438a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1438a4u;
}
