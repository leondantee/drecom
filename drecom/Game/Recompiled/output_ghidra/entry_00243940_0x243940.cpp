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

// Function: entry_00243940
// Address: 0x243940 - 0x2439e8
void entry_00243940_0x243940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243940_0x243940");
#endif

    switch (ctx->pc) {
        case 0x243950u: goto label_243950;
        case 0x243964u: goto label_243964;
        case 0x243978u: goto label_243978;
        case 0x2439a8u: goto label_2439a8;
        default: break;
    }

    ctx->pc = 0x243940u;

    // 0x243940: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243944: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x243944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x243948: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x243948u;
    SET_GPR_U32(ctx, 31, 0x243950u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x243948u, 0x243950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243950u;
label_243950:
    // 0x243950: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x243950u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x243954: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243958: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x243958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24395c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x24395Cu;
    SET_GPR_U32(ctx, 31, 0x243964u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x24395Cu, 0x243964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243964u;
label_243964:
    // 0x243964: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x243964u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x243968: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24396c: 0xc44c0128  lwc1        $f12, 0x128($v0)
    ctx->pc = 0x24396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x243970: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x243970u;
    SET_GPR_U32(ctx, 31, 0x243978u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x243970u, 0x243978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243978u;
label_243978:
    // 0x243978: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x243978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x24397c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24397cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x243980: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x243980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x243984: 0x34630a05  ori         $v1, $v1, 0xA05
    ctx->pc = 0x243984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2565);
    // 0x243988: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x243988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x24398c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24398cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x243990: 0x24651248  addiu       $a1, $v1, 0x1248
    ctx->pc = 0x243990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4680));
    // 0x243994: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x243994u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x243998: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x243998u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x24399c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x24399cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2439a0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2439A0u;
    SET_GPR_U32(ctx, 31, 0x2439A8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2439A0u, 0x2439A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439A8u;
label_2439a8:
    // 0x2439a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2439a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2439ac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2439acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2439b0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2439b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2439b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2439b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2439b8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2439b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2439bc: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2439bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2439c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2439c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2439c4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2439c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2439c8: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2439c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2439cc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x2439ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2439d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2439d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2439d4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2439d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2439d8: 0x34420a06  ori         $v0, $v0, 0xA06
    ctx->pc = 0x2439d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2566);
    // 0x2439dc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2439dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2439e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2439e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2439e4: 0x24451258  addiu       $a1, $v0, 0x1258
    ctx->pc = 0x2439e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    ctx->pc = 0x2439e8u;
}
