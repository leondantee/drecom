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

// Function: entry_0015fabc
// Address: 0x15fabc - 0x15fb94
void entry_0015fabc_0x15fabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fabc_0x15fabc");
#endif

    switch (ctx->pc) {
        case 0x15fb50u: goto label_15fb50;
        case 0x15fb64u: goto label_15fb64;
        case 0x15fb7cu: goto label_15fb7c;
        default: break;
    }

    ctx->pc = 0x15fabcu;

    // 0x15fabc: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x15fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x15fac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fac4: 0x0  nop
    ctx->pc = 0x15fac4u;
    // NOP
    // 0x15fac8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15fac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15facc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15fad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fad4: 0x0  nop
    ctx->pc = 0x15fad4u;
    // NOP
    // 0x15fad8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15fad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15fadc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fae0: 0x0  nop
    ctx->pc = 0x15fae0u;
    // NOP
    // 0x15fae4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15fae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15fae8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15faec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15faecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15faf0: 0x0  nop
    ctx->pc = 0x15faf0u;
    // NOP
    // 0x15faf4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15faf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15faf8: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x15faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x15fafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb00: 0x0  nop
    ctx->pc = 0x15fb00u;
    // NOP
    // 0x15fb04: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15fb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15fb08: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15fb0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb10: 0x0  nop
    ctx->pc = 0x15fb10u;
    // NOP
    // 0x15fb14: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15fb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15fb18: 0x3c02441c  lui         $v0, 0x441C
    ctx->pc = 0x15fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17436 << 16));
    // 0x15fb1c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15fb20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb24: 0x0  nop
    ctx->pc = 0x15fb24u;
    // NOP
    // 0x15fb28: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15fb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15fb2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fb30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb34: 0x0  nop
    ctx->pc = 0x15fb34u;
    // NOP
    // 0x15fb38: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x15fb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x15fb3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fb40: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15fb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15fb44: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15fb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fb48: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FB48u;
    SET_GPR_U32(ctx, 31, 0x15FB50u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FB50u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FB50u) { return; }
    ctx->pc = 0x15FB50u;
label_15fb50:
    // 0x15fb50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fb54: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15fb58: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fb5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FB5Cu;
    SET_GPR_U32(ctx, 31, 0x15FB64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FB64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FB64u) { return; }
    ctx->pc = 0x15FB64u;
label_15fb64:
    // 0x15fb64: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fb68: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15fb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fb6c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15fb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fb70: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15fb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15fb74: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15FB74u;
    SET_GPR_U32(ctx, 31, 0x15FB7Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15FB74u, 0x15FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB7Cu;
label_15fb7c:
    // 0x15fb7c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x15fb7cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15fb80: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FB80u;
    {
        const bool branch_taken_0x15fb80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb80) {
            ctx->pc = 0x15FB94u;
            return;
        }
    }
    ctx->pc = 0x15FB88u;
    // 0x15fb88: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15fb88u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15fb8c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15FB8Cu;
    {
        const bool branch_taken_0x15fb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb8c) {
            ctx->pc = 0x15FBC4u;
            return;
        }
    }
    ctx->pc = 0x15FB94u;
}
