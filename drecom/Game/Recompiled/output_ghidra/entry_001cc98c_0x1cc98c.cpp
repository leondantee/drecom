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

// Function: entry_001cc98c
// Address: 0x1cc98c - 0x1cca20
void entry_001cc98c_0x1cc98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc98c_0x1cc98c");
#endif

    switch (ctx->pc) {
        case 0x1cc9c4u: goto label_1cc9c4;
        case 0x1cc9dcu: goto label_1cc9dc;
        case 0x1cca00u: goto label_1cca00;
        default: break;
    }

    ctx->pc = 0x1cc98cu;

    // 0x1cc98c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc990: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1cc990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1cc994: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1cc994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cc998: 0x30a60080  andi        $a2, $a1, 0x80
    ctx->pc = 0x1cc998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1cc99c: 0x10c0006f  beqz        $a2, . + 4 + (0x6F << 2)
    ctx->pc = 0x1CC99Cu;
    {
        const bool branch_taken_0x1cc99c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc99c) {
            ctx->pc = 0x1CCB5Cu;
            return;
        }
    }
    ctx->pc = 0x1CC9A4u;
    // 0x1cc9a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cc9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cc9a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc9ac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc9acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc9b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cc9b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc9b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc9b8: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1cc9b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cc9bc: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CC9BCu;
    SET_GPR_U32(ctx, 31, 0x1CC9C4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CC9BCu, 0x1CC9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9C4u;
label_1cc9c4:
    // 0x1cc9c4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cc9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cc9c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc9cc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cc9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cc9d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1cc9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cc9d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CC9D4u;
    SET_GPR_U32(ctx, 31, 0x1CC9DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CC9D4u, 0x1CC9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9DCu;
label_1cc9dc:
    // 0x1cc9dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc9e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc9e4: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x1cc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cc9e8: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x1cc9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cc9ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cc9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cc9f0: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x1cc9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x1cc9f4: 0x25079208  addiu       $a3, $t0, -0x6DF8
    ctx->pc = 0x1cc9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939144));
    // 0x1cc9f8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CC9F8u;
    SET_GPR_U32(ctx, 31, 0x1CCA00u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CC9F8u, 0x1CCA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA00u;
label_1cca00:
    // 0x1cca00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCA00u;
    {
        const bool branch_taken_0x1cca00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca00) {
            ctx->pc = 0x1CCA20u;
            return;
        }
    }
    ctx->pc = 0x1CCA08u;
    // 0x1cca08: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cca0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca10: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cca10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cca14: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cca18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cca18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cca1c: 0xac221a68  sw          $v0, 0x1A68($at)
    ctx->pc = 0x1cca1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1cca20u;
}
