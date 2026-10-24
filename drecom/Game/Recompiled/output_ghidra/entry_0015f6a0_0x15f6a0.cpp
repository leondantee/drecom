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

// Function: entry_0015f6a0
// Address: 0x15f6a0 - 0x15f7b4
void entry_0015f6a0_0x15f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f6a0_0x15f6a0");
#endif

    switch (ctx->pc) {
        case 0x15f6b0u: goto label_15f6b0;
        case 0x15f710u: goto label_15f710;
        case 0x15f720u: goto label_15f720;
        default: break;
    }

    ctx->pc = 0x15f6a0u;

    // 0x15f6a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f6a4: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x15f6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f6a8: 0xc067844  jal         func_19E110
    ctx->pc = 0x15F6A8u;
    SET_GPR_U32(ctx, 31, 0x15F6B0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x15F6A8u, 0x15F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F6B0u;
label_15f6b0:
    // 0x15f6b0: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x15f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f6b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15f6b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f6b8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x15f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f6bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15f6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f6c4: 0x0  nop
    ctx->pc = 0x15f6c4u;
    // NOP
    // 0x15f6c8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15f6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f6cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f6d0: 0x0  nop
    ctx->pc = 0x15f6d0u;
    // NOP
    // 0x15f6d4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15f6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15f6d8: 0x3c02441c  lui         $v0, 0x441C
    ctx->pc = 0x15f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17436 << 16));
    // 0x15f6dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15f6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15f6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f6e4: 0x0  nop
    ctx->pc = 0x15f6e4u;
    // NOP
    // 0x15f6e8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15f6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f6ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f6f4: 0x0  nop
    ctx->pc = 0x15f6f4u;
    // NOP
    // 0x15f6f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15f6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15f6fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f700: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f704: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15f704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f708: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F708u;
    SET_GPR_U32(ctx, 31, 0x15F710u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F710u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F710u) { return; }
    ctx->pc = 0x15F710u;
label_15f710:
    // 0x15f710: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f714: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x15f714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15f718: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x15F718u;
    SET_GPR_U32(ctx, 31, 0x15F720u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x15F718u, 0x15F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F720u;
label_15f720:
    // 0x15f720: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x15f724: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f728: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x15f728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x15f72c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x15F72Cu;
    {
        const bool branch_taken_0x15f72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f72c) {
            ctx->pc = 0x15F7ECu;
            return;
        }
    }
    ctx->pc = 0x15F734u;
    // 0x15f734: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x15f738: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15f738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15f73c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15F73Cu;
    {
        const bool branch_taken_0x15f73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f73c) {
            ctx->pc = 0x15F7ECu;
            return;
        }
    }
    ctx->pc = 0x15F744u;
    // 0x15f744: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x15f744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x15f748: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x15F748u;
    {
        const bool branch_taken_0x15f748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f748) {
            ctx->pc = 0x15F7ECu;
            return;
        }
    }
    ctx->pc = 0x15F750u;
    // 0x15f750: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x15f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f754: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x15f754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x15f758: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15f758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15f75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f760: 0x0  nop
    ctx->pc = 0x15f760u;
    // NOP
    // 0x15f764: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15f764u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15f768: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f76c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15f76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f770: 0x0  nop
    ctx->pc = 0x15f770u;
    // NOP
    // 0x15f774: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x15F774u;
    {
        const bool branch_taken_0x15f774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f774) {
            ctx->pc = 0x15F7B4u;
            return;
        }
    }
    ctx->pc = 0x15F77Cu;
    // 0x15f77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f780: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f784: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15f784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15f788: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f78c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f78cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f790: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f794: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f798: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f79c: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x15f79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x15f7a0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f7a4: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f7ac: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x15F7ACu;
    {
        const bool branch_taken_0x15f7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f7ac) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F7B4u;
}
