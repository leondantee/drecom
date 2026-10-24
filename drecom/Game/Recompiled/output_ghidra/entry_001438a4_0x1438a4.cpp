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

// Function: entry_001438a4
// Address: 0x1438a4 - 0x143920
void entry_001438a4_0x1438a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001438a4_0x1438a4");
#endif

    switch (ctx->pc) {
        case 0x1438bcu: goto label_1438bc;
        case 0x1438d0u: goto label_1438d0;
        default: break;
    }

    ctx->pc = 0x1438a4u;

    // 0x1438a4: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x1438a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x1438a8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1438A8u;
    {
        const bool branch_taken_0x1438a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1438a8) {
            ctx->pc = 0x143920u;
            return;
        }
    }
    ctx->pc = 0x1438B0u;
    // 0x1438b0: 0x8e2401ec  lw          $a0, 0x1EC($s1)
    ctx->pc = 0x1438b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x1438b4: 0xc0794b0  jal         func_1E52C0
    ctx->pc = 0x1438B4u;
    SET_GPR_U32(ctx, 31, 0x1438BCu);
    ctx->pc = 0x1E52C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52C0u, 0x1438B4u, 0x1438BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438BCu;
label_1438bc:
    // 0x1438bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1438bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1438c0: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x1438c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1438c4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1438c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1438c8: 0xc079534  jal         func_1E54D0
    ctx->pc = 0x1438C8u;
    SET_GPR_U32(ctx, 31, 0x1438D0u);
    ctx->pc = 0x1E54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54D0u, 0x1438C8u, 0x1438D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438D0u;
label_1438d0:
    // 0x1438d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1438d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1438d4: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x1438d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1438d8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1438d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1438dc: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x1438dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1438e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1438e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1438e4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1438e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1438e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1438e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1438ec: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1438ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1438f0: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x1438f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1438f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1438f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1438f8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1438f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1438fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1438fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143900: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x143900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x143904: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x143904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x143908: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x143908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x14390c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14390cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143910: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x143910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x143914: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x143914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x143918: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x143918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x14391c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x14391cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x143920u;
}
