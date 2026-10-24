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

// Function: eff2d_07_type1_move
// Address: 0x21f760 - 0x21f8d8
void eff2d_07_type1_move_0x21f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_07_type1_move_0x21f760");
#endif

    switch (ctx->pc) {
        case 0x21f78cu: goto label_21f78c;
        case 0x21f7b4u: goto label_21f7b4;
        case 0x21f7ccu: goto label_21f7cc;
        case 0x21f7f4u: goto label_21f7f4;
        case 0x21f820u: goto label_21f820;
        case 0x21f840u: goto label_21f840;
        case 0x21f868u: goto label_21f868;
        case 0x21f894u: goto label_21f894;
        default: break;
    }

    ctx->pc = 0x21f760u;

    // 0x21f760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21f760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21f764: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x21f764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x21f768: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x21f768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x21f76c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f770: 0x8c420114  lw          $v0, 0x114($v0)
    ctx->pc = 0x21f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x21f774: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x21F774u;
    {
        const bool branch_taken_0x21f774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f774) {
            ctx->pc = 0x21F828u;
            goto label_21f828;
        }
    }
    ctx->pc = 0x21F77Cu;
    // 0x21f77c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x21f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21f780: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x21f780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f784: 0xc040c9e  jal         func_103278
    ctx->pc = 0x21F784u;
    SET_GPR_U32(ctx, 31, 0x21F78Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x21F78Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F78Cu) { return; }
    ctx->pc = 0x21F78Cu;
label_21f78c:
    // 0x21f78c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21f790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f794: 0x0  nop
    ctx->pc = 0x21f794u;
    // NOP
    // 0x21f798: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x21f798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x21f79c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f7a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x21f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21f7a4: 0x8c450114  lw          $a1, 0x114($v0)
    ctx->pc = 0x21f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x21f7a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x21f7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21f7ac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x21F7ACu;
    SET_GPR_U32(ctx, 31, 0x21F7B4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x21F7B4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F7B4u) { return; }
    ctx->pc = 0x21F7B4u;
label_21f7b4:
    // 0x21f7b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f7b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f7bc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x21f7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21f7c0: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21f7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21f7c4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x21F7C4u;
    SET_GPR_U32(ctx, 31, 0x21F7CCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x21F7C4u, 0x21F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7CCu;
label_21f7cc:
    // 0x21f7cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21f7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f7d4: 0x0  nop
    ctx->pc = 0x21f7d4u;
    // NOP
    // 0x21f7d8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x21f7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x21f7dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f7e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f7e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x21f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f7e8: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x21f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f7ec: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21F7ECu;
    SET_GPR_U32(ctx, 31, 0x21F7F4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21F7F4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F7F4u) { return; }
    ctx->pc = 0x21F7F4u;
label_21f7f4:
    // 0x21f7f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21f7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f7fc: 0x0  nop
    ctx->pc = 0x21f7fcu;
    // NOP
    // 0x21f800: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x21f800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x21f804: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f808: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f80c: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x21f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x21f810: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x21f810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21f814: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x21f814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f818: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21F818u;
    SET_GPR_U32(ctx, 31, 0x21F820u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21F820u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F820u) { return; }
    ctx->pc = 0x21F820u;
label_21f820:
    // 0x21f820: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21F820u;
    {
        const bool branch_taken_0x21f820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f820) {
            ctx->pc = 0x21F894u;
            goto label_21f894;
        }
    }
    ctx->pc = 0x21F828u;
label_21f828:
    // 0x21f828: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f82c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f830: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x21f830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f834: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21f834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21f838: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x21F838u;
    SET_GPR_U32(ctx, 31, 0x21F840u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x21F838u, 0x21F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F840u;
label_21f840:
    // 0x21f840: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21f840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21f844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f848: 0x0  nop
    ctx->pc = 0x21f848u;
    // NOP
    // 0x21f84c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x21f84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x21f850: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f854: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21f854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f858: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x21f858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f85c: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x21f85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f860: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21F860u;
    SET_GPR_U32(ctx, 31, 0x21F868u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21F868u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F868u) { return; }
    ctx->pc = 0x21F868u;
label_21f868:
    // 0x21f868: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21f86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f870: 0x0  nop
    ctx->pc = 0x21f870u;
    // NOP
    // 0x21f874: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x21f874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x21f878: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f87c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f880: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x21f880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x21f884: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x21f884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21f888: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x21f888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f88c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21F88Cu;
    SET_GPR_U32(ctx, 31, 0x21F894u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21F894u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F894u) { return; }
    ctx->pc = 0x21F894u;
label_21f894:
    // 0x21f894: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21f894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f898: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x21f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f89c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21f8a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f8a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f8a4: 0x0  nop
    ctx->pc = 0x21f8a4u;
    // NOP
    // 0x21f8a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21f8a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f8ac: 0x0  nop
    ctx->pc = 0x21f8acu;
    // NOP
    // 0x21f8b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x21F8B0u;
    {
        const bool branch_taken_0x21f8b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f8b0) {
            ctx->pc = 0x21F8C8u;
            goto label_21f8c8;
        }
    }
    ctx->pc = 0x21F8B8u;
    // 0x21f8b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21f8bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f8bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f8c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f8c4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x21f8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_21f8c8:
    // 0x21f8c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21f8c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f8cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x21f8ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21f8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21F8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F8D8u;
}
