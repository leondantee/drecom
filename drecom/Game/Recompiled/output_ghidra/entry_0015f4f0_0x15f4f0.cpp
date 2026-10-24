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

// Function: entry_0015f4f0
// Address: 0x15f4f0 - 0x15f5c8
void entry_0015f4f0_0x15f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f4f0_0x15f4f0");
#endif

    switch (ctx->pc) {
        case 0x15f584u: goto label_15f584;
        case 0x15f598u: goto label_15f598;
        case 0x15f5b0u: goto label_15f5b0;
        default: break;
    }

    ctx->pc = 0x15f4f0u;

    // 0x15f4f0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f4f8: 0x0  nop
    ctx->pc = 0x15f4f8u;
    // NOP
    // 0x15f4fc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15f4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f500: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f508: 0x0  nop
    ctx->pc = 0x15f508u;
    // NOP
    // 0x15f50c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15f50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15f510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f514: 0x0  nop
    ctx->pc = 0x15f514u;
    // NOP
    // 0x15f518: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15f518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f51c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f524: 0x0  nop
    ctx->pc = 0x15f524u;
    // NOP
    // 0x15f528: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15f528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15f52c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f534: 0x0  nop
    ctx->pc = 0x15f534u;
    // NOP
    // 0x15f538: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15f538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15f53c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f544: 0x0  nop
    ctx->pc = 0x15f544u;
    // NOP
    // 0x15f548: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15f548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15f54c: 0x3c02441c  lui         $v0, 0x441C
    ctx->pc = 0x15f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17436 << 16));
    // 0x15f550: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15f550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15f554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f558: 0x0  nop
    ctx->pc = 0x15f558u;
    // NOP
    // 0x15f55c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15f560: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f568: 0x0  nop
    ctx->pc = 0x15f568u;
    // NOP
    // 0x15f56c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x15f56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x15f570: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f574: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f578: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15f578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f57c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F57Cu;
    SET_GPR_U32(ctx, 31, 0x15F584u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F584u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F584u) { return; }
    ctx->pc = 0x15F584u;
label_15f584:
    // 0x15f584: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f588: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f58c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15f58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f590: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F590u;
    SET_GPR_U32(ctx, 31, 0x15F598u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F598u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F598u) { return; }
    ctx->pc = 0x15F598u;
label_15f598:
    // 0x15f598: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15f598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f59c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15f59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f5a0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15f5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f5a4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15f5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15f5a8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15F5A8u;
    SET_GPR_U32(ctx, 31, 0x15F5B0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15F5A8u, 0x15F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5B0u;
label_15f5b0:
    // 0x15f5b0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x15f5b0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15f5b4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F5B4u;
    {
        const bool branch_taken_0x15f5b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5b4) {
            ctx->pc = 0x15F5C8u;
            return;
        }
    }
    ctx->pc = 0x15F5BCu;
    // 0x15f5bc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f5bcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f5c0: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x15F5C0u;
    {
        const bool branch_taken_0x15f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5c0) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F5C8u;
}
