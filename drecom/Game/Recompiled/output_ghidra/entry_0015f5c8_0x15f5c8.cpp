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

// Function: entry_0015f5c8
// Address: 0x15f5c8 - 0x15f6a0
void entry_0015f5c8_0x15f5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f5c8_0x15f5c8");
#endif

    switch (ctx->pc) {
        case 0x15f65cu: goto label_15f65c;
        case 0x15f670u: goto label_15f670;
        case 0x15f688u: goto label_15f688;
        default: break;
    }

    ctx->pc = 0x15f5c8u;

    // 0x15f5c8: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x15f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x15f5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5d0: 0x0  nop
    ctx->pc = 0x15f5d0u;
    // NOP
    // 0x15f5d4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15f5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f5d8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5e0: 0x0  nop
    ctx->pc = 0x15f5e0u;
    // NOP
    // 0x15f5e4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15f5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15f5e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f5e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5ec: 0x0  nop
    ctx->pc = 0x15f5ecu;
    // NOP
    // 0x15f5f0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15f5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f5f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f5f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5fc: 0x0  nop
    ctx->pc = 0x15f5fcu;
    // NOP
    // 0x15f600: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15f600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15f604: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x15f604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x15f608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f60c: 0x0  nop
    ctx->pc = 0x15f60cu;
    // NOP
    // 0x15f610: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15f610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15f614: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f61c: 0x0  nop
    ctx->pc = 0x15f61cu;
    // NOP
    // 0x15f620: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15f620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15f624: 0x3c02441c  lui         $v0, 0x441C
    ctx->pc = 0x15f624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17436 << 16));
    // 0x15f628: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15f628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15f62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f630: 0x0  nop
    ctx->pc = 0x15f630u;
    // NOP
    // 0x15f634: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15f634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15f638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f640: 0x0  nop
    ctx->pc = 0x15f640u;
    // NOP
    // 0x15f644: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x15f644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x15f648: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f64c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f650: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15f650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f654: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F654u;
    SET_GPR_U32(ctx, 31, 0x15F65Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F65Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F65Cu) { return; }
    ctx->pc = 0x15F65Cu;
label_15f65c:
    // 0x15f65c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f660: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f664: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15f664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f668: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F668u;
    SET_GPR_U32(ctx, 31, 0x15F670u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F670u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F670u) { return; }
    ctx->pc = 0x15F670u;
label_15f670:
    // 0x15f670: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15f670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f674: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15f674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f678: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15f678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f67c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15f67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15f680: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15F680u;
    SET_GPR_U32(ctx, 31, 0x15F688u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15F680u, 0x15F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F688u;
label_15f688:
    // 0x15f688: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x15f688u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15f68c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F68Cu;
    {
        const bool branch_taken_0x15f68c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f68c) {
            ctx->pc = 0x15F6A0u;
            return;
        }
    }
    ctx->pc = 0x15F694u;
    // 0x15f694: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f694u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f698: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x15F698u;
    {
        const bool branch_taken_0x15f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f698) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F6A0u;
}
