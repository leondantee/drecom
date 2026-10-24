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

// Function: entry_00283278
// Address: 0x283278 - 0x283320
void entry_00283278_0x283278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283278_0x283278");
#endif

    switch (ctx->pc) {
        case 0x2832b8u: goto label_2832b8;
        case 0x2832c4u: goto label_2832c4;
        case 0x283310u: goto label_283310;
        case 0x28331cu: goto label_28331c;
        default: break;
    }

    ctx->pc = 0x283278u;

    // 0x283278: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x283278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28327c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x283280: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x283280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
    // 0x283284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283288: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x283288u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28328c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283290: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x283290u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x283294: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x283294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x283298: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x283298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28329c: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x28329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
    // 0x2832a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2832a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2832a4: 0x24041c00  addiu       $a0, $zero, 0x1C00
    ctx->pc = 0x2832a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x2832a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2832a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2832ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2832acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2832b0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2832B0u;
    SET_GPR_U32(ctx, 31, 0x2832B8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2832B0u, 0x2832B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832B8u;
label_2832b8:
    // 0x2832b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2832b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2832bc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2832BCu;
    SET_GPR_U32(ctx, 31, 0x2832C4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2832BCu, 0x2832C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832C4u;
label_2832c4:
    // 0x2832c4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2832c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2832c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2832c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2832cc: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x2832ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
    // 0x2832d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2832d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2832d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2832d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2832d8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2832d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2832dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2832dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2832e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2832e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2832e4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2832e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2832e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2832e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2832ec: 0x0  nop
    ctx->pc = 0x2832ecu;
    // NOP
    // 0x2832f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2832f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2832f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2832f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2832f8: 0x24041716  addiu       $a0, $zero, 0x1716
    ctx->pc = 0x2832f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5910));
    // 0x2832fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2832fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283300: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x283300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283304: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283304u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283308: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x283308u;
    SET_GPR_U32(ctx, 31, 0x283310u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x283308u, 0x283310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283310u;
label_283310:
    // 0x283310: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x283310u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283314: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x283314u;
    SET_GPR_U32(ctx, 31, 0x28331Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x283314u, 0x28331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28331Cu;
label_28331c:
    // 0x28331c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28331cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x283320u;
}
