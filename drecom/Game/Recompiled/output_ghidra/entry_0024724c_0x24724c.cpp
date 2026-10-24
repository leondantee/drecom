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

// Function: entry_0024724c
// Address: 0x24724c - 0x2472e0
void entry_0024724c_0x24724c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024724c_0x24724c");
#endif

    switch (ctx->pc) {
        case 0x24729cu: goto label_24729c;
        case 0x2472acu: goto label_2472ac;
        case 0x2472bcu: goto label_2472bc;
        default: break;
    }

    ctx->pc = 0x24724cu;

    // 0x24724c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x24724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x247250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247254: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x247254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x247258: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x247258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24725c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x24725cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x247260: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x247260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x247264: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x247264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x247268: 0x74438  dsll        $t0, $a3, 16
    ctx->pc = 0x247268u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << 16);
    // 0x24726c: 0x3502ffff  ori         $v0, $t0, 0xFFFF
    ctx->pc = 0x24726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x247270: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x247270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x247274: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x247274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x247278: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x247278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x24727c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247280: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x247280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x247284: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x247284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x247288: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x247288u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24728c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x24728cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x247290: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x247290u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x247294: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x247294u;
    SET_GPR_U32(ctx, 31, 0x24729Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x247294u, 0x24729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24729Cu;
label_24729c:
    // 0x24729c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x24729cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2472a0: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x2472a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x2472a4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2472A4u;
    SET_GPR_U32(ctx, 31, 0x2472ACu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2472A4u, 0x2472ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472ACu;
label_2472ac:
    // 0x2472ac: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2472acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x2472b0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x2472b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x2472b4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2472B4u;
    SET_GPR_U32(ctx, 31, 0x2472BCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2472B4u, 0x2472BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472BCu;
label_2472bc:
    // 0x2472bc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2472bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2472c0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2472c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2472c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2472c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2472c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2472c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2472cc: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x2472ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x2472d0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2472d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2472d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2472d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2472d8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2472D8u;
    SET_GPR_U32(ctx, 31, 0x2472E0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2472D8u, 0x2472E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472E0u;
}
