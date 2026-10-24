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

// Function: entry_001cd07c
// Address: 0x1cd07c - 0x1cd110
void entry_001cd07c_0x1cd07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd07c_0x1cd07c");
#endif

    switch (ctx->pc) {
        case 0x1cd0a4u: goto label_1cd0a4;
        case 0x1cd0fcu: goto label_1cd0fc;
        default: break;
    }

    ctx->pc = 0x1cd07cu;

    // 0x1cd07c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd080: 0x8c441b68  lw          $a0, 0x1B68($v0)
    ctx->pc = 0x1cd080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x1cd084: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CD084u;
    {
        const bool branch_taken_0x1cd084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd084) {
            ctx->pc = 0x1CD110u;
            return;
        }
    }
    ctx->pc = 0x1CD08Cu;
    // 0x1cd08c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd090: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd094: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cd094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd098: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1cd098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd09c: 0xc058c14  jal         func_163050
    ctx->pc = 0x1CD09Cu;
    SET_GPR_U32(ctx, 31, 0x1CD0A4u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1CD09Cu, 0x1CD0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0A4u;
label_1cd0a4:
    // 0x1cd0a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cd0a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd0a8: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD0A8u;
    {
        const bool branch_taken_0x1cd0a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd0a8) {
            ctx->pc = 0x1CD110u;
            return;
        }
    }
    ctx->pc = 0x1CD0B0u;
    // 0x1cd0b0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cd0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd0b4: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x1cd0b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cd0b8: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x1cd0b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x1cd0bc: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1cd0bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd0c0: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x1cd0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x1cd0c4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1cd0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cd0c8: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x1cd0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1cd0cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cd0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd0d0: 0x34450016  ori         $a1, $v0, 0x16
    ctx->pc = 0x1cd0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
    // 0x1cd0d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd0d8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1cd0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1cd0dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd0e0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cd0e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cd0e4: 0x246503f0  addiu       $a1, $v1, 0x3F0
    ctx->pc = 0x1cd0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x1cd0e8: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x1cd0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1cd0ec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1cd0ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd0f0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1cd0f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd0f4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1CD0F4u;
    SET_GPR_U32(ctx, 31, 0x1CD0FCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1CD0F4u, 0x1CD0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0FCu;
label_1cd0fc:
    // 0x1cd0fc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cd0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd100: 0xace01b68  sw          $zero, 0x1B68($a3)
    ctx->pc = 0x1cd100u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7016), GPR_U32(ctx, 0));
    // 0x1cd104: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cd104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd108: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd10c: 0xac221a68  sw          $v0, 0x1A68($at)
    ctx->pc = 0x1cd10cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1cd110u;
}
