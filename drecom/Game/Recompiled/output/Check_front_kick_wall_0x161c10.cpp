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

// Function: Check_front_kick_wall
// Address: 0x161c10 - 0x161e98
void Check_front_kick_wall_0x161c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_front_kick_wall_0x161c10");
#endif

    switch (ctx->pc) {
        case 0x161c78u: goto label_161c78;
        case 0x161c88u: goto label_161c88;
        case 0x161d18u: goto label_161d18;
        case 0x161d2cu: goto label_161d2c;
        case 0x161d44u: goto label_161d44;
        case 0x161e10u: goto label_161e10;
        case 0x161e24u: goto label_161e24;
        case 0x161e3cu: goto label_161e3c;
        default: break;
    }

    ctx->pc = 0x161c10u;

    // 0x161c10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x161c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x161c14: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x161c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x161c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x161c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x161c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161c24: 0xe7ac00b8  swc1        $f12, 0xB8($sp)
    ctx->pc = 0x161c24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x161c28: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x161c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x161c2c: 0x2451dbc0  addiu       $s1, $v0, -0x2440
    ctx->pc = 0x161c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x161c30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x161c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x161c34: 0x2452eea0  addiu       $s2, $v0, -0x1160
    ctx->pc = 0x161c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x161c38: 0x8e2212f4  lw          $v0, 0x12F4($s1)
    ctx->pc = 0x161c38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EEEB4u));
    // 0x161c3c: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x161c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x161c40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161C40u;
    {
        const bool branch_taken_0x161c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161c40) {
            ctx->pc = 0x161C68u;
            goto label_161c68;
        }
    }
    ctx->pc = 0x161C48u;
    // 0x161c48: 0x8e2312f4  lw          $v1, 0x12F4($s1)
    ctx->pc = 0x161c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4852)));
    // 0x161c4c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x161c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x161c50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161c54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161C54u;
    {
        const bool branch_taken_0x161c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161c54) {
            ctx->pc = 0x161C68u;
            goto label_161c68;
        }
    }
    ctx->pc = 0x161C5Cu;
    // 0x161c5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161c60: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x161C60u;
    {
        const bool branch_taken_0x161c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161c60) {
            ctx->pc = 0x161E7Cu;
            goto label_161e7c;
        }
    }
    ctx->pc = 0x161C68u;
label_161c68:
    // 0x161c68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x161c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161c6c: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x161c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161c70: 0xc067844  jal         func_19E110
    ctx->pc = 0x161C70u;
    SET_GPR_U32(ctx, 31, 0x161C78u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x161C70u, 0x161C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C78u;
label_161c78:
    // 0x161c78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x161c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x161c7c: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x161c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x161c80: 0xc040c9e  jal         func_103278
    ctx->pc = 0x161C80u;
    SET_GPR_U32(ctx, 31, 0x161C88u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x161C88u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x161C88u) { return; }
    ctx->pc = 0x161C88u;
label_161c88:
    // 0x161c88: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x161c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x161c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161c90: 0x0  nop
    ctx->pc = 0x161c90u;
    // NOP
    // 0x161c94: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x161c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x161c98: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x161c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x161c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161ca0: 0x0  nop
    ctx->pc = 0x161ca0u;
    // NOP
    // 0x161ca4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x161ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x161ca8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161cac: 0x0  nop
    ctx->pc = 0x161cacu;
    // NOP
    // 0x161cb0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x161cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x161cb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161cbc: 0x0  nop
    ctx->pc = 0x161cbcu;
    // NOP
    // 0x161cc0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x161cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x161cc4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x161cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x161cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161ccc: 0x0  nop
    ctx->pc = 0x161cccu;
    // NOP
    // 0x161cd0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x161cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x161cd4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x161cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x161cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161cdc: 0x0  nop
    ctx->pc = 0x161cdcu;
    // NOP
    // 0x161ce0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x161ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x161ce4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x161ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x161ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161cec: 0x0  nop
    ctx->pc = 0x161cecu;
    // NOP
    // 0x161cf0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x161cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x161cf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161cfc: 0x0  nop
    ctx->pc = 0x161cfcu;
    // NOP
    // 0x161d00: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x161d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x161d04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x161d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x161d08: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x161d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161d0c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x161d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x161d10: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x161D10u;
    SET_GPR_U32(ctx, 31, 0x161D18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x161D18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x161D18u) { return; }
    ctx->pc = 0x161D18u;
label_161d18:
    // 0x161d18: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x161d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x161d1c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x161d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161d20: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x161d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x161d24: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x161D24u;
    SET_GPR_U32(ctx, 31, 0x161D2Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x161D2Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x161D2Cu) { return; }
    ctx->pc = 0x161D2Cu;
label_161d2c:
    // 0x161d2c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x161d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x161d30: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x161d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x161d34: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x161d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x161d38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x161d38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x161d3c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x161D3Cu;
    SET_GPR_U32(ctx, 31, 0x161D44u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x161D3Cu, 0x161D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161D44u;
label_161d44:
    // 0x161d44: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x161d44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x161d48: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x161D48u;
    {
        const bool branch_taken_0x161d48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d48) {
            ctx->pc = 0x161D80u;
            goto label_161d80;
        }
    }
    ctx->pc = 0x161D50u;
    // 0x161d50: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x161d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x161d54: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x161d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x161d58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161D58u;
    {
        const bool branch_taken_0x161d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d58) {
            ctx->pc = 0x161D80u;
            goto label_161d80;
        }
    }
    ctx->pc = 0x161D60u;
    // 0x161d60: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x161d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x161d64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x161d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x161d68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161d6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161D6Cu;
    {
        const bool branch_taken_0x161d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161d6c) {
            ctx->pc = 0x161D80u;
            goto label_161d80;
        }
    }
    ctx->pc = 0x161D74u;
    // 0x161d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161d78: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x161D78u;
    {
        const bool branch_taken_0x161d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d78) {
            ctx->pc = 0x161E7Cu;
            goto label_161e7c;
        }
    }
    ctx->pc = 0x161D80u;
