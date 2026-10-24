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

// Function: entry_0032c088
// Address: 0x32c088 - 0x32c144
void entry_0032c088_0x32c088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c088_0x32c088");
#endif

    switch (ctx->pc) {
        case 0x32c0c4u: goto label_32c0c4;
        case 0x32c0fcu: goto label_32c0fc;
        case 0x32c13cu: goto label_32c13c;
        default: break;
    }

    ctx->pc = 0x32c088u;

    // 0x32c088: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x32c088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32c08c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x32c08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x32c090: 0x1440fd9f  bnez        $v0, . + 4 + (-0x261 << 2)
    ctx->pc = 0x32C090u;
    {
        const bool branch_taken_0x32c090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c090) {
            ctx->pc = 0x32B710u;
            return;
        }
    }
    ctx->pc = 0x32C098u;
    // 0x32c098: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x32c098u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x32c09c: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x32c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x32c0a0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32c0a4: 0x3462103f  ori         $v0, $v1, 0x103F
    ctx->pc = 0x32c0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4159);
    // 0x32c0a8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32c0ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32c0b0: 0x24421a14  addiu       $v0, $v0, 0x1A14
    ctx->pc = 0x32c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32c0b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32c0b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c0b8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32c0b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32c0bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32C0BCu;
    SET_GPR_U32(ctx, 31, 0x32C0C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32C0BCu, 0x32C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C0C4u;
label_32c0c4:
    // 0x32c0c4: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32c0c8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32c0c8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c0cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32c0d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32c0d4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32c0d8: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x32c0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x32c0dc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32c0e0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32c0e4: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32c0e8: 0x3c15005d  lui         $s5, 0x5D
    ctx->pc = 0x32c0e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
    // 0x32c0ec: 0x26a41a14  addiu       $a0, $s5, 0x1A14
    ctx->pc = 0x32c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6676));
    // 0x32c0f0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32c0f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32c0f4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32C0F4u;
    SET_GPR_U32(ctx, 31, 0x32C0FCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32C0F4u, 0x32C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C0FCu;
label_32c0fc:
    // 0x32c0fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32c0fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c100: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x32c100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32c104: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x32c104u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x32c108: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32c108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32c10c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32c110: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x32c110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x32c114: 0x34c51048  ori         $a1, $a2, 0x1048
    ctx->pc = 0x32c114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4168);
    // 0x32c118: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x32c118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x32c11c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x32c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x32c120: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32c120u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32c124: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32c128: 0x24421a14  addiu       $v0, $v0, 0x1A14
    ctx->pc = 0x32c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32c12c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32c12cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c130: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32c130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32c134: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32C134u;
    SET_GPR_U32(ctx, 31, 0x32C13Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32C134u, 0x32C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C13Cu;
label_32c13c:
    // 0x32c13c: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x32c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32c140: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x32c140u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x32c144u;
}
