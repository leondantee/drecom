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

// Function: entry_00161d80
// Address: 0x161d80 - 0x161e78
void entry_00161d80_0x161d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161d80_0x161d80");
#endif

    switch (ctx->pc) {
        case 0x161e10u: goto label_161e10;
        case 0x161e24u: goto label_161e24;
        case 0x161e3cu: goto label_161e3c;
        default: break;
    }

    ctx->pc = 0x161d80u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x161E78u;
}
