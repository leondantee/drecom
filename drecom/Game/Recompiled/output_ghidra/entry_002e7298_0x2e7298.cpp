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

// Function: entry_002e7298
// Address: 0x2e7298 - 0x2e73f0
void entry_002e7298_0x2e7298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7298_0x2e7298");
#endif

    switch (ctx->pc) {
        case 0x2e72b8u: goto label_2e72b8;
        case 0x2e72d0u: goto label_2e72d0;
        case 0x2e72dcu: goto label_2e72dc;
        case 0x2e72e8u: goto label_2e72e8;
        case 0x2e73b4u: goto label_2e73b4;
        default: break;
    }

    ctx->pc = 0x2e7298u;

    // 0x2e7298: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e7298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e729c: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x2e729cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x2e72a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e72a4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2e72a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e72a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e72a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e72ac: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e72acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e72b0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E72B0u;
    SET_GPR_U32(ctx, 31, 0x2E72B8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E72B8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E72B8u) { return; }
    ctx->pc = 0x2E72B8u;
label_2e72b8:
    // 0x2e72b8: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2e72b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2e72bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e72bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e72c0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e72c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e72c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2e72c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e72c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E72C8u;
    SET_GPR_U32(ctx, 31, 0x2E72D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E72C8u, 0x2E72D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72D0u;
label_2e72d0:
    // 0x2e72d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e72d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e72d4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E72D4u;
    SET_GPR_U32(ctx, 31, 0x2E72DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E72D4u, 0x2E72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72DCu;
label_2e72dc:
    // 0x2e72dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e72dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e72e0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E72E0u;
    SET_GPR_U32(ctx, 31, 0x2E72E8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E72E0u, 0x2E72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72E8u;
label_2e72e8:
    // 0x2e72e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e72ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e72ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e72f0: 0x0  nop
    ctx->pc = 0x2e72f0u;
    // NOP
    // 0x2e72f4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e72f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e72f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e72fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e72fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7300: 0x0  nop
    ctx->pc = 0x2e7300u;
    // NOP
    // 0x2e7304: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2e7304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e7308: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e730c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e730cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7310: 0x0  nop
    ctx->pc = 0x2e7310u;
    // NOP
    // 0x2e7314: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e7314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e7318: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e731c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e731cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7320: 0x0  nop
    ctx->pc = 0x2e7320u;
    // NOP
    // 0x2e7324: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2e7324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2e7328: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e7328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e732c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e732cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7330: 0x0  nop
    ctx->pc = 0x2e7330u;
    // NOP
    // 0x2e7334: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e7334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e7338: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e7338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e733c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e733cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7340: 0x0  nop
    ctx->pc = 0x2e7340u;
    // NOP
    // 0x2e7344: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2e7344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2e7348: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e7348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e734c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e734cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7350: 0x0  nop
    ctx->pc = 0x2e7350u;
    // NOP
    // 0x2e7354: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e7354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e7358: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e7358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e735c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e735cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7360: 0x0  nop
    ctx->pc = 0x2e7360u;
    // NOP
    // 0x2e7364: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e7364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e7368: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e736c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e736cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7370: 0x0  nop
    ctx->pc = 0x2e7370u;
    // NOP
    // 0x2e7374: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e7374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e7378: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e737c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e737cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7380: 0x0  nop
    ctx->pc = 0x2e7380u;
    // NOP
    // 0x2e7384: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e7384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e7388: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e738c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e738cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7390: 0x0  nop
    ctx->pc = 0x2e7390u;
    // NOP
    // 0x2e7394: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2e7394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2e7398: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e7398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e739c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e73a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e73a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e73a4: 0x0  nop
    ctx->pc = 0x2e73a4u;
    // NOP
    // 0x2e73a8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2e73a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2e73ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E73ACu;
    SET_GPR_U32(ctx, 31, 0x2E73B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E73ACu, 0x2E73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73B4u;
label_2e73b4:
    // 0x2e73b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e73b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e73b8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e73b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e73bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e73c0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E73C0u;
    {
        const bool branch_taken_0x2e73c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e73c0) {
            ctx->pc = 0x2E7438u;
            return;
        }
    }
    ctx->pc = 0x2E73C8u;
    // 0x2e73c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e73cc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E73CCu;
    {
        const bool branch_taken_0x2e73cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e73cc) {
            ctx->pc = 0x2E7420u;
            return;
        }
    }
    ctx->pc = 0x2E73D4u;
    // 0x2e73d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e73d8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E73D8u;
    {
        const bool branch_taken_0x2e73d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e73d8) {
            ctx->pc = 0x2E7408u;
            return;
        }
    }
    ctx->pc = 0x2E73E0u;
    // 0x2e73e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E73E0u;
    {
        const bool branch_taken_0x2e73e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e73e0) {
            ctx->pc = 0x2E73F0u;
            return;
        }
    }
    ctx->pc = 0x2E73E8u;
    // 0x2e73e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E73E8u;
    {
        const bool branch_taken_0x2e73e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e73e8) {
            ctx->pc = 0x2E7448u;
            return;
        }
    }
    ctx->pc = 0x2E73F0u;
}