label_161d80:
    // 0x161d80: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x161d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x161d84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161d88: 0x0  nop
    ctx->pc = 0x161d88u;
    // NOP
    // 0x161d8c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x161d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x161d90: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x161d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x161d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161d98: 0x0  nop
    ctx->pc = 0x161d98u;
    // NOP
    // 0x161d9c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x161d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x161da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161da4: 0x0  nop
    ctx->pc = 0x161da4u;
    // NOP
    // 0x161da8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x161da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x161dac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161db4: 0x0  nop
    ctx->pc = 0x161db4u;
    // NOP
    // 0x161db8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x161db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x161dbc: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x161dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x161dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161dc4: 0x0  nop
    ctx->pc = 0x161dc4u;
    // NOP
    // 0x161dc8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x161dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x161dcc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x161dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x161dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161dd4: 0x0  nop
    ctx->pc = 0x161dd4u;
    // NOP
    // 0x161dd8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x161dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x161ddc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x161ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x161de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161de4: 0x0  nop
    ctx->pc = 0x161de4u;
    // NOP
    // 0x161de8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x161de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x161dec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161df4: 0x0  nop
    ctx->pc = 0x161df4u;
    // NOP
    // 0x161df8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x161df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x161dfc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x161dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x161e00: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x161e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161e04: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x161e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x161e08: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x161E08u;
    SET_GPR_U32(ctx, 31, 0x161E10u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x161E10u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x161E10u) { return; }
    ctx->pc = 0x161E10u;
label_161e10:
    // 0x161e10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x161e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x161e14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x161e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161e18: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x161e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x161e1c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x161E1Cu;
    SET_GPR_U32(ctx, 31, 0x161E24u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x161E24u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x161E24u) { return; }
    ctx->pc = 0x161E24u;
label_161e24:
    // 0x161e24: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x161e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x161e28: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x161e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x161e2c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x161e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x161e30: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x161e30u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x161e34: 0xc059e1c  jal         func_167870
    ctx->pc = 0x161E34u;
    SET_GPR_U32(ctx, 31, 0x161E3Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x161E34u, 0x161E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E3Cu;
label_161e3c:
    // 0x161e3c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x161e3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x161e40: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x161E40u;
    {
        const bool branch_taken_0x161e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x161e40) {
            ctx->pc = 0x161E78u;
            goto label_161e78;
        }
    }
    ctx->pc = 0x161E48u;
    // 0x161e48: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x161e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x161e4c: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x161e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x161e50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161E50u;
    {
        const bool branch_taken_0x161e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161e50) {
            ctx->pc = 0x161E78u;
            goto label_161e78;
        }
    }
    ctx->pc = 0x161E58u;
    // 0x161e58: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x161e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x161e5c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x161e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x161e60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161e64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161E64u;
    {
        const bool branch_taken_0x161e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161e64) {
            ctx->pc = 0x161E78u;
            goto label_161e78;
        }
    }
    ctx->pc = 0x161E6Cu;
    // 0x161e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161e70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161E70u;
    {
        const bool branch_taken_0x161e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161e70) {
            ctx->pc = 0x161E7Cu;
            goto label_161e7c;
        }
    }
    ctx->pc = 0x161E78u;
label_161e78:
    // 0x161e78: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x161e78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_161e7c:
    // 0x161e7c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x161e7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161e80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x161e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161e84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161e88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161e8c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x161e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x161e90: 0x3e00008  jr          $ra
    ctx->pc = 0x161E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161E98u;
}
