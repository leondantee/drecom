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

// Function: entry_0035a0a4
// Address: 0x35a0a4 - 0x35a160
void entry_0035a0a4_0x35a0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a0a4_0x35a0a4");
#endif

    switch (ctx->pc) {
        case 0x35a0ecu: goto label_35a0ec;
        case 0x35a154u: goto label_35a154;
        default: break;
    }

    ctx->pc = 0x35a0a4u;

    // 0x35a0a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a0a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a0ac: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x35a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35a0b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35a0b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a0b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35a0bc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x35a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x35a0c0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x35a0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35a0c4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x35a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x35a0c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x35a0c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a0cc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a0d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35a0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x35a0d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a0d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a0dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35a0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a0e0: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x35a0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35a0e4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x35A0E4u;
    SET_GPR_U32(ctx, 31, 0x35A0ECu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x35A0ECu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35A0ECu) { return; }
    ctx->pc = 0x35A0ECu;
label_35a0ec:
    // 0x35a0ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a0f0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x35a0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a0f4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x35a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a0f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35a0f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35a0fc: 0x0  nop
    ctx->pc = 0x35a0fcu;
    // NOP
    // 0x35a100: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x35A100u;
    {
        const bool branch_taken_0x35a100 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35a100) {
            ctx->pc = 0x35A160u;
            return;
        }
    }
    ctx->pc = 0x35A108u;
    // 0x35a108: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a10c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35a110: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x35a110u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x35a114: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x35a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x35a118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x35a11c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35A11Cu;
    {
        const bool branch_taken_0x35a11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a11c) {
            ctx->pc = 0x35A160u;
            return;
        }
    }
    ctx->pc = 0x35A124u;
    // 0x35a124: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a128: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35a128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35a12c: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x35a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x35a130: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x35a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x35a134: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35a134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35a138: 0xac82128c  sw          $v0, 0x128C($a0)
    ctx->pc = 0x35a138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 2));
    // 0x35a13c: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x35a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x35a140: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35a140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a144: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35a144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a148: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35a148u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a14c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35A14Cu;
    SET_GPR_U32(ctx, 31, 0x35A154u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35A14Cu, 0x35A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A154u;
label_35a154:
    // 0x35a154: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35a154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35a158: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35A158u;
    SET_GPR_U32(ctx, 31, 0x35A160u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35A158u, 0x35A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A160u;
}
