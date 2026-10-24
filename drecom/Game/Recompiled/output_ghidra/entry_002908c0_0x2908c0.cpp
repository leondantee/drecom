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

// Function: entry_002908c0
// Address: 0x2908c0 - 0x290998
void entry_002908c0_0x2908c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002908c0_0x2908c0");
#endif

    switch (ctx->pc) {
        case 0x2908d8u: goto label_2908d8;
        case 0x290908u: goto label_290908;
        case 0x290944u: goto label_290944;
        case 0x290964u: goto label_290964;
        default: break;
    }

    ctx->pc = 0x2908c0u;

    // 0x2908c0: 0x26150018  addiu       $s5, $s0, 0x18
    ctx->pc = 0x2908c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2908c4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x2908c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2908c8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2908c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2908cc: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2908ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2908d0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2908D0u;
    SET_GPR_U32(ctx, 31, 0x2908D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2908D0u, 0x2908D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2908D8u;
label_2908d8:
    // 0x2908d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2908d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2908dc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2908dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2908e0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2908e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2908e4: 0x34621043  ori         $v0, $v1, 0x1043
    ctx->pc = 0x2908e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x2908e8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2908e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2908ec: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2908ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2908f0: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x2908f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x2908f4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x2908f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2908f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2908f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2908fc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2908fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x290900: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x290900u;
    SET_GPR_U32(ctx, 31, 0x290908u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x290900u, 0x290908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290908u;
label_290908:
    // 0x290908: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x290908u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29090c: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x29090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x290910: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x290910u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x290914: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x290914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x290918: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x290918u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x29091c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x29091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x290920: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x290920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x290924: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x290924u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x290928: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x290928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x29092c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x29092cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x290930: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x290930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x290934: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290938: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x290938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x29093c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x29093Cu;
    SET_GPR_U32(ctx, 31, 0x290944u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x29093Cu, 0x290944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290944u;
label_290944:
    // 0x290944: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x290944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x290948: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x290948u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29094c: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x29094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x290950: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290954: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x290954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x290958: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290958u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29095c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x29095Cu;
    SET_GPR_U32(ctx, 31, 0x290964u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x29095Cu, 0x290964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290964u;
label_290964:
    // 0x290964: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x290964u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x290968: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x290968u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29096c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29096cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x290970: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x290970u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290974: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x290974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290978: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x290978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29097c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29097cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x290980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29098c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x29098cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x290990: 0x3e00008  jr          $ra
    ctx->pc = 0x290990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290998u;
}
