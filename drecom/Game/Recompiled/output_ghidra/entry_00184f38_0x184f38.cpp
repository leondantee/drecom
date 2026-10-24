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

// Function: entry_00184f38
// Address: 0x184f38 - 0x184fe4
void entry_00184f38_0x184f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184f38_0x184f38");
#endif

    switch (ctx->pc) {
        case 0x184f68u: goto label_184f68;
        case 0x184f70u: goto label_184f70;
        case 0x184f78u: goto label_184f78;
        case 0x184f80u: goto label_184f80;
        case 0x184f88u: goto label_184f88;
        case 0x184f9cu: goto label_184f9c;
        case 0x184fa4u: goto label_184fa4;
        case 0x184facu: goto label_184fac;
        case 0x184fb8u: goto label_184fb8;
        case 0x184fd0u: goto label_184fd0;
        default: break;
    }

    ctx->pc = 0x184f38u;

label_184f38:
    // 0x184f38: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x184f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184f3c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x184f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x184f40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x184f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x184f44: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x184f44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x184f48: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x184f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x184f4c: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x184F4Cu;
    {
        const bool branch_taken_0x184f4c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x184f4c) {
            ctx->pc = 0x184F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184f38;
        }
    }
    ctx->pc = 0x184F54u;
    // 0x184f54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x184f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184f58: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x184f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x184f5c: 0x8c44016c  lw          $a0, 0x16C($v0)
    ctx->pc = 0x184f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x184f60: 0xc061400  jal         func_185000
    ctx->pc = 0x184F60u;
    SET_GPR_U32(ctx, 31, 0x184F68u);
    ctx->pc = 0x185000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185000u, 0x184F60u, 0x184F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F68u;
label_184f68:
    // 0x184f68: 0xc061958  jal         func_186560
    ctx->pc = 0x184F68u;
    SET_GPR_U32(ctx, 31, 0x184F70u);
    ctx->pc = 0x186560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186560u, 0x184F68u, 0x184F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F70u;
label_184f70:
    // 0x184f70: 0xc0614a4  jal         func_185290
    ctx->pc = 0x184F70u;
    SET_GPR_U32(ctx, 31, 0x184F78u);
    ctx->pc = 0x185290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185290u, 0x184F70u, 0x184F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F78u;
label_184f78:
    // 0x184f78: 0xc0615a4  jal         func_185690
    ctx->pc = 0x184F78u;
    SET_GPR_U32(ctx, 31, 0x184F80u);
    ctx->pc = 0x185690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185690u, 0x184F78u, 0x184F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F80u;
label_184f80:
    // 0x184f80: 0xc0615f0  jal         func_1857C0
    ctx->pc = 0x184F80u;
    SET_GPR_U32(ctx, 31, 0x184F88u);
    ctx->pc = 0x1857C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1857C0u, 0x184F80u, 0x184F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F88u;
label_184f88:
    // 0x184f88: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x184f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x184f8c: 0x8c42016c  lw          $v0, 0x16C($v0)
    ctx->pc = 0x184f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x184f90: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x184f90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x184f94: 0xc0616bc  jal         func_185AF0
    ctx->pc = 0x184F94u;
    SET_GPR_U32(ctx, 31, 0x184F9Cu);
    ctx->pc = 0x185AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AF0u, 0x184F94u, 0x184F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F9Cu;
label_184f9c:
    // 0x184f9c: 0xc0617a0  jal         func_185E80
    ctx->pc = 0x184F9Cu;
    SET_GPR_U32(ctx, 31, 0x184FA4u);
    ctx->pc = 0x185E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185E80u, 0x184F9Cu, 0x184FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FA4u;
label_184fa4:
    // 0x184fa4: 0xc06184c  jal         func_186130
    ctx->pc = 0x184FA4u;
    SET_GPR_U32(ctx, 31, 0x184FACu);
    ctx->pc = 0x186130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186130u, 0x184FA4u, 0x184FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FACu;
label_184fac:
    // 0x184fac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x184facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x184fb0: 0xc056518  jal         func_159460
    ctx->pc = 0x184FB0u;
    SET_GPR_U32(ctx, 31, 0x184FB8u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x184FB0u, 0x184FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FB8u;
label_184fb8:
    // 0x184fb8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x184fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x184fbc: 0x2444ef90  addiu       $a0, $v0, -0x1070
    ctx->pc = 0x184fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x184fc0: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x184fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x184fc4: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x184fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x184fc8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x184FC8u;
    SET_GPR_U32(ctx, 31, 0x184FD0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x184FC8u, 0x184FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FD0u;
label_184fd0:
    // 0x184fd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184fd4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x184fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x184fd8: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x184fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x184fdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x184fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x184fe0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x184fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x184fe4u;
}
