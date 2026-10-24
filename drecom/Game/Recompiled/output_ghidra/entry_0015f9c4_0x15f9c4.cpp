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

// Function: entry_0015f9c4
// Address: 0x15f9c4 - 0x15fabc
void entry_0015f9c4_0x15f9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f9c4_0x15f9c4");
#endif

    switch (ctx->pc) {
        case 0x15f9d4u: goto label_15f9d4;
        case 0x15fa78u: goto label_15fa78;
        case 0x15fa8cu: goto label_15fa8c;
        case 0x15faa4u: goto label_15faa4;
        default: break;
    }

    ctx->pc = 0x15f9c4u;

    // 0x15f9c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f9c8: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x15f9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f9cc: 0xc067844  jal         func_19E110
    ctx->pc = 0x15F9CCu;
    SET_GPR_U32(ctx, 31, 0x15F9D4u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x15F9CCu, 0x15F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F9D4u;
label_15f9d4:
    // 0x15f9d4: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x15f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f9d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15f9d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f9dc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x15f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f9e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15f9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15f9e4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f9ec: 0x0  nop
    ctx->pc = 0x15f9ecu;
    // NOP
    // 0x15f9f0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15f9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f9f4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f9fc: 0x0  nop
    ctx->pc = 0x15f9fcu;
    // NOP
    // 0x15fa00: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15fa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15fa04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fa04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa08: 0x0  nop
    ctx->pc = 0x15fa08u;
    // NOP
    // 0x15fa0c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15fa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15fa10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fa14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa18: 0x0  nop
    ctx->pc = 0x15fa18u;
    // NOP
    // 0x15fa1c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15fa1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15fa20: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15fa24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa28: 0x0  nop
    ctx->pc = 0x15fa28u;
    // NOP
    // 0x15fa2c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15fa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15fa30: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15fa34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa38: 0x0  nop
    ctx->pc = 0x15fa38u;
    // NOP
    // 0x15fa3c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15fa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15fa40: 0x3c02441c  lui         $v0, 0x441C
    ctx->pc = 0x15fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17436 << 16));
    // 0x15fa44: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15fa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15fa48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa4c: 0x0  nop
    ctx->pc = 0x15fa4cu;
    // NOP
    // 0x15fa50: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15fa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15fa54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fa58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa5c: 0x0  nop
    ctx->pc = 0x15fa5cu;
    // NOP
    // 0x15fa60: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x15fa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x15fa64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fa68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15fa68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15fa6c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fa70: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FA70u;
    SET_GPR_U32(ctx, 31, 0x15FA78u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FA78u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FA78u) { return; }
    ctx->pc = 0x15FA78u;
label_15fa78:
    // 0x15fa78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fa7c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15fa80: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15fa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fa84: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FA84u;
    SET_GPR_U32(ctx, 31, 0x15FA8Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FA8Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FA8Cu) { return; }
    ctx->pc = 0x15FA8Cu;
label_15fa8c:
    // 0x15fa8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fa90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fa94: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15fa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fa98: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15fa98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15fa9c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15FA9Cu;
    SET_GPR_U32(ctx, 31, 0x15FAA4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15FA9Cu, 0x15FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FAA4u;
label_15faa4:
    // 0x15faa4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x15faa4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15faa8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FAA8u;
    {
        const bool branch_taken_0x15faa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15faa8) {
            ctx->pc = 0x15FABCu;
            return;
        }
    }
    ctx->pc = 0x15FAB0u;
    // 0x15fab0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15fab0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15fab4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x15FAB4u;
    {
        const bool branch_taken_0x15fab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fab4) {
            ctx->pc = 0x15FBC4u;
            return;
        }
    }
    ctx->pc = 0x15FABCu;
}
