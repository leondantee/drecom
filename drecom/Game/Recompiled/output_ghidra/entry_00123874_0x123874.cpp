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

// Function: entry_00123874
// Address: 0x123874 - 0x123908
void entry_00123874_0x123874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123874_0x123874");
#endif

    switch (ctx->pc) {
        case 0x1238c4u: goto label_1238c4;
        default: break;
    }

    ctx->pc = 0x123874u;

    // 0x123874: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123878: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x12387c: 0x24424ec8  addiu       $v0, $v0, 0x4EC8
    ctx->pc = 0x12387cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20168));
    // 0x123880: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x123880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x123884: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x123884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123888: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12388c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x12388cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x123890: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x123890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x123894: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x123894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x123898: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x123898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x12389c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x12389cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1238a0: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1238a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1238a4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1238a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1238a8: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x1238a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x1238ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1238acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1238b0: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1238b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x1238b4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1238b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1238b8: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1238b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1238bc: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1238BCu;
    SET_GPR_U32(ctx, 31, 0x1238C4u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1238BCu, 0x1238C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238C4u;
label_1238c4:
    // 0x1238c4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1238c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1238c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1238c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1238cc: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x1238ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1238d0: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x1238d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1238d4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1238d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1238d8: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x1238d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1238dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1238dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1238e0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1238e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1238e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1238e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1238e8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1238e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1238ec: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x1238ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x1238f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1238f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1238f4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1238f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1238f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1238f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1238fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1238fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x123900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x123904: 0x0  nop
    ctx->pc = 0x123904u;
    // NOP
    ctx->pc = 0x123908u;
}
