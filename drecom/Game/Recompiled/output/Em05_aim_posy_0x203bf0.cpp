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

// Function: Em05_aim_posy
// Address: 0x203bf0 - 0x203d80
void Em05_aim_posy_0x203bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_aim_posy_0x203bf0");
#endif

    switch (ctx->pc) {
        case 0x203c44u: goto label_203c44;
        case 0x203cd8u: goto label_203cd8;
        case 0x203cecu: goto label_203cec;
        case 0x203d00u: goto label_203d00;
        case 0x203d14u: goto label_203d14;
        case 0x203d30u: goto label_203d30;
        default: break;
    }

    ctx->pc = 0x203bf0u;

    // 0x203bf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x203bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x203bf4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x203bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x203bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203bfc: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x203bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x203c00: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x203c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x203c04: 0x2442a150  addiu       $v0, $v0, -0x5EB0
    ctx->pc = 0x203c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943056));
    // 0x203c08: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x203c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x203c0c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x203c0cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A150u));
    // 0x203c10: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x203c10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x203c14: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x203c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x203c18: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x203c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x203c1c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x203c1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203c20: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x203c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x203c24: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x203c24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x203c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203c2c: 0x0  nop
    ctx->pc = 0x203c2cu;
    // NOP
    // 0x203c30: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x203c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x203c34: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x203c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x203c38: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x203c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x203c3c: 0xc067588  jal         func_19D620
    ctx->pc = 0x203C3Cu;
    SET_GPR_U32(ctx, 31, 0x203C44u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x203C3Cu, 0x203C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C44u;
label_203c44:
    // 0x203c44: 0x3c02467a  lui         $v0, 0x467A
    ctx->pc = 0x203c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18042 << 16));
    // 0x203c48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x203c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203c4c: 0x0  nop
    ctx->pc = 0x203c4cu;
    // NOP
    // 0x203c50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x203c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203c54: 0x0  nop
    ctx->pc = 0x203c54u;
    // NOP
    // 0x203c58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x203C58u;
    {
        const bool branch_taken_0x203c58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x203c58) {
            ctx->pc = 0x203C74u;
            goto label_203c74;
        }
    }
    ctx->pc = 0x203C60u;
    // 0x203c60: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x203c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x203c64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x203c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x203c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203c6c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x203C6Cu;
    {
        const bool branch_taken_0x203c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c6c) {
            ctx->pc = 0x203D6Cu;
            goto label_203d6c;
        }
    }
    ctx->pc = 0x203C74u;
label_203c74:
    // 0x203c74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x203c78: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x203c78u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203c7c: 0x3c0244c8  lui         $v0, 0x44C8
    ctx->pc = 0x203c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17608 << 16));
    // 0x203c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203c84: 0x0  nop
    ctx->pc = 0x203c84u;
    // NOP
    // 0x203c88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x203c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203c8c: 0x0  nop
    ctx->pc = 0x203c8cu;
    // NOP
    // 0x203c90: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x203C90u;
    {
        const bool branch_taken_0x203c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x203c90) {
            ctx->pc = 0x203D48u;
            goto label_203d48;
        }
    }
    ctx->pc = 0x203C98u;
    // 0x203c98: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x203c9c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x203c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x203ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203ca4: 0x0  nop
    ctx->pc = 0x203ca4u;
    // NOP
    // 0x203ca8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x203ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x203cac: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x203cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x203cb0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x203cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x203cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203cb8: 0x0  nop
    ctx->pc = 0x203cb8u;
    // NOP
    // 0x203cbc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x203cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x203cc0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x203cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x203cc4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x203cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x203cc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203ccc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x203cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x203cd0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x203CD0u;
    SET_GPR_U32(ctx, 31, 0x203CD8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x203CD8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x203CD8u) { return; }
    ctx->pc = 0x203CD8u;
label_203cd8:
    // 0x203cd8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x203cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x203cdc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x203cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x203ce0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x203ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x203ce4: 0xc067844  jal         func_19E110
    ctx->pc = 0x203CE4u;
    SET_GPR_U32(ctx, 31, 0x203CECu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x203CE4u, 0x203CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CECu;
label_203cec:
    // 0x203cec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x203cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x203cf0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x203cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x203cf4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x203cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x203cf8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x203CF8u;
    SET_GPR_U32(ctx, 31, 0x203D00u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x203D00u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x203D00u) { return; }
    ctx->pc = 0x203D00u;
label_203d00:
    // 0x203d00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203d04: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x203d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x203d08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x203d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203d0c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x203D0Cu;
    SET_GPR_U32(ctx, 31, 0x203D14u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x203D14u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x203D14u) { return; }
    ctx->pc = 0x203D14u;
label_203d14:
    // 0x203d14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x203d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x203d18: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x203d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203d1c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x203d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x203d20: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203d24: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x203d28: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x203D28u;
    SET_GPR_U32(ctx, 31, 0x203D30u);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x203D28u, 0x203D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D30u;
label_203d30:
    // 0x203d30: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x203d30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x203d34: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203D34u;
    {
        const bool branch_taken_0x203d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203d34) {
            ctx->pc = 0x203D48u;
            goto label_203d48;
        }
    }
    ctx->pc = 0x203D3Cu;
    // 0x203d3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203d40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x203D40u;
    {
        const bool branch_taken_0x203d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203d40) {
            ctx->pc = 0x203D6Cu;
            goto label_203d6c;
        }
    }
    ctx->pc = 0x203D48u;
label_203d48:
    // 0x203d48: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x203d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x203d4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x203d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x203d50: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x203d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x203d54: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x203d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x203d58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x203d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203d5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x203d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x203d60: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x203d60u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203d64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x203d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x203d68: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x203d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_203d6c:
    // 0x203d6c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x203d6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203d74: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x203d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x203d78: 0x3e00008  jr          $ra
    ctx->pc = 0x203D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203D80u;
}
