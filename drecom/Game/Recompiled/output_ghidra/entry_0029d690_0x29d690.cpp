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

// Function: entry_0029d690
// Address: 0x29d690 - 0x29d724
void entry_0029d690_0x29d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d690_0x29d690");
#endif

    switch (ctx->pc) {
        case 0x29d6f8u: goto label_29d6f8;
        case 0x29d718u: goto label_29d718;
        default: break;
    }

    ctx->pc = 0x29d690u;

    // 0x29d690: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d694: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d698: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x29d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29d69c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x29D69Cu;
    {
        const bool branch_taken_0x29d69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d69c) {
            ctx->pc = 0x29D724u;
            return;
        }
    }
    ctx->pc = 0x29D6A4u;
    // 0x29d6a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d6a8: 0x0  nop
    ctx->pc = 0x29d6a8u;
    // NOP
    // 0x29d6ac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x29d6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29d6b0: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x29d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
    // 0x29d6b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d6b8: 0x0  nop
    ctx->pc = 0x29d6b8u;
    // NOP
    // 0x29d6bc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x29d6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d6c4: 0x0  nop
    ctx->pc = 0x29d6c4u;
    // NOP
    // 0x29d6c8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x29d6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29d6cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29d6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d6d4: 0x0  nop
    ctx->pc = 0x29d6d4u;
    // NOP
    // 0x29d6d8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x29d6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x29d6dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d6e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d6e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d6e8: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x29d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29d6ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29d6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d6f0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29D6F0u;
    SET_GPR_U32(ctx, 31, 0x29D6F8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29D6F8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29D6F8u) { return; }
    ctx->pc = 0x29D6F8u;
label_29d6f8:
    // 0x29d6f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d6fc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d700: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29d704: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d708: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x29d708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29d70c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x29d70cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29d710: 0xc059e1c  jal         func_167870
    ctx->pc = 0x29D710u;
    SET_GPR_U32(ctx, 31, 0x29D718u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x29D710u, 0x29D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D718u;
label_29d718:
    // 0x29d718: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d71c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d720: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x29d720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x29d724u;
}
