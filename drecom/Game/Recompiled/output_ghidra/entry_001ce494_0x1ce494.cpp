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

// Function: entry_001ce494
// Address: 0x1ce494 - 0x1ce528
void entry_001ce494_0x1ce494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce494_0x1ce494");
#endif

    switch (ctx->pc) {
        case 0x1ce4b8u: goto label_1ce4b8;
        case 0x1ce510u: goto label_1ce510;
        default: break;
    }

    ctx->pc = 0x1ce494u;

    // 0x1ce494: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ce494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce498: 0x8cc31b68  lw          $v1, 0x1B68($a2)
    ctx->pc = 0x1ce498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7016)));
    // 0x1ce49c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CE49Cu;
    {
        const bool branch_taken_0x1ce49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce49c) {
            ctx->pc = 0x1CE528u;
            return;
        }
    }
    ctx->pc = 0x1CE4A4u;
    // 0x1ce4a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce4a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce4ac: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1ce4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce4b0: 0xc058c14  jal         func_163050
    ctx->pc = 0x1CE4B0u;
    SET_GPR_U32(ctx, 31, 0x1CE4B8u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1CE4B0u, 0x1CE4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4B8u;
label_1ce4b8:
    // 0x1ce4b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ce4b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce4bc: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CE4BCu;
    {
        const bool branch_taken_0x1ce4bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce4bc) {
            ctx->pc = 0x1CE528u;
            return;
        }
    }
    ctx->pc = 0x1CE4C4u;
    // 0x1ce4c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce4c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ce4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ce4cc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ce4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ce4d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ce4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ce4d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ce4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ce4d8: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x1ce4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ce4dc: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x1ce4dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ce4e0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1ce4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1ce4e4: 0x34470016  ori         $a3, $v0, 0x16
    ctx->pc = 0x1ce4e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
    // 0x1ce4e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce4ec: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1ce4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ce4f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce4f4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1ce4f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1ce4f8: 0x24a506a0  addiu       $a1, $a1, 0x6A0
    ctx->pc = 0x1ce4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1696));
    // 0x1ce4fc: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x1ce4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1ce500: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1ce500u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce504: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1ce504u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce508: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1CE508u;
    SET_GPR_U32(ctx, 31, 0x1CE510u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1CE508u, 0x1CE510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE510u;
label_1ce510:
    // 0x1ce510: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce510u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce518: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1ce518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
    // 0x1ce51c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ce51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce520: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ce524: 0xac241a68  sw          $a0, 0x1A68($at)
    ctx->pc = 0x1ce524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1ce528u;
}
