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

// Function: entry_001cd734
// Address: 0x1cd734 - 0x1cd7c8
void entry_001cd734_0x1cd734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd734_0x1cd734");
#endif

    switch (ctx->pc) {
        case 0x1cd75cu: goto label_1cd75c;
        case 0x1cd7b4u: goto label_1cd7b4;
        default: break;
    }

    ctx->pc = 0x1cd734u;

    // 0x1cd734: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd738: 0x8c441b68  lw          $a0, 0x1B68($v0)
    ctx->pc = 0x1cd738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x1cd73c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CD73Cu;
    {
        const bool branch_taken_0x1cd73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd73c) {
            ctx->pc = 0x1CD7C8u;
            return;
        }
    }
    ctx->pc = 0x1CD744u;
    // 0x1cd744: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd748: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd74c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cd74cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd750: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1cd750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd754: 0xc058c14  jal         func_163050
    ctx->pc = 0x1CD754u;
    SET_GPR_U32(ctx, 31, 0x1CD75Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1CD754u, 0x1CD75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD75Cu;
label_1cd75c:
    // 0x1cd75c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cd75cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd760: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD760u;
    {
        const bool branch_taken_0x1cd760 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd760) {
            ctx->pc = 0x1CD7C8u;
            return;
        }
    }
    ctx->pc = 0x1CD768u;
    // 0x1cd768: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd76c: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x1cd76cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cd770: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x1cd770u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x1cd774: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1cd774u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd778: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x1cd778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x1cd77c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1cd77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cd780: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x1cd780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1cd784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cd784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd788: 0x34450016  ori         $a1, $v0, 0x16
    ctx->pc = 0x1cd788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
    // 0x1cd78c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd790: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1cd790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1cd794: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd798: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cd798u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cd79c: 0x24650230  addiu       $a1, $v1, 0x230
    ctx->pc = 0x1cd79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
    // 0x1cd7a0: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x1cd7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1cd7a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1cd7a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd7a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1cd7a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd7ac: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1CD7ACu;
    SET_GPR_U32(ctx, 31, 0x1CD7B4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1CD7ACu, 0x1CD7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7B4u;
label_1cd7b4:
    // 0x1cd7b4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd7b8: 0xace01b68  sw          $zero, 0x1B68($a3)
    ctx->pc = 0x1cd7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7016), GPR_U32(ctx, 0));
    // 0x1cd7bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd7c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd7c4: 0xac221a68  sw          $v0, 0x1A68($at)
    ctx->pc = 0x1cd7c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1cd7c8u;
}
