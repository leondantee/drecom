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

// Function: entry_0029d568
// Address: 0x29d568 - 0x29d690
void entry_0029d568_0x29d568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d568_0x29d568");
#endif

    switch (ctx->pc) {
        case 0x29d5bcu: goto label_29d5bc;
        case 0x29d5dcu: goto label_29d5dc;
        case 0x29d664u: goto label_29d664;
        case 0x29d684u: goto label_29d684;
        default: break;
    }

    ctx->pc = 0x29d568u;

    // 0x29d568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d56c: 0x0  nop
    ctx->pc = 0x29d56cu;
    // NOP
    // 0x29d570: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x29d570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29d574: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x29d574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
    // 0x29d578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d57c: 0x0  nop
    ctx->pc = 0x29d57cu;
    // NOP
    // 0x29d580: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x29d580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d584: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x29d584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x29d588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d58c: 0x0  nop
    ctx->pc = 0x29d58cu;
    // NOP
    // 0x29d590: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x29d590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29d594: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29d598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d59c: 0x0  nop
    ctx->pc = 0x29d59cu;
    // NOP
    // 0x29d5a0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x29d5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x29d5a4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d5a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29d5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d5ac: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x29d5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d5b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29d5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d5b4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29D5B4u;
    SET_GPR_U32(ctx, 31, 0x29D5BCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29D5BCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29D5BCu) { return; }
    ctx->pc = 0x29D5BCu;
label_29d5bc:
    // 0x29d5bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d5c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d5c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29d5c8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x29d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29d5cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29d5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d5d0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x29d5d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29d5d4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x29D5D4u;
    SET_GPR_U32(ctx, 31, 0x29D5DCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x29D5D4u, 0x29D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5DCu;
label_29d5dc:
    // 0x29d5dc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d5e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d5e4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x29d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x29d5e8: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x29d5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29d5ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29d5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29d5f0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x29d5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x29d5f4: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x29D5F4u;
    {
        const bool branch_taken_0x29d5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d5f4) {
            ctx->pc = 0x29D724u;
            return;
        }
    }
    ctx->pc = 0x29D5FCu;
    // 0x29d5fc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d600: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d604: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x29d604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29d608: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x29D608u;
    {
        const bool branch_taken_0x29d608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d608) {
            ctx->pc = 0x29D690u;
            return;
        }
    }
    ctx->pc = 0x29D610u;
    // 0x29d610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d614: 0x0  nop
    ctx->pc = 0x29d614u;
    // NOP
    // 0x29d618: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x29d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29d61c: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x29d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
    // 0x29d620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d624: 0x0  nop
    ctx->pc = 0x29d624u;
    // NOP
    // 0x29d628: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x29d628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d62c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d62cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d630: 0x0  nop
    ctx->pc = 0x29d630u;
    // NOP
    // 0x29d634: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x29d634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29d638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29d63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d640: 0x0  nop
    ctx->pc = 0x29d640u;
    // NOP
    // 0x29d644: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x29d644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x29d648: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d64c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d650: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29d650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d654: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x29d654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29d658: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29d658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d65c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29D65Cu;
    SET_GPR_U32(ctx, 31, 0x29D664u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29D664u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29D664u) { return; }
    ctx->pc = 0x29D664u;
label_29d664:
    // 0x29d664: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d668: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29d66c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29d670: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x29d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x29d674: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29d674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d678: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x29d678u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29d67c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x29D67Cu;
    SET_GPR_U32(ctx, 31, 0x29D684u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x29D67Cu, 0x29D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D684u;
label_29d684:
    // 0x29d684: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d688: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d68c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x29d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x29d690u;
}
